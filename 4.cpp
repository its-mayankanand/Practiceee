#include <iostream>
#include <filesystem>
#include <string>
#include <exception>

namespace fs = std::filesystem;

void copy_directory(const fs::path& source, const fs::path& destination) {
    try {
        if (!fs::exists(destination)) {
            fs::create_directories(destination);
        }

        for (const auto& entry : fs::recursive_directory_iterator(source)) {
            const auto& path = entry.path();
            auto relative_path = fs::relative(path, source);
            fs::copy(path, destination / relative_path, fs::copy_options::overwrite_existing | fs::copy_options::recursive);
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Filesystem error: " << e.what() << '\n';
    } catch (const std::exception& e) {
        std::cerr << "General exception: " << e.what() << '\n';
    }
}

void copy(const fs::path& source, const fs::path& destination) {
    try {
        if (fs::is_directory(source)) {
            copy_directory(source, destination);
        } else if (fs::is_regular_file(source)) {
            fs::copy(source, destination, fs::copy_options::overwrite_existing);
        } else {
            std::cerr << "Unsupported file type: " << source << '\n';
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Filesystem error: " << e.what() << '\n';
    } catch (const std::exception& e) {
        std::cerr << "General exception: " << e.what() << '\n';
    }
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <source> <destination>\n";
        return 1;
    }

    fs::path source = argv[1];
    fs::path destination = argv[2];

    if (!fs::exists(source)) {
        std::cerr << "Source path does not exist: " << source << '\n';
        return 1;
    }

    // Check if the destination is a directory
    if (fs::exists(destination) && fs::is_directory(destination)) {
        destination /= source.filename();  // Append the source filename to the destination path
    }

    copy(source, destination);

    return 0;
}

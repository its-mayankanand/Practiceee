#include <iostream>
using namespace std;
#include <windows.h>

int main() {
    char buffer[MAX_PATH];
    DWORD dwRet = GetModuleFileName(NULL, buffer, MAX_PATH);

    if (dwRet == 0 || dwRet == MAX_PATH) {
        std::cerr << "Error getting module file name. Error code: " << GetLastError() << std::endl;
        return 1;
    }

    // Find the last backslash to truncate the string at the directory path
    char* lastSlash = strrchr(buffer, '\\');
    if (lastSlash != nullptr) {
        *lastSlash = '\0';
    }

    std::cout << "Current directory: " << buffer << std::endl;
    return 0;
}



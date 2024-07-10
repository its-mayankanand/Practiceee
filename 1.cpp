#include <iostream>
#include <time.h>

int main() 
{
    // Get the current time
    time_t currentTime = time(nullptr);

    // Convert it to local time
    tm* localTime = localtime(&currentTime);

    // Create a buffer to store the formatted date and time
    char buffer[100];

    // Format the date and time as "Weekday Month Day Year Hour:Minute:Second"
    strftime(buffer, sizeof(buffer), "%A %B %d %Y %H:%M:%S", localTime);

    // Print the formatted date and time
    std::cout << "Current system date, time, and day: " << buffer << std::endl;

    return 0;
}

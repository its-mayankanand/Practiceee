#include <iostream>
using namespace std;
#include <windows.h>

void printMemoryStatus() 
{
    MEMORYSTATUSEX memInfo;
    memInfo.dwLength = sizeof(MEMORYSTATUSEX);
    GlobalMemoryStatusEx(&memInfo);

    DWORDLONG totalPhysMem = memInfo.ullTotalPhys;
    DWORDLONG availPhysMem = memInfo.ullAvailPhys;

    cout << "Total RAM: " << totalPhysMem / (1024 * 1024) << " MB" << endl;
    cout << "Available RAM: " << availPhysMem / (1024 * 1024) << " MB" << endl;
}

int main() 
{
    printMemoryStatus();
    return 0;
}

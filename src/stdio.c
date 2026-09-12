#include "stdio.h"
#include <windows.h>
int putchar(int c)
{
   unsigned char ch=(unsigned char)c;
   DWORD written;
   BOOL success = WriteFile(GetStdHandle(STD_OUTPUT_HANDLE), &ch, 1, &written, NULL);
   if (!success || written != 1)
        return -1;
   return c;
   
}

int getchar(void)
{
    char ch;
    DWORD bytesRead;
    BOOL success = ReadFile(GetStdHandle(STD_INPUT_HANDLE), &ch, 1, &bytesRead, NULL);
    if (!success || bytesRead == 0){
        return -1;
    }

    return (unsigned char)ch;
}
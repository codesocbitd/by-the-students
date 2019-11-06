#include <stdio.h>
#include <string.h>

// Basic program that illustrates how to execute a stack based buffer
// overflow.
//
// Compile using gcc -fno-stack-protector -o out overflow.c
//
// ./overflow <my_string>

int main(int argc, char *argv[]) {
    char buf[256];
    strcpy(buf, argv[1]);
    printf("Input: %s\n", buf);
    return 0;
}

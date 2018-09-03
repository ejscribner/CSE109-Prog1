/*
CSE 109: Fall 2018
Elliot Scribner
ejs320
<Program Description>
Program #1
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
    for(int i = 0; i < argc; i++) {
        printf(argv[i]);
        printf("\n");
    }

    printf("Enter a value: ");
    char str[100];
    scanf("%c", str);
    printf("\n you entered: ");
    printf(str);
    return 0;
}
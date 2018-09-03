/*
CSE 109: Fall 2018
Elliot Scribner
ejs320
<Program Description>
Program #1
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void reverse(char* input);
int main(int argc, char** argv) {
    char* input;
    for(int i = 0; i < argc; i++) {
        fprintf(stdout, "Arg %d: %s\n", i, argv[i]);
        printf("\n");
    }
    fprintf(stdout, "Enter a value: ");
    fscanf(stdin, "%m[^\n]s", &input);
    input = "Test Testing";
    fprintf(stdout, "\nYou entered: %s\n", input);

   // free(input);

    reverse(input);
    return 0;
}
//currently not being hit by call
void reverse(char* input) {
    for(int i = 0; i < sizeof(input); i++) {
        printf("hi");
        printf((char*)input[i]);
        printf("\n");
    }
}

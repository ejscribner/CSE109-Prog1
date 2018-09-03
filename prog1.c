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
int main(int argc, char** argv) { 
    char* word;
    for(int i = 0; i < argc; i++) {
        fprintf(stdout, "Arg %d: %s\n", i, argv[i]);
        printf("\n");
    }
    printf("Enter a value: ");
    fscanf(stdin, "%m[^\n]s", &word);
    fprintf(stdout, "\nYou entered: %s\n", word);
    return 0;
}

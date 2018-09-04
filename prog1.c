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
#include <readline/readline.h>
#include <readline/history.h>

void reverse(char input);
int test();
int main(int argc, char** argv) {
    int t = test();
    char input[100];
    for(int i = 0; i < argc; i++) {
        fprintf(stdout, "Arg %d: %s\n", i, argv[i]);
        printf("\n");
    }
    fprintf(stdout, "%i", t);

    input = readline("Enter a Value: ");
    fprintf(stdout, "\nYou entered: %s\n", input);

    free(input);
    input = NULL;
    reverse(input);

    return 0;
}
//currently not being hit by call

int test() {
    return 4;
}

void reverse(char input) {
    for(int i = 0; i < sizeof(input); i++) {
        printf("hi");
        printf(input[i]);
        printf("\n");
    }
}

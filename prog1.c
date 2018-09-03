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
    char* word = NULL;
    word = (char*)malloc(5 * sizeof(char));
    strcpy(word, "bird");
    word[0] = 'b';
    word[1] = 'i';
    word[2] = 'r';
    word[3] = 'd';
    word[4] = '\0';

    for(int i = 0; i < argc; i++) {
        fprintf(stdout, "Arg %d: %s\n", i, argv[i]);
        printf("\n");
    }
    free(word);
    word = NULL;
    fprintf(stdout, "Word is %s\n", word);
    printf("Enter a value: \n");
    fscanf(stdin, "%m[^\n]s", &word);
    fprintf(stdout, "\nYou entered: %s\n", word);
    free(word);
    word = NULL;
    return 0;
}
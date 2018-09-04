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

void reverseWord(char* line, size_t length);
int main(int argc, char** argv) {
    char* line;
    for(int i = 0; i < argc; i++) {
        fprintf(stdout, "Arg %d: %s\n", i, argv[i]);
        printf("\n");
    }

    line = readline("Enter a Value: ");


    reverseWord(line, sizeof(line));
    fprintf(stdout, "Line is: %s", line);
    free(line);
    line = NULL;
    return 0;
}

void reverseWord(char* line, size_t length) {
    char *wordStart = line;
    char *wordEnd = line;
    while(*wordEnd) {
        wordEnd++;
        if(*wordEnd == '\0') {
            char temp;
            char *start = wordStart;
            char *end = wordEnd-1;
            while (start < end) {
                temp = *start;
                *start++ = *end;
                *end-- = temp;
            }
        }
    }
}

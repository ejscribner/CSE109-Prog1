/*
CSE 109: Fall 2018
Elliot Scribner
ejs320
Reverses, rotates, toggles, or removes digits from a user entered string
Program #1
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <ctype.h>

void reverseWord(char *line, size_t length);
void reverseUtil(char *start, char *end);
void toggle(char *line, size_t length);
void rotate(char *line, size_t length);
size_t removeDigits(char *line, size_t length);
void runTransform(int argc, char** argv, char* line);

int main(int argc, char **argv) {
    char *line = NULL;
    ssize_t lineLength = 0;
    size_t n = 0;
    while((lineLength = getline(&line, &n, stdin)) != -1) {
        if(lineLength > 0) {
            if(line[lineLength - 1] == '\n') {
                line[lineLength -1] = '\0';
            }
        }
        runTransform(argc, argv, line);
        fprintf(stdout, "%s\n", line);
        free(line);
        line = NULL;
    }
    return 0;
}

void runTransform(int argc, char** argv, char* line) {
    int isReverse = 0;
    int isRotate = 0;
    int isToggle = 0;
    int isRemoveDigits = 0;
    for (int i = 0; i < argc; i++)
    {
        if (strcmp(argv[i], "-r") == 0)
        {
            isReverse = 1;
        }
        if (strcmp(argv[i], "-o") == 0)
        {
            isRotate = 1;
        }
        if (strcmp(argv[i], "-t") == 0)
        {
            isToggle = 1;
        }
        if (strcmp(argv[i], "-n") == 0)
        {
            isRemoveDigits = 1;
        }
    }
    if (isReverse)
    {
        reverseWord(line, sizeof(line));
    }
    if (isToggle)
    {
        toggle(line, sizeof(line));
    }
    if (isRotate)
    {

    }
    if (isRemoveDigits)
    {

    }
}

void toggle(char *line, size_t length)
{
    char *wordEnd = line;
    while (*wordEnd)
    {
        if (isupper(*wordEnd))
        {
            *wordEnd = tolower(*wordEnd);
        } else if (islower(*wordEnd))
        {
            *wordEnd = toupper(*wordEnd);
        }
        wordEnd++;
    }
}

void reverseWord(char *line, size_t length)
{
    char *wordStart = line;
    char *wordEnd = line;
    while (*wordEnd)
    {
        wordEnd++;
        if (*wordEnd == ' ')
        {
            reverseUtil(wordStart, wordEnd - 1);
            wordStart = wordEnd + 1;
        } else if (*wordEnd == '\0')
        {
            reverseUtil(wordStart, wordEnd - 1);
        }
    }
}

void reverseUtil(char *start, char *end)
{
    char temp;
    while (start < end)
    {
        temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

void rotate(char *line, size_t length)
{

}

size_t removeDigits(char *line, size_t length)
{
    return 0;
}
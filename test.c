#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char** argv)
{
//	const char* word = "bird";
	char* word = NULL;
	word = (char*)malloc(5 * sizeof(char));
//	char* word = (char*)malloc(5 * sizeof(char));
//	int* nums = (int*)malloc(5 * sizeof(int));
//	fprintf(stdout, "Word lives at %p\n", &word);
//	fprintf(stdout, "Word points to %p\n", word);
//	fprintf(stdout, "Word is %s\n", word);
	strcpy(word, "bird");
//	fprintf(stdout, "Word is %s\n", word);
	word[0] = 'b';
	word[1] = 'i';
	word[2] = 'r';
	word[3] = 'd';
	word[4] = '\0';

//	word[0] = 't';
//	fprintf(stdout, "The word is %s\n", word);
	fprintf(stdout, "Number of args: %d\n", argc);
	for(int i=0; i<argc; i++)
	{
		char* theArg = argv[i];
//		fprintf(stdout, "Arg %d: %s\n", i, argv[i]);
		theArg[0]++;
		argv[i][0]++;
		fprintf(stdout, "Arg %d: %s\n", i, theArg);
		if(strcmp(argv[i], "c") == 0)
		{
			fprintf(stdout, "Match found\n");
		}
	}

	free(word);
	word = NULL;
	fprintf(stdout, "Word is %s\n", word);

//	fscanf(stdin, "%ms", &word);
//	fprintf(stdout, "You entered: %s\n", word);

	fscanf(stdin, "%m[^\n]s", &word);
	fprintf(stdout, "You entered: %s\n", word);

	free(word);
	word = NULL;
}

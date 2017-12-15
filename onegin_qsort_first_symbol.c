#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<assert.h>
#define MAX_STRINGS 1024
#define MAX_SYMBOLS 128

int compar(const void* a, const void* b)
{
	int j = 0;
	while(((char*)a)[j] == ((char*)b)[j])
	{
		j++;	
	}
	return ((char*)a)[j] - ((char*)b)[j];




}



int main() {
	int i = 0, j = 0;
	char str[MAX_STRINGS][MAX_SYMBOLS] = {0};
	FILE *input, *output;
        input = fopen ("input","r");
        output = fopen ("output","w");
        
	assert(input);
	assert(output);
	assert(!ferror(input));
	assert(!ferror(output));


	for(;fgets(str[i], sizeof(str) - 1, input);i++)
	{

	}


	qsort(str, i, MAX_SYMBOLS , compar);


	for( j = 0; j < i; j++)
	{
		fprintf(output, "%s", str[j]);

	}




	fclose (output);
	fclose (input);

	return 0;
}

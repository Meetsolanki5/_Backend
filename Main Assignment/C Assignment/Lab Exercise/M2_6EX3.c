#include<stdio.h>
#include<conio.h>
#include <string.h>

int main() 
{
    char sentence[1000];
    char longestWord[100];
    char currentWord[100];
    int i = 0, j = 0, maxLen = 0, wordCount = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    while (sentence[i] != '\0') 
	{
        if (!isspace(sentence[i]) && sentence[i] != '\n')
		{
            currentWord[j++] = sentence[i];
        } 
		else if (j > 0) 
		{
            currentWord[j] = '\0'; // End current word
            wordCount++;

            if (j > maxLen)
			{
                maxLen = j;
                strcpy(longestWord, currentWord);
            }
            j = 0;
        }
        i++;
    }
    
    if (j > 0) 
	{
        currentWord[j] = '\0';
        wordCount++;
        if (j > maxLen) 
		{
            maxLen = j;
            strcpy(longestWord, currentWord);
        }
    }

    printf("\nTotal number of words: %d\n", wordCount);
    printf("Longest word: %s\n", longestWord);
    printf("Length of longest word: %d\n", maxLen);

    return 0;
}


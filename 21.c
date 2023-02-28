#include <stdio.h>

int main()
{
    char word1[40], word2[40], word3[40], word4[40];
    printf("Enter text: \n");
    scanf("%s %s %s %s", word1, word2, word3, word4);
    printf("word1 = %s\nword2 = %s\nword3 = %s\nword4 =%s\n", word1, word2, word2, word4);
    printf("%s %s %s %s ", word1, word2, word3, word4);
    return 0;
}
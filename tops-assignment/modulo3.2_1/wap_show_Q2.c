#include <stdio.h>
int main()
{
    // Vowel or Consonant using switch case //

    char ch;
    printf("enter ch "); // (a,e,i,o,u ,A,E,I,O,U )
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
        printf("%c is vowal", ch);
        break;
    case 'e':
        printf("%c is vowal", ch);
        break;
    case 'i':
        printf("%c is vowal", ch);
        break;
    case 'o':
        printf("%c is vowal", ch);
        break;
    case 'u':
        printf("%c is vowal", ch);
        break;
    case 'A':
        printf("%c is vowal", ch);
        break;
    case 'E':
        printf("%c is vowal", ch);
        break;
    case 'O':
        printf("%c is vowal", ch);
        break;
    case 'U':
        printf("%c is vowal", ch);
        break;

    default:
        printf("%c is consonant", ch);

        break;
    }

    return 0;
}
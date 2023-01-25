#include <stdio.h>
int main()

// WAP of Addition Subtraction Multiplication and Division using Switch case.(Must Be Menu Driven) // 

{

    float num1;
    float num2, answer;
    char opretion;

    printf("enter first naumber: ");
    scanf("%f", &num1);
    printf("selecte opretion : ");
    scanf("%s", &opretion);
    printf("enter second naumber: ");
    scanf("%f", &num2);

    switch (opretion)
    {
    case '+':
        answer = num1 + num2;
        printf("%.2f", answer);
        break;

    case '-':
        answer = num1 - num2;
        printf("%.2f", answer);
        break;

    case '*':
        answer = num1 * num2;
        printf("%.2f", answer);
        break;

    case '/':
        answer = num1 / num2;
        printf("%.2f", answer);
        break;

    case '%':
        answer = (int)num1 % (int)num2;
        printf("%d", (int)answer);
        break;

    default:
        printf(" opretion is not valide");
        break;
    }
    return 0;
}
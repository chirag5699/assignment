#include <stdio.h>
#include <string.h>
int main()
{
    char name[50];
    printf("enter your name :  \n");
    gets(name);

    printf("your name is--> %s", name);

   // ---------   strlen   --------- //

    char line[100];
    printf("enter line");
    gets(line);
   // lingth celculet in intigar deta type
    int lingth = strlen(line);

    printf("lingth of string is %d", lingth);

    //---------  stecpy  ------------//

    char string1[100]="chirag";
    char string2[100];
    // string2 velue copy to string1//
    strcpy(string2, string1);
    printf("string1=%s,string2=%s", string1, string2);

    //----------------   strcat   -----------//
    // conacetents two string addition (+) = jodna //

        char name[20] = "chirag";
        char surname[20] = "katrodiya";
        strcat(name, surname);
       //(jesme jodna he , jisko jodna he)
        printf("name = %s,suename =%s", name, surname);

   // ----------  strupr  --------//
   // upper mines small-->>capital  //
    char name[20] = "chirag";

    printf("%s", strupr(name));

    //----------  strlwr  --------//
    // lowar mines capital-->> small  //

     printf("%s", strlwr(name));

    //----- strrev -----//

   char name[20] = "katrodiya";
   printf("%s", strrev(name));

    //  ------ strcmp ---- //
    // comper two string  //

    // 0 -> same
    // 1 -> when first is greterthen second.
    // -1 -> when first is small then second.

    char string1[20] = "chirag";
    char string2[20] = "chirag";

    int answer=strcmp(string1,string2);
    printf("answer is %d", answer);
    return 0;
}
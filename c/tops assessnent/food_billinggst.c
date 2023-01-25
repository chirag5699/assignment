#include <stdio.h>
int main()
{
    int food, qun;

    char choice;
    int ammont, ammont1 = 0, ammont2 = 0, ammont3 = 0, ammont4 = 0, ammont5 = 0, net_ammont = 0;
    int gst_par, price, gst_price, orignal_net_price;

menu:
    printf("--------->>> will come hotel di'vila <<<-------------");
    printf("plese enter your choice\n");
    printf("   item             que              price\n");
    printf("1.)kesar pista          1.                100 rs  \n");
    printf("2.)dal tadka            1.                220 rs \n");
    printf("3.)sp'di villa          1.                350 rs \n");
    printf("4.)sholey               1.                120 rs \n");
    printf("5.)garlic naan          1.                110rs \n");

    printf("you have selecte food...(1-5)");
    scanf("%d", &food);
    switch (food)
    {
    case 1:
        printf("you have selecte kesar pista-->\n");
        printf("selecte qun...");
        scanf("%d", &qun);
        ammont1 = qun * 100;
        printf("ammont1=%d\n", ammont1);
        net_ammont += ammont1;
        printf("net_ammont is %d\n", net_ammont);

        break;
    case 2:

        printf("you have selecte dal tadka-->\n");
        printf("selecte qun...");
        scanf("%d", &qun);
        ammont2 = qun * 220;
        printf("ammont2=%d", ammont2);
        net_ammont += ammont2;
        printf("net_ammont is %d", net_ammont);

        break;
    case 3:
        printf("you have selecte sp'di villa-->\n");
        printf("selecte qun...");
        scanf("%d", &qun);
        ammont3 = qun * 350;
        printf("ammont3=%d", ammont3);
        net_ammont += ammont3;
        printf("net_ammont is %d", net_ammont);

        break;

    case 4:
        printf("you have selecte sholey-->\n");
        printf("selecte qun...");
        scanf("%d", &qun);
        ammont4 = qun * 120;
        printf("ammont4=%d", ammont4);
        net_ammont += ammont4;
        printf("net_ammont is %d", net_ammont);
        break;

    case 5:
        printf("you have selecte garlic naan-->\n");
        printf("selecte qun...");
        scanf("%d", &qun);
        ammont5 = qun * 110;
        printf("ammont5=%d", ammont5);
        net_ammont += ammont5;
        printf("net_ammont is %d", net_ammont);
        break;

    default:
        printf("please select food");

        printf("\n");
        goto menu;
        break;
    }
    printf("\n you went to plase more order ?(press y or n)");
    scanf("%c", &choice);
    scanf("%c", &choice);
    if (choice == 'y' || choice == 'Y')
    {
        goto menu;
    }
    else if (choice == 'n' || choice == 'N')
    {
        printf("--------  bill  ---------------\n");
        net_ammont = ammont1 + ammont2 + ammont3 + ammont4 + ammont5;

        gst_price = (float)(net_ammont * 18) / 100;
        printf("gst_price(.18%) is %d", gst_price);
        orignal_net_price = net_ammont + gst_price;
        printf("\norignal_net_price(gst include) is %d\n", orignal_net_price);
    }
    else
    {
        printf("thank you for visit");
    }

    return 0;
}
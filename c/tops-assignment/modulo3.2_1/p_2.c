#include <stdio.h>
int main()
{
    int choice, price, gst_par;
    printf("enter choice (1.tv 2.ac 3.wm 4.frige 5.gijar)\n");
    scanf("%d", &choice);

    printf("enter price\n");
    scanf("%d", &price);
    printf("enter gst par");
    scanf("%d", &gst_par);
    // int gst_price = price * gst_par / 100;
    // printf("gst_price is %d", gst_price);

    // float net_price = orignal_price + gst_price;
    // printf("net_price is %f", net_price);

    switch (choice)
    {
    case 1 ://(tv)

      printf("choice is tv\n");
      int gst_price = price * gst_par / 100;
      printf("gst_price is %d\n", gst_price);

      float net_price = price + gst_price;
      printf("net_price is %.2f\n", net_price);

      break;
    case 2 ://(ac)
       { printf("choice is ac\n");
        int gst_price = price * gst_par / 100;
        printf("gst_price is %d\n", gst_price);

        float net_price = price + gst_price;
        printf("net_price is %.2f\n", net_price);
        break;}

    case 3 ://(wm)
      {  printf("choice is wm\n");
        int gst_price = price * gst_par / 100;
        printf("gst_price is %d\n", gst_price);

        float net_price = price + gst_price;
        printf("net_price is %.2f\n", net_price);
        break;
      }
    case 4 ://(frige)
      {  printf("choice is frige\n");
        int gst_price = price * gst_par / 100;
        printf("gst_price is %d\n", gst_price);

        float net_price = price + gst_price;
        printf("net_price is %.2f\n", net_price);
        break;}

    case 5 ://(gijar)
       { printf("choice is gijar\n");
        int gst_price = price * gst_par / 100;
        printf("gst_price is %d\n", gst_price);

        float net_price = price + gst_price;
        printf("net_price is %.2f\n", net_price);
        break;}

    default:
        printf("choice careact namber");

        break;
    }
    return 0;
}
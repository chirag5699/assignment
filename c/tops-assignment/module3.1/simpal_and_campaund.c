#include <stdio.h>
//include <math.h>

int main()
{

    // principal, rate, time, si, ci;
    // simpal & compund interest
    // si formula is (p*r*t)/100
    // ci formula is
    // p*(pow(1+r/100,t)-1);

    float p, r, t, si, ci, v;
    printf("enter p value : ");
    scanf("%f", &p);           // total valau

    printf("enter r value(%) : ");  // rate
    scanf("%f", &r);

    printf("enter t value : ");
    scanf("%f", &t);                   // time
    
    si = (p * r * t) / 100;
    // v = (1 + r / 100);

    ci = p * (pow(1 + r / 100, t));
    v = ci - p;                       // campaund interst - total valau

    printf("si is %f\n", si);
    printf("ci is %f\n", v);
    printf("total ci is %f\n", ci);

    return 0;
}
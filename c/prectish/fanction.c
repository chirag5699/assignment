#include <stdio.h>
int add(int a,int b)    //decleretion
{
  int ans;           // definetion
    ans = a + b; 
    //printf("ans is %d", ans);
    return ans;
}
int main()

{
    int x , y ;         
    printf("enter is x :");
    
    scanf("%d", &x);
    printf("enter is y :");
    scanf("%d", &y);
    add(x,y);
    int v = add(12, 12); // call
    printf("%d", v);
    return 0;
}
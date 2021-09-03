#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    
    int results[t];
    
    for(int i=0;i<t;i++)
    {
        int a,b;
        scanf("%d%d", &a, &b);
        int difference = abs(a - b);
        results[i] = difference/10 + (difference%10!=0?1:0); 
    }
    
    for(int i=0;i<t;i++)
    {
        printf("%d\n",results[i]);
    }
    
}

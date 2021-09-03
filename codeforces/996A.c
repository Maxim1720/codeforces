#include <stdio.h>

int main()
{
    const int vals[] = {1,5,10,20,100};
    const int size = 5;
    
    int n;
    scanf("%d",&n);
    
    int count = 0; 
    
    for(int i=size-1;i>=0;i--)
    {
        if(n >= vals[i])
        {
            count += n/vals[i];
            n = n % vals[i];
        }
        
    }
    printf("%d", count);
}
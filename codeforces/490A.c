#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    int one[n], two[n], three[n], ind[3];
    
    ind[0]=ind[1]=ind[2]=0;
    
    for(int i=0;i<n;i++)
    {
        int t;
        scanf("%d", &t);
        
        
        if(t == 1)
        {
            one[ind[0]++] = i+1;
        }
        else if(t == 2)
        {
            two[ind[1]++] = i+1;
        }
        else if(t == 3)
        {
            three[ind[2]++] = i+1;
        }
    }
    
    int min = n;
    for(int i=0;i<3;i++)
    {
        if(ind[i] < min)
        {
            min = ind[i];
        }
    }
    
    printf("%d\n", min);
    for(int i=0;i<min;i++)
    {
        printf("%d %d %d\n", one[i],two[i],three[i]);
    }
    
    
    return 0;
}
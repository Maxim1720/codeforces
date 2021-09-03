#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    scanf(" %d", &n);
    
    bool results[n];
    
    int p;
    scanf("%d", &p);
    int p_arr[p];
    for(int i=0;i<p;i++)
    {
        scanf(" %d", &p_arr[i]);
    }
    
    int q;
    scanf(" %d", &q);
    int q_arr[q];
    for(int i=0;i<q;i++)
    {
        scanf(" %d", &q_arr[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            if(p_arr[j] == i+1)
            {
                results[i] = true;
            }
        }
        
        for(int j=0;j<q;j++)
        {
            if(q_arr[j] == i+1)
            {
                results[i] = true;
            }
        }
    }
    
    
    for(int i=0;i<n;i++)
    {
        if(!results[i])
        {
            printf("Oh, my keyboard!");
            return 0;
        }
    }
    printf("I become the guy.");
    return 0;
}

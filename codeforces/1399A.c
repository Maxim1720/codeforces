#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int comp(const void *elem1, const void* elem2);


int main()
{
    int t;
    scanf(" %d", &t);
    
    bool results[t];
    
    for(int i=0;i<t;i++)
    {
        results[i] = true;
        
        int n;
        scanf(" %d", &n);
        int a[n];
        for(int j=0;j<n;j++)
        {
            scanf(" %d", &a[j]);
        }
        
        qsort(a,n,sizeof(*a),comp);
        for(int j=0;j<n-1 && results[i];j++)
        {
            if(a[j+1] - a[j] > 1)
            {
                results[i] = false;
            }
            
        }
    }
    
    
    for(int i=0;i<t;i++)
    {
        if(results[i])
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    
}

int comp(const void *elem1, const void* elem2)
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    
    int result = 0;
    if (f > s){
        result = 1;
    } 
    if (f < s) {
        result = -1;
    }
    return result;
}


#include <stdbool.h>
#include <stdio.h>

bool check(int n, int m, int k)
{
    if(n*m-1 == k)
    {
        return true;
    }
    return false;
}

void printResult(bool yes_no)
{
    if(yes_no)
    {
        printf("YES\n");
        return;
    }
    printf("NO\n");
}


int main()
{
    int n, m, k;
    
    int t;
    scanf("%d", &t);
    
    bool yes_no_arr[t];
    
    for(int i=0;i<t;i++){
        scanf("%d%d%d", &n, &m, &k);
        yes_no_arr[i] = check(n,m,k);
    }
    
    for(int i=0;i<t;i++)
    {
        printResult(yes_no_arr[i]);
    }
}
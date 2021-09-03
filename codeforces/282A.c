#include <stdio.h>
#include <stdlib.h>

#define COMMAND_SIZE 3

int x_value(int x, char * com)
{
    char c = com[1];
    
    if(c == '-')
    {
        x--;
    }
    else
    {
        x++;
    }
    
    return x;
}

int main()
{
    int n;
    char com[COMMAND_SIZE];
    int x = 0;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        getchar();
        fgets(com, COMMAND_SIZE+1, stdin);
        x = x_value(x, com);
    }
    printf("%d", x);
    
}




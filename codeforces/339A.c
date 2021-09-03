#include<stdio.h>
#include<string.h>

int main()
{
    const char c_nums[3] = {'1','2','3','\0'};
    
    char expression[100];
    char result[100];
    fgets(expression, 100+1, stdin);
    
    int size = 0;
    int k = 0;
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<strlen(expression);j+=2)
        {
            if(expression[j] == c_nums[i])
            {
                result[k++] = expression[j];
                size++;
            }
        }
        
    }
    
    for(int i=0;i<size;i++)
    {
        printf("%c", result[i]);
        
        if(i < size-1)
        {
            printf("+");
        }
    }
}

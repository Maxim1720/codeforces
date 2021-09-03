#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int matrix_size = 25;

    for(int i=1;i<=matrix_size;i++)
    {
        
        if(getchar() == '1')
        {
            printf("%d", abs(13 - i));
            return 0;
        }
        getchar();
    }
    
}
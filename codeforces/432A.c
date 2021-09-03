#include <stdio.h>

int main()
{
	int n, k;
	scanf("%d%d",&n,&k);
	
	int count = 0;
	for(int i=0;i<n;i++)
	{
		int num;
		scanf("%d",&num);
		num+=k;
		if(num <= 5)
		{
			count++;
		}
	}
	printf("%d\n", count/3);
	


}
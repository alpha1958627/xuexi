
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int cnt,max=0;
	scanf("%d",&cnt);
	int array[100005];
	while(cnt--)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		array[a]+=b;
		if(array[max]<array[a])
			max=a;
	}
	printf("%d %d\n",max,array[max]);
	free(array);
	return EXIT_SUCCESS;
}


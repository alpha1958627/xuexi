#include<stdio.h>
#include<string.h>
int main()
{
	int a[10];
	int fb=1;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(i>0)
		{
			if(a[i]&&fb)
			{printf("%d",i);
			a[i]--;
			fb=0;
			while(a[0]--)printf("0");
			}
		}
	}
	for(int i=1;i<10;i++)
	while(a[i]--){
		printf("%d",i);
	}
	return 0;
}

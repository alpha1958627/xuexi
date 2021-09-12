#include<stdio.h>
#include<string.h> 

typedef struct stu {
	char a[20];
	int c;
}
stu;
stu a[10000];
int main() {
	int n;
	scanf("%d",&n);
	while(n--)
	{
		stu now;
		int index;
		scanf("%s %d %d",now.a,&index,&now.c);
		strcpy(a[index].a,now.a);
		a[index].c=now.c;
	}
	scanf("%d",&n);
	while(n--)
	{
			int index;
		scanf("%d",&index);
		printf("%s %d\n",a[index].a,a[index].c);

	}
	return 0;
}

#include<stdio.h>
#include<string.h>

int main() {
	char a[1001];
	int b[11]={0};
	scanf("%s",a);
	for(int i=0; i<strlen(a); i++) {
		b[a[i]-'0']++;
	}
	for(int i=0; i<11; i++)
	{
		if(b[i])
		printf("%d:%d\n",i,b[i]);
	}
	return 0;
}

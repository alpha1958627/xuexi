#include<stdio.h>
#include<string.h>
#include<ctype.h>
char c[1000]= {0};
int book[128]= {0};
int main() {
	char a[1000],b[1000];
	scanf("%s%s",a,b);
	int n=0,k,i=0,m=0;
	while(a[i]) {
		if(a[i]==b[m]) {
			i++;
			m++;
		} else {

			int k=toupper(a[i]);
			if(!book[k]) {
				c[n++]=k;
				book[k]=1;
			}
			i++;
		}
	}
	printf("%s\n",c);
	return 0;
}

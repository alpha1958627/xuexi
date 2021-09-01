#include<stdio.h>
#include<string.h>
#include<math.h>
int main() {
	int a;
	char b;
	scanf("%d %c",&a,&b);
	int n=1;
	do n++;
	while (a>2*pow(n,2)-1);
	n--;
	int left=a-(2*pow(n,2)-1);
	for(int i=0; i<n; i++) {
		int l=2*n-1-2*i;
		int k=i;
		while(k--)
			putchar(' ');
		while(l--)
			putchar(b);
		putchar('\n');}
	for(int i=1; i<n; i++) {
		int l=2*i+1;
		int k=n-1-i;
		while(k--)
			putchar(' ');
		while(l--)
			putchar(b);
		putchar('\n');
	}printf("%d",left);
	return 0;
}

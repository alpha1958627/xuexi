#include<stdio.h>
#include<math.h>
int is(int n) {
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i==0)
			return 1;
	}
	return 0;
}
void nb(int n) {
	int i=0,j,m=0;
	int zhishu[100]= {0};
	int dishu[100]= {0};
	int l=n;
	for(j=2; j<=l/2; j++) {
		while (n%j==0) { //提取因数
			if(dishu[m]!=j) { //当因数出现两次
				dishu[++m]=j;
			}
			zhishu[j]++;
			n/=j;
		}
	}
	for(int i=1; i<=m; i++) {
		printf("%d",dishu[i]);
		if(zhishu[dishu[i]]>1) {
			printf("^%d",zhishu[dishu[i]]);
		}
		if(i<m)
			printf("*");
	}

}
int main() {
	int n;
	int c;
	scanf("%d",&n);
	c=is(n);
	if(c)
		nb(n);
	else
		printf("%d",n);
	return 0;
}


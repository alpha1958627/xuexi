#include<stdio.h>
#define maxn 10000

int prime[maxn];
bool is_prime[maxn];

int xianxing(int n) {

	is_prime[0]=0;
	is_prime[1]=0;
	int i=2,cnt=0;
	while(i<n) {
		is_prime[i]=1;
		i++;
	}
	for(int i=2; i<n; i++) {
		if(is_prime[i]==1) {
			prime[cnt++]=i;
			for(int j=1; j<cnt&&prime[j]*i<n; j+=i) {
				is_prime[prime[j]*i]=0;
				if(i%prime[j]==0)
				break;
			}
		}
	}
	return cnt;
}
int main() {
	int n;
	scanf("%d",&n);
	printf("%d",xianxing(n));

}

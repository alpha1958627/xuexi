#include<stdio.h>
#define maxn 10000

int prime[maxn];
bool is_prime[maxn];

int aishi(int n) {

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
			for(int j=2*i; j<=n; j+=i) {
				is_prime[j]=0;
			}
		}
	}
	return cnt;
}
int main() {
	int n;
	scanf("%d",&n);
	printf("%d",aishi(n));

}

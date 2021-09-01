#include<stdio.h>
int main() {
	int cnt,sum=0,i,k=1;
	char num[17];
	char book[20]= {'1','0','X','9','8','7','6','5','4','3','2'};
	scanf("%d",&cnt);
	int table[20]= {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	while(cnt--) {
		scanf("%s",num);
		sum=0;
		for(int i=0; i<17; i++) {
			sum+=(num[i]-'0')*table[i];
		}
		sum%=11;
		
		if(book[sum]!=num[17]) {
			printf("%s\n",num);
			k=0;
		}
	}
	if(k)
		printf("All passed\n");

	return 0;
}

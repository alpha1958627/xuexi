#include<stdio.h>

void excha(int *a,int *b) {
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void quick(int a[],int left,int right) {
	int i=left;
	int j=right;
	int temp;
	int mid=(a[left]+a[right])/2;
	while(i<=j) {
		while(a[i]<mid)
			i++;
		while(a[j]>mid)
			j--;
		if(i<=j) {
			excha(&a[i],&a[j]);
			i++;
			j--;
		}

		if(j>left) {
			quick(a,left,j);
		}
		if(i<right) {
			quick(a,i,right);
		}
	}
}
int main(void) {
	int a[]= {1,2,3,4,5,8,9,0,5,67,5,675};
	int len=sizeof(a)/sizeof(a[0]);
		quick(a,0,len-1);
	for(int i=0; i<len; i++)
		printf("%d ",a[i]);
	return 0;
}



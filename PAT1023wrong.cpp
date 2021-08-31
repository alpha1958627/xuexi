#include<stdio.h>
#include<string.h>
void cha(int *a,int *b) {
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
void qs(int a[10],int l,int r) {
	int i=l;
	int j=r;
	int temp;
	int mid=(a[l]+a[j])/2;
	while(i<=j) {
		while(a[i]<mid)
			i++;
		while(a[j]>mid)
			j--;
		if(i<=j) {
			cha(&a[i],&a[j]);
			    i++;
			    j--;
		}
		if(j>l)qs(a,l,j);
		if(i<r)qs(a,i,r);
		}
	}

int main() {
	int a[10],b[10];
	int cnt=0,j;
	for(int i=0;i<10;i++) {
		scanf("%d",&a[i]);
		if(a[i]==0)
			cnt++;//0сеох
	}qs(a,0,9);
	cha(&a[0],&a[cnt]);
for(int i=0;i<10;i++)
		printf("%d",a[i]);
	return 0;
}

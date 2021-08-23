#include<stdio.h>

int main() {
	int a;
	int b[5];
	scanf("%d",&a);
    	
		do{b[1]=a%10;
		b[2]=a/10%10;
		b[3]=a/100%10;
		b[4]=a/1000%10;
		for(int i=1;i<4;i++)
			for(int j=1;j<=4-i;j++)
				if(b[j]>b[j+1])
				{
					int temp=b[j];
					b[j]=b[j+1];
					b[j+1]=temp;
				}
				int c=1000*b[4]+100*b[3]+10*b[2]+b[1];
				int d=1000*b[1]+100*b[2]+10*b[3]+b[4];
				a=c-d;
				printf("%04d - %04d = %04d\n",c,d,a);}
				while(a!=0&&a!=6174);
	
	return 0;
}



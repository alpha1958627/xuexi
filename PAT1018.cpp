#include<stdio.h>

int main() {
	int cnt;
	scanf("%d%*c",&cnt);
	int wina[5]= {0},winb[5]= {0},wa=0,wb=0,equ=0,max;
	char maxa='B',maxb='B';
	while(cnt--) {
		char q,w;
		scanf("%c %c%*c",&q,&w);
		if(q=='C'&&w=='J'||q=='J'&&w=='B'||q=='B'&&w=='C') {
			wa++;
			if(q=='B')wina[1]++;
			if(q=='C')wina[2]++;
			if(q=='J')wina[3]++;
			max=wina[1],maxa='B';
			if(wina[2]>max)
				max=wina[2],maxa='C';
			if(wina[3]>max)
				max=wina[3],maxa='J';
			continue;
		} else if(w=='C'&&q=='J'||w=='J'&&q=='B'||w=='B'&&q=='C') {
			wb++;
			if(w=='B')winb[1]++;
			if(w=='C')winb[2]++;
			if(w=='J')winb[3]++;
			max=winb[1],maxb='B';
			if(winb[2]>max)
				max=winb[2],maxb='C';
			if(winb[3]>max)
				max=winb[3],maxb='J';
			continue;
		} else
			equ++;
	}
	printf("%d %d %d\n%d %d %d\n",wa,equ,wb,wb,equ,wa);
	printf("%c %c\n",maxa,maxb);
	return 0;
}



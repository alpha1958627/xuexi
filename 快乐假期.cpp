#include <stdio.h>
#define leap(y) (y%4==0 && y%100!=0 || y%400==0)
int WeekYearday(int years, int months, int days) {
	int WeekDay=-1;
	if(1==months || 2==months) {
		months+=12;
		years--;
	}
	WeekDay=(days+1+2*months+3*(months+1)/5+years+years/4-years/100+years/400)%7;
	return WeekDay;
}
struct d {
	int y,m,d;
};

long days(struct d d1,struct d d2) {
	int mon[2][13]= {{0,31,28,31,30,31,30,31,31,30,31,30,31},
		{0,31,29,31,30,31,30,31,31,30,31,30,31}
	};

	int i;
	long td=0;
	for(i=d1.y; i<d2.y; i++)
		td+=leap(i)?366:365;

	for(i=1; i<d1.m; i++)
		td-=mon[leap(d1.y)][i];
	td-=d1.d-1;

	for(i=1; i<d2.m; i++)
		td+=mon[leap(d2.y)][i];
	td+=d2.d-1;

	return td;
}




int main() {
	struct d d1,d2;
	long td;
	int n;
	scanf("%d",&n);
	while(n--) {
		int year,month,day;	int weekend=0;
		scanf("%d%d%d",&year,&month,&day);
		d1.y=year;
		d1.m=month;
		d1.d=day; 
		int p1=WeekYearday(year,month,day);
		scanf("%d%d%d",&year,&month,&day);
		d2.y=year;
		d2.m=month;
		d2.d=day; 
		int p2=WeekYearday(year,month,day);
		int k=8+p2-p1;
		if(p1<6)
		td=days(d1,d2);
		td++;
		if(k>=td)
		{
		k-=7;
		if(p1==0)
		weekend++;
		if(p2==6)
		weekend++;
		}
		else
		weekend=(td-k)/7*2+2;
	if(3*weekend<=td)	
		printf("happy");
	else
		printf("sad");
	}
	return 0;
}

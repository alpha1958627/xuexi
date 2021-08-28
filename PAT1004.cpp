#include<stdio.h>
#include<string.h> 
struct student {
		char name[11];
		char num[11];
		int point;
	}stu;
	
int main() {
	
	int n;
	scanf("%d",&n);
struct student max= {"","",0
	};
struct student min= {"","",101
	};

	while(n--) {
		student stu;
		scanf("%s%s%d",stu.name,stu.num,&stu.point);
		if(stu.point>max.point) {
		max=stu;
		}
		if(stu.point<min.point) {
		min=stu;
		}
	}
	printf("%s %s\n",max.name,max.num);
	printf("%s %s\n",min.name,min.num);
	return 0;
}


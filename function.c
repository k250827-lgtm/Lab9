#include<stdio.h >
float interest(int p,int r,int t ){
	float interest=p*(r/100.0)*t;
	return interest;
}

int main (){
	int p,r,t;
	printf("enter principle amount ");
	scanf("%d",&p);
	
	printf("enter Rate ");
	scanf("%d",&r);
	
	printf("enter time ");
	scanf("%d",&t);
	
	printf("%.2f",interest(p,r,t));
}

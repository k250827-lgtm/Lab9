#include <stdio.h>
int sum(int NUMBER[]){

int sum=0;
int i;
for(i=0;i<5;i++){
	sum+=arr[i];
}
return sum;
}
int main(){
	int i;
	int number[5]={1,2,3,4,5};


	printf("%d",sum(number));	
}


#include<stdio.h>
int sum( int arr[]){
	int sum=0;
int i;
for(i=0;i<5;i++){
	sum+=arr[i];
	
}
return sum;
}
int main(){
	int i;
	int arr[5];
	for (i=0;i<5;i++){
		printf("enter prices");
		scanf("%d",&arr[i]);
	}


	printf("%d",sum(arr));	
}

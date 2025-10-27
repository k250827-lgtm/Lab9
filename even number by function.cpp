#include<stdio.h>
int evenNumber(int a){
	
if ( a%2==0)
printf("even number ");
return a ;
}
else{
	printf("Odd");
}
}
int main(){
	printf("%d",evenNumber(12));
}

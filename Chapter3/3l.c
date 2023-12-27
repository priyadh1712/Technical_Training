#include<stdio.h>

int main(){
	int a,b;
	printf("Enter the coordinates : ");
	scanf("%d %d",&a,&b);
	if(a==0 && b==0){
		printf("Origin");
		return 0;
	}
	if(a==0){
		printf("X-Axis");
		return 0;
	}
	if(b==0){
		printf("Y-Axis");
		return 0;
	}
	printf("Not on Axis");
	return 0;
}

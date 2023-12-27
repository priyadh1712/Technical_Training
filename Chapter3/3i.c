#include<stdio.h>

int main(){
	int l,b;
	printf("Enter the length and breadth : ");
	scanf("%d%d",&l,&b);
	printf(((l*b)>(2*l+2*b))?"Greater Area":"Greater Perimeter");
	return 0;
}

#include<stdio.h>
void main(){
	int i,j,n;
	printf("enter a number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			int a = n/2+1;
			if(j==a || i==a)
			printf("*");
			else printf(" ");
			
		}
		printf("\n");
	}
}

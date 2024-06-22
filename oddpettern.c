#include<stdio.h>
void main(){
	int i,j,n;
    printf("enter a number:");
    scanf("%d",&n);
    int a = 1;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("%d ",a);
			a=a+2;
		}
		printf("\n");
	}
}

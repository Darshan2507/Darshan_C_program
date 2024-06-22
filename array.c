#include<stdio.h>
void main(){
	int x[10] [10],y[10] [10],z[10] [10],i,j,row,column;
	printf("Enter a row:");
	scanf("%d",&row);
	printf("Enter a column:");
	scanf("%d",&column);
	printf("Enter 1st matrix :");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			scanf("%d",&x[i] [j]);
		}
	}
	
	printf("Enter 2nd matrix :");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
		scanf("%d",&y[i] [j]);	
		}
	}
	

	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
		z[i] [j] = x[i] [j] + y[i] [j];	
		}
	}
	printf("Addition of 2 matrix is : \n");
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			printf("%d ",z[i][j]);
		}
		printf("\n");
	}
	getch();
}

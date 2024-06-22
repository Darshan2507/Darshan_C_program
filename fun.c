             //call by value//
#include<stdio.h>
amit(int p,int q)
{
	int c=p+q;
	printf("Addition is %d",c);
}
main(){
	int a,b;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);// & is use to know address//
	amit(a,b);//function call//
	getch();//enter a character to stop the program is know as getch() function.//
}

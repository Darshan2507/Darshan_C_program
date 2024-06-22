void add(){
	int x,y,z;
			 printf("Enter a two numer :");
			 scanf("%d %d",&x,&y);
			 z=x+y;
			 printf("Addition is %d",z);
}
void sub(){
	int x,y,z;
			printf("Enter a two number :");
			scanf("%d %d",&x,&y);
			z=x-y;
			printf("Substraction is %d",z);
}
void mul(){
	int x,y,z;
			printf("Enter a two number :");
			scanf("%d %d",&x,&y);
			z=x*y;
			printf("Multiplication is %d",z);
}	
	void main(){
	while(1){
		int ch;
		printf("\npress 1,Addition");
		printf("\npress 2,Substraction");
		printf("\npress 3,Multiplication");
		printf("\npress 4,Exit");
		printf("\n\nEnter your choice : ");
		scanf("%d",&ch);
		switch(ch){
		case 1:{
			add();
			break;
		}
		case 2:{
			sub();
			break;
		}
		case 3:{
			mul();
			break;
		}
		case 4:{
			exit(0);
			break;
		}
		default :{
			printf("Wrong input");
		}
		}
	}
}

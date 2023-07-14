#include<stdio.h>
int main(){
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int n4 = 0;
				printf("please enter the first number ");
				scanf(" %d",&n1);
	
				printf("please enter the second number ");
				scanf(" %d",&n2);	
	
				printf("please enter the third number ");
				scanf(" %d",&n3);
	
				printf("please enter the fourth number ");
				scanf(" %d",&n4);	
				
			int x = 0;
			
			x = n1;
		
	
	
	if(n2<x){x = n2;}else if(n3<x){x=n3;}else if(n4<x){x= n4;}
	
	
	if((n1+n2+n3+n4)==0){printf("%d\n",x);}
	}

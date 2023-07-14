#include<stdio.h>
int main(){
	int a = 0;
	int b = 0;
	int c = 0;
	int res = 0;
	int small = 0;

			printf("please enter the first number ");
			scanf("%d",&a);

			printf("please enter the second number ");
			scanf("%d",&b);
	
			printf("please enter the third number ");
			scanf("%d",&c);

			if(a>b && b>c){
					small = c;
			}else if(a>b && c>b){
				
					small = b;
				}else{
					small = a;
					}
		
		
		
		for(int i =2;i<=small;++i){
			
			if(a%i == 0 && b%i == 0 && c%i == 0){
				
					if(i>res){
						
						res = i;
						}
					}
			}
		
			printf("the res is %d\n",res);
}


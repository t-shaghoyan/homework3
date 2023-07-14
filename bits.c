#include<stdio.h>
int main(){
	int num = 0;
	int power = 1;
	int bits = 1;
		printf("please enter the number ");
		scanf(" %d",&num);

		for(int i =0; i<= num; ++i){
		power *=2;
		//++bits;
		if((power-1) >= num){break;}
		++bits;
		}
		//printf("here is the num %d\n",num);
		//printf("here is the power %d\n",power);
		//printf("here is the bits %d\n",bits);

	char binary[bits+1];
	power = power/2;
		for(int j = 0;j<bits;j++){
		if(( num-power)>=0){
			binary[j]='1';num -=power;power /=2; }
			else{
					binary[j]='0';
					power /=2;
				}
	}
	binary[bits+1]='\0';

	
	printf("here is the binary %s\n",binary);
	

	char newBinary[]="00000";
			
	if((sizeof(binary)-1)>=5){
			if(binary[4]=='0'){
				binary[4]='1';
			}
		}else{
			int lenght = sizeof(binary)-1;
			int lenght1 = sizeof(newBinary)-1;
			int index = lenght1 - lenght;

			printf("here is the length of binary %d\n",lenght);
		int i = 0;	
			for(int j =index; j<lenght;j++){
			
				newBinary[j]=binary[i];
			i++;
					
			}
		}
		if(sizeof(binary)-1 >=5){
			printf("here is the new binary %s\n",binary);

		}else{
			if(newBinary[4]=='0'){
				newBinary[4]='1';
					}
			printf("here is the NewBinary %s\n",newBinary);	
		}
		
			/*
			else if(i<5){
		//	printf("you need more bits \n");
			int bitsF =5-(sizeof(binary)-1);
			
			printf("here is the bits you need %d\n",bitsF);
		 	char newBinary[5+1] ; 
		//	newBinary[bits+1+bitsF] = '\0';
			for(int i =0;i<5-1;++i){
			if(i<=bitsF){
				newBinary[i]='0';
				}
			}

		newBinary[5+1] = '\0';

			printf("here is the new binary %s\n",newBinary);
			//printf("here is the size of binary after adding %ld\n",sizeof(newBinary));
			}
		}
	*/
	/*
	if(bits >= 5 && binary[5]=='0' ){
		
			binary[5]='1';
			printf("here is the another binary %s\n",binary);
		}else if(bits >=5 && binary[5]=='1'){
	
			printf("here is the binary without changing %s\n",binary);
		}else{
		printf("you need more bits\n");
	 
		}
		*/
		
}

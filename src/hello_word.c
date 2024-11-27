#include <stdio.h>
int main()
{
	int numInicial;
	printf("Introduce el número de elementos (máximo 10):");
	do{
		scanf("%d",&numInicial); 
	}
	while(0>= numInicial >=10);
     if(numInicial!=0)
     {
	printf("%1d",numInicial);

	int array [numInicial]; 

	for(int i = 0;0<=numInicial;i++){
		printf("\n Introduce el elemento %d:",i+1);
		int num;
		scanf("%d",&num);
		printf("%1d",num);
		array[i]= num;
	}
	printf("Array original: %d",array[0]);
	for(int i = 1;0<=numInicial;i++){
		printf("%1d", array[i]);
	}
     }
     else{
	printf("Qué pena");
     } 
	return 0;
 }
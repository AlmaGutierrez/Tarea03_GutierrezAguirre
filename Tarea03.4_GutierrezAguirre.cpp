#include<stdio.h>
#include<conio.h>
main()
{
		int num1,num2,num3,mayor;
		printf("Introduce el primer numero: ");
		scanf("%d",&num1);
		printf("Introduce el segundo numero; ");
		scanf("%d",&num2);
		printf("introduce el tercer numero: ");
		scanf("%d",&num3);
		if (num1>num2){
			if(num1>num3){
				mayor=num1;
			}
			else{
				mayor=num3;
			}
		} 
		else{
			if(num2>num3){
				mayor=num2;
			}
			else{
				mayor=num3;
			}
		}
	printf("El mayor de los 3 numeros es: %d.\n", mayor);
	getch();
}

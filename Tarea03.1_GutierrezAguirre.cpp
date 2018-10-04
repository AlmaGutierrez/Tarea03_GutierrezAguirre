#include<stdio.h>0
#include<conio.h>
main()
{
	int numero;
	printf("Introduce un numero: ");
	scanf("%d",&numero);
	if(numero%2==0){
	printf("El numero es par\n");
	}
	else{
		printf("El numero es impar\n");	
	}
	getch();
}


#include<stdio.h>
#include<conio.h>
main()
{
	int numero, total, total2;
	printf("Introduce un numero: ");
	scanf("%d",&numero);
	if(numero%2==0){
	total=numero*numero;
	printf("El numero es par y es elevado al cuadrado: %d",  total);
	}
	else{
			total2=numero*numero*numero;
			printf("El numero es impar y es elevado al cubo: %d", total2);
	}
	getch();
}


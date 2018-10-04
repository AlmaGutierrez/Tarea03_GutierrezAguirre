#include<stdio.h>
#include<stdlib.h>
int main()
{
	long int dinero,cambio,b1000,b500,b200,b100,b50,b20,m10,m5,m1,temp;
	printf("Introduce cantidad: ");
	scanf("%li",&dinero);
	cambio=dinero;
	b1000=cambio/1000;
	temp=cambio%1000;
	b500=temp/500;
	temp%=500;
	b200=temp/200;
	temp%=200;
	b100=temp/100;
	temp%=100;
	b50=temp/50;
	temp%=50;
	b20=temp/20;
	temp%=20;
	m10=temp/10;
	temp%=10;
	m5=temp/5;
	m1=temp%5;
	
	printf("Billetes de 1000: %li\n", b1000);
	printf("Billetes de 500: %li\n", b500);
	printf("Billetes de 200: %li\n", b200);
	printf("Billetes de 100: %li\n", b100);
	printf("Billetes de 50: %li\n", b50);
	printf("Billetes de 20: %li\n", b20);
	printf("Monedas de 10: %li\n", m10);
	printf("Monedas de 5: %li\n", m5);
	printf("Monedas de 1: %li\n", m1);
}

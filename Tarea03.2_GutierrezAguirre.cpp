#include<stdio.h>
#include<conio.h>
main()
{
	int calificacion;
	printf("Introduce la calificacion: ");
	scanf("%d",&calificacion);
	if(calificacion>=70){
		printf("Felicidades has aprobado\n");
	}
	else{
		printf("Continua con tus estudios\n");
	}
	getch();
}

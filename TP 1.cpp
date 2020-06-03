#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

// este proyecto esta realizado sin vectores, el proximo lo subire con los mismos en reemplazo de los switch
int main()
{
	
	float importefactura, totalcobrado, por1,por2,por3,por4,por5,por6;
	float totmoz1=0,totmoz2=0,totmoz3=0,totmoz4=0,totmoz5=0,totmoz6=0;
	int nfactura,nmozo=0,nmesa=0,mozoper,personas,flag=0,mozo1=0,mozo2=0,mozo3=0,mozo4=0,mozo5=0,mozo6=0,max=0,mesamax=0;
	int mesa1=0,mesa2=0,mesa3=0,mesa4=0,mesa5=0,mesa6=0,mesa7=0,mesa8=0,mesa9=0,mesa10=0,mesa11=0,mesa12=0,aux,aux2;
	
	printf("Ingrese numero de factura\n");
	scanf("%d", &nfactura);
	while(flag==0)
	{
	if(nfactura!=0)
	{
	do
	{
	printf("Ingrese numero de mozo\n");
	scanf("%d", &nmozo);
	}while(nmozo>6);
	do
	{
	printf("Ingrese numero de mesa\n");
	scanf("%d", &nmesa);
	}while(nmesa>12);
	printf("Ingrese cantidad de personas por mesa\n");
	scanf("%d", &personas);
	printf("Ingrese el monto de la cuenta\n");
	scanf("%f", &importefactura);
	
	totalcobrado = totalcobrado + importefactura;
	
	switch(nmozo)
	{
		case 1: mozo1 = mozo1 + personas;// cant de personas atendidas
				totmoz1 = totmoz1 + importefactura;// total cobrado
				if(mozo1>max)
				{
					max = mozo1;
					aux = nmozo;
				}
		break;
		case 2: mozo2 = mozo2 + personas;
				totmoz2 = totmoz2 + importefactura;
				if(mozo2>max)
				{
					max = mozo2;
					aux = nmozo;
				}
		break;
		case 3: mozo3 = mozo3 + personas;
				totmoz3 = totmoz3 + importefactura;
				if(mozo3>max)
				{
					max = mozo3;
					aux = nmozo;
				}
		break;
		case 4: mozo4 = mozo4 + personas;
				totmoz4 = totmoz4 + importefactura;
				if(mozo4>max)
				{
					max = mozo4;
					aux = nmozo;
				}
		break;
		case 5: mozo5 = mozo5 + personas;
				totmoz5 = totmoz5 + importefactura;
				if(mozo5>max)
				{
					max = mozo5;
					aux = nmozo;
				}
		break;
		case 6: mozo6 = mozo6 + personas;
				totmoz6 = totmoz6 + importefactura;
				if(mozo6>max)
				{
					max = mozo6;
					aux = nmozo;
				}
		break;
		/*default: printf("Error numero de mozo\n");
				 system("pause");*/
	}	
	

		
	switch(nmesa)
	{
		case 1: mesa1++;// veces que se ocupo la mesa
				if(mesa1>mesamax)
				{
					mesamax = mesa1;
					aux2 = nmesa;
				}
				break;
		case 2:mesa2++;
				if(mesa2>mesamax)
				{
					mesamax = mesa2;
					aux2 = nmesa;
				}
				break;
		case 3:	mesa3++;
				if(mesa3>mesamax)
				{
					mesamax = mesa3;
					aux2 = nmesa;
				}
				break;
		case 4:	mesa4++;
				if(mesa4>mesamax)
				{
					mesamax = mesa4;
					aux2 = nmesa;
				}
				break;
		case 5:	mesa5++;
				if(mesa5>mesamax)
				{
					mesamax = mesa5;
					aux2 = nmesa;
				}
				break;
		case 6:	mesa6++;
				if(mesa6>mesamax)
				{
					mesamax = mesa6;
					aux2 = nmesa;
				}
				break;
		case 7:	mesa7++;
				if(mesa7>mesamax)
				{
					mesamax = mesa7;
					aux2 = nmesa;
				}
				break;
		case 8:	mesa8++;
				if(mesa8>mesamax)
				{
					mesamax = mesa8;
					aux2 = nmesa;
				}
				break;
		case 9:	mesa9++;
				if(mesa9>mesamax)
				{
					mesamax = mesa9;
					aux2 = nmesa;
				}
				break;
		case 10: mesa10++;
				if(mesa10>mesamax)
				{
					mesamax = mesa10;
					aux2 = nmesa;
				}
				break;
		case 11: mesa11++;
				if(mesa11>mesamax)
				{
					mesamax = mesa11;
					aux2 = nmesa;
				}
				break;
		case 12: mesa12++;
				if(mesa12>mesamax)
				{
					mesamax = mesa12;
					aux2 = nmesa;
				}
				break;
				/*default: printf("Error en numero de mesa\n");
						 system("pause");*/
	}
	
	
	system("cls");
	printf("Ingrese numero de factura\n");
	scanf("%d", &nfactura);
	}
	else
	{
		printf("Ud ingreso factura 0");
		flag=1;
	}
	}
	
	por1 = totmoz1 * 100 / totalcobrado;// porcentaje cobrado 
	por2 = totmoz2 * 100 / totalcobrado;
	por3 = totmoz3 * 100 / totalcobrado;
	por4 = totmoz4 * 100 / totalcobrado;
	por5 = totmoz5 * 100 / totalcobrado;
	por6 = totmoz6 * 100 / totalcobrado;
	
	printf("La cantidad de personas atendidas por cada mozo es:\nmozo 1 %d\nmozo 2 %d\nmozo 3 %d\nmozo 4 %d\nmozo 5 %d\nmozo 6 %d\n", mozo1,mozo2,mozo3,mozo4,mozo5,mozo6);
	printf("La caja diaria es de %.2f\n", totalcobrado);
	printf("Porcentaje cobrado por cada mozo sobre el total:\nmozo 1 %.2f\nmozo 2 %.2f\nmozo 3 %.2f\nmozo 4 %.2f\nmozo 5 %.2f\nmozo 6 %.2f\n", por1,por2,por3,por4,por5,por6);
	printf("El mozo que atendio mas personas es el mozo numero %d\n", aux);
	printf("La mesa que se facturo mas veces es la numero %d\n", aux2);


	system("pause");
	return 0;
	
}

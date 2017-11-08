//Busqueda Binaria y ordenacion por seleccion
//Vector numeros dados

//metodo de ordenacion y metodo de la busqueda binaria 
#include<stdio.h>
#include<stdlib.h>

int main(){
	int vector[10]={7,4,3,2,1,4,5,2,3,5};
	int i, j, aux, min, dato, inf, sup, mitad;
	char band ='F';
	for(i=0;i<10;i++){
		min=i;
		for(j=i+1;j<10;j++){
			if (vector[j]<vector[min]){
				min=j;
			}
		}
		aux=vector[i];
		vector[i]=vector[min];
		vector[min]=aux;
	}
	for(i=0;i<10;i++){
		printf("%d", vector[i]);
	}
	printf("\nDame el valor que deseas buscar\n");
	scanf("%d", &dato);
	
	inf=0;
	sup=10;
	
	while (inf<=sup){
		mitad=(inf+sup)/2;
		if (vector[mitad]==dato){
			band = 'V';
			break;
		}
		if(vector[mitad]>dato){
			sup=mitad;
			mitad=(inf+sup)/2;
		}
		if (vector[mitad]<dato){
			inf=mitad;
			mitad=(inf+sup)/2;
		}
	}
	if(band=='F'){
		printf("EL numero %d no esta en la serie de numeros",  dato); 
	}
	else {
		if (band=='V'){
			printf("El numero %d si esta en la posicion %d", dato, mitad );
		}
	}
	return(0);
}





//Vector numeros dados por usuario

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i, j, n, aux, min, inf, sup, mitad, dato;
	int vector[n];
	char band='F';
	printf("Dame el tamaño del vector\n");
	scanf("%d", &n);
	printf("Dame los valores desordenados\n");
	for (i=0;i<n;i++){
		scanf("%d", &vector[i]);
	}
	//metodo de ordenacion
	for(i=0;i<n;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(vector[j]<vector[min]){
				min=j;
			}
		}
		aux=vector[i];
		vector[i]=vector[min];
		vector[min]=aux;
	}
	for(i=0;i<n;i++){
		printf("%d ", vector[i]);
	}
	printf("\nDame el valor que deseas buscar\n");
	scanf("%d", &dato);
	inf=0;
	sup=n;
	while(inf<=sup){
		mitad=(inf+sup)/2;
		if (vector[mitad]==dato){
			band='V';
			break;
		}
		if(vector[mitad]>dato){
			sup=mitad;
			mitad=(inf+sup)/2;
		}
		if(vector[mitad]<dato){
			inf=mitad;
			mitad=(inf+sup)/2;
		}
	}
	if (band=='F'){
		printf("El numero %d no esta en la serie de numeros\n", dato);
	}else{
		if(band=='V'){
			printf("El numero %d esta en la serie de numeros y su posicion es %d\n", dato, mitad);
		}
	}
	return(0);
}

//Vector con numeros aleatorios 
//metodo de ordenacion y metodo de la busqueda binaria 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i, j, aux, min, inf,sup, mitad, dato;
	int vector[10];
	char band ='F';
	srand(time(NULL));
	for (i=0;i<10;i++){
		vector[i]=1+rand()%((20+1)-1);
	}
	for(i=0;i<10;i++){
		min=i;
		for(j=i+1;j<10;j++){
			if(vector[j]<vector[min]){
				min=j;
			}
		}
		aux=vector[i];
		vector[i]=vector[min];
		vector[min]=aux;
	}
	for(i=0;i<10;i++){
		printf("%d ", vector[i] );
	}
    
    printf("\nDame el valor que deseas encontrar\n");
    scanf("%d", &dato);
    inf=0;
    sup=10;
    while (inf<=sup){
    	mitad=(inf+sup)/2;
    	if(vector[mitad]==dato){
    		band='V';
    		break;
		}
		if (vector[mitad]>dato){
			sup=mitad;
			mitad=(inf+sup)/2;
		}
		if(vector[mitad]<dato){
			inf=mitad;
			mitad=(inf+sup)/2;
		}
	}
	if (band=='F'){
		printf("El nuemro %d no esta en la serie de numeros", dato);
	}else{
		if(band=='V'){
			printf("El numero %d esta en la serie nuemros y su posicion es %d\n", dato, mitad);
		}
	}
    
    
	return(0);
}
	

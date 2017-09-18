#include <stdio.h>

int main(){
	
	int num1=0;
	int num2=0;
	int num3=0;
	printf("Escribe un numero\n");
	scanf("%d",&num1);
	printf("Escribe un numero distinto al primero\n");
	scanf("%d",&num2);
	printf("Escribe un numero distinto al primero y al segundo\n");
	scanf("%d",&num3);
	if(num1>0&&num2>0&&num3>0){
		if(num1!=num2&&num2!=num3&&num1!=num3){
			if(num1<num2&&num1<num3){
				printf("%d es el menor",num1);
			}
			if(num2<num1&&num2<num3){
				printf("%d es el menor",num2);
			}
			if(num3<num1&&num3<num2){
				printf("%d es el menor",num3);
			}
		}else{
			printf("Algun numero se repite con otro");
		}
	}else{
		printf("Los numeros deben ser mayores que 0");
	}
}

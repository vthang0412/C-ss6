#include<stdio.h>

int main() {
	float pass;
	printf("Moi ban nhap mat khau cua ban: ");
	scanf("%f", &pass);
	float test;
		do{
		printf("Moi ban nhap lai mat khau cua ban: ");
	    scanf("%f", &test);
		    if(test != pass){
		    printf("Mat khau sai: \n");
			}
		}   while(test != pass);
		    printf("Mat khau dung \n");
		    return 0;
		}

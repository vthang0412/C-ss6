#include <stdio.h>

int main(){
	int number;
	int tongsole;
	printf("Nhap 5 so nguyen\n");
	for(int i=1;i<6;i++){
		printf("Nhap so thu %d: ",i);
		scanf("%d",&number);
		if(number % 2 !=0){
			tongsole +=number;
		}
	}
	printf("Tong cac so le la:%d",tongsole);
	return 0;
}

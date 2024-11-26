#include <stdio.h>

int main(){
	int number;
	int soChan = 0,soLe = 0;
	printf("Nhap vao 5 so nguyen\n");
		for (int i=1;i<6;i++){		
			printf ("Nhap vao so thu %d \n",i);
			scanf("%d",&number);	
		if(number % 2==0 ){
			soChan++;
	}else{
		    soLe++; 
		}
	} 
	    printf("So luong so chan la:%d\n",soChan);
		printf("So luong so le la:%d",soLe);
	    return 0;	
}

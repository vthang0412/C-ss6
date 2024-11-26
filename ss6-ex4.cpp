#include<stdio.h>
#include<math.h>

int main() {
	int a, b, c;
    printf("Moi ban nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Moi ban nhap so thu hai: ");
    scanf("%d", &b);
    printf("Moi ban nhap so thu ba: ");
    scanf("%d", &c);
	    int delta;
	    delta = b * b - 4 * a * c;
	    float x1, x2, x;
		    if(delta > 0){
		    	x1 = (-b + sqrt(delta)) / (2 * a);
		    	x2 = (-b - sqrt(delta)) / (2 * a);
		    	printf("Phuong trinh co 2 nghiem x1 la %f va x2 la %.2f\n", x1, x2);
			} else if(delta == 0){
				x = -b / (2 * a);
				printf("Phuong trinh co nghiem x la %.2f\n", x);	   
			} else {
				printf("Phuong trinh vo nghiem\n");	
			}
			return 0;
	    
	
}

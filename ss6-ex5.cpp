#include <stdio.h>

int main() {
    int year, month;
    printf("Nhap nam: ");
    scanf("%d", &year);
    printf("Nhap thang (1-12): ");
    scanf("%d", &month);
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Thang %d trong nam %d co 31 ngay.\n", month, year);
            break;
        case 4: case 6: case 9: case 11:
            printf("Thang %d trong nam %d co 30 ngay.\n", month, year);
            break;
        case 2:
            if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
                printf("Thang %d trong nam %d co 29 ngay.\n",month, year);
            } else {
                printf("Thang %d trong nam %d co 28 ngay.\n",month, year);
            }
            break;
        default:
            printf("Thang khong hop le!\n");
            break;
    }

    return 0;
}


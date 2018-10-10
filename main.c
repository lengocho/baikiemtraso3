#include <stdio.h>
#include <stdlib.h>

int findMaxValue(int arrayNumber[], int a) {
    int Max = arrayNumber[0];
    for (int i = 0; i < a; i++) {
        if (Max < arrayNumber[i]) {
            Max = arrayNumber[i];
        }
    }
    return (Max);
}

int findMinValue(int arrayNumber[], int a) {
    int Min = arrayNumber[0];
    for (int i = 0; i < a; i++) {
        if (Min > arrayNumber[i]) {
            Min = arrayNumber[i];
        }
    }
    return (Min);
}

int main() {
    int size;
    printf("Nhap vao so phan tu trong mang: ");
    scanf("%d", &size);
    if (size > 10) {
        return 0;
    }
    int arrayNumber[size];
    int sizeOfArray = sizeof(arrayNumber) / sizeof(int);
    int *pointer = arrayNumber;
    int i;
    for (i = 0; i < sizeOfArray; i++) {
        printf("Nhap gia tri cua phan tu thu %d la: ", i + 1);
        scanf("%d", &arrayNumber[i]);
    }
    for (; pointer <= &arrayNumber[sizeOfArray - 1]; pointer++) {
        printf("%d\n", *pointer);
    }

    int choice;
    printf("Nhap vao lua chon cua ban: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Chon findMaxValue\n");
            findMaxValue(arrayNumber, size);
            printf("So lon nhat trong mang la %d\n", findMaxValue(arrayNumber, size));
            break;
        case 2:
            printf("Chon findMinValue\n");
            findMinValue(arrayNumber, size);
            printf("So nho nhat trong mang la %d\n", findMinValue(arrayNumber, size));
            break;
    }



    return 0;
}

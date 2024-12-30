#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void inputArray(int arr[][100], int n, int m) {
    printf("Nhap gia tri cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void printArray(int arr[][100], int n, int m) {
    printf("Gia tri cac phan tu cua mang theo ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void printCorners(int arr[][100], int n, int m) {
    printf("Cac phan tu o goc theo ma tran:\n");
    printf("%d %d\n", arr[0][0], arr[0][m-1]);
    printf("%d %d\n", arr[n-1][0], arr[n-1][m-1]);
}

void printBorders(int arr[][100], int n, int m) {
    printf("Cac phan tu nam tren duong bien theo ma tran:\n");
    for (int i = 0; i < m; i++) printf("%d ", arr[0][i]);
    for (int i = 1; i < n-1; i++) printf("%d %d ", arr[i][0], arr[i][m-1]);
    for (int i = 0; i < m; i++) printf("%d ", arr[n-1][i]);
    printf("\n");
}

void printDiagonals(int arr[][100], int n, int m) {
    printf("Cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || i + j == n - 1) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void printPrimes(int arr[][100], int n, int m) {
    printf("Cac phan tu la so nguyen to theo ma tran:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (isPrime(arr[i][j])) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n, m, choice;
    printf("Nhap so hang n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);

    int arr[100][100];

    do {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputArray(arr, n, m);
                break;
            case 2:
                printArray(arr, n, m);
                break;
            case 3:
                printCorners(arr, n, m);
                break;
            case 4:
                printBorders(arr, n, m);
                break;
            case 5:
                printDiagonals(arr, n, m);
                break;
            case 6:
                printPrimes(arr, n, m);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le.\n");
        }
    } while (choice != 7);

    return 0;
}
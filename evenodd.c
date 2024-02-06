#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of rows and columns of the 2D array: ");
    scanf("%d %d", &n, &m);

    int arr[n][m];
    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int oddCount = 0, evenCount = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }

    int oddArr[oddCount], evenArr[evenCount];
    int oddIndex = 0, evenIndex = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] % 2 == 0) {
                evenArr[evenIndex] = arr[i][j];
                evenIndex++;
            } else {
                oddArr[oddIndex] = arr[i][j];
                oddIndex++;
            }
        }
    }

    printf("\nEven elements of the 2D array are:\n");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", evenArr[i]);
    }

    printf("\nOdd elements of the 2D array are:\n");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", oddArr[i]);
    }

    return 0;
}
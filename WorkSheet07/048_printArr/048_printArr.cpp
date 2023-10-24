#include <stdio.h>

// 배열을 출력하는 함수
void printArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[5];

    // 값을 읽어들여 배열에 저장
    printf("5개의 정수 값을 입력하세요:\n");
    for (int i = 0; i < 5; i++) {
        scanf_s("%d", &arr[i]);
    }

    // 배열을 출력하는 함수 호출
    printf("배열 요소: ");
    printArr(arr, 5);


}
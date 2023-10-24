#include <stdio.h>

void print2DArray(int arr[][4], int col, int row) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int a[3][4] = { 
		{1,2,3,4}, 
		{5,6,7,8}, 
		{9,10,11,12} 
	};
	int col = sizeof(a[0]) / sizeof(int);
	int row = sizeof(a) / sizeof(a[0]);
	print2DArray(a, col, row);
	return 0;
}
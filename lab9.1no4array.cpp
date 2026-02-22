#include <stdio.h>

//void swapValue(int *a, int *b, int *c);
void swapArray(int a[], int b[], int size);
int main(){
	int a[] = {1,2,3}, b[] = {4,5,6};
	int size = sizeof(a) / sizeof(a[0]);
//	int a = 1, b = 2, c = 3;
//	printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
//	swapValue(&a,&b,&c);
//	printf("After swap function: a= %d, b=%d, c=%d\n", a, b, c);
	//calling swapArray()
	printf("Before swap function:\na = ");
	for (int i=0;i < size;i++){
		printf("%d ",a[i]);
	}
	printf("\nb = ");
	for (int i=0;i < size;i++){
		printf("%d ",b[i]);
	}
	swapArray(a, b, size);
	
	printf("\nAfter swap function:\na = ");
	for (int i=0;i < size;i++){
		printf("%d ",a[i]);
	}
	printf("\nb = ");
	for (int i=0;i < size;i++){
		printf("%d ",b[i]);
	}
	return 0;
}
	
//void swapValue(int *a,int *b,int *c){
//	int temp = *a;
//	*a = *b;
//	*b = *c;
//	*c = temp;
//}
void swapArray(int *a,int *b,int size){
	for (int i = 0; i < size; ++i) {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

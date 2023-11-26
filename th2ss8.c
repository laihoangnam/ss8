#include<stdio.h>
int main(){
	int n;
	printf("nhap so phan tu cua mang 1 chieu:");
	scanf("%d",&n);
	float numbers[n];
	for(int i=0;i<sizeof(numbers)/sizeof(float);i++){
		printf("numbers[%d]=",i);
		scanf("%f",&numbers[i]);
	}
	float sumNumbers = 0;
	for(int i=0; i<sizeof(numbers)/sizeof(float);i++){
		sumNumbers + numbers[i];
	}
	float avgNumbers = sumNumbers/(sizeof(numbers)/sizeof(float));
	printf("trung binh cong cac phan tu trong mang la:%.2f\n",avgNumbers);
}

#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++){
		printf("Nhap arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	int x, flag=0, y;
	printf("Nhap x = ");
	scanf("%d",&x);
	for(int i=0; i<n; i++){
		if(arr[i]<x){
			y=arr[i];
			flag=1;
		}else{
			flag=0;
		}
	}
	if(flag=1){
		printf("Cac gia tri nho hon x la: ");
		printf("%d",y);
	}
	
}

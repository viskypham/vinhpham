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
	int minx=arr[0];
	for(int i=0; i<n; i++){
		if(arr[i]>minx){
			minx=arr[i];
		}
	}
	if(minx<=0){
		printf("Mang toan so am!");
	}else{
		for(int i=0; i<n; i++){
			if(arr[i]>0 && arr[i]<minx){
				minx=arr[i];
			}
		}
		printf("So duong nho nhat: %d",minx);
	}
}

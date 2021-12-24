#include <stdio.h>
int main(){
	int n;
	printf("Nhap n = ");
	scanf("%d",&n);
	int arr[n];
	printf("Ta co mang arr[%d]\n",n);
	for(int i=0; i<n; i++){
		printf("Nhap arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	int S=0,count=0;
	float TB=0;
	for(int i=0; i<n; i++){
		if(arr[i]%2!=0){
			S+=arr[i];
			count++;
		}
	}
	if(count!=0){
		TB=(float)S/count;
		printf("Trung binh cong cac so le: %f",TB);
	}else{
		printf("Danh sach khong co so le!");
	}
	
}

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
	int S=0, count1=0, count2=0;
	for(int i=0; i<n; i++){
		if(arr[n]%2==0){
			count1++;
		}
		if(arr[i]%2!=0){
			S+=arr[i];
			count2++;
		}
	}
	float TB;
	if(count1!=0){
		if(count2!=0){
			TB=(float)S/count2;
			printf("Trung binh cong cac so le la: %f",TB);
		}else{
			printf("Danh sach khong co so le nao!");
		}
	}else{
		printf("Danh sach khong co vi tri chan nao!");
	}
}
	
	

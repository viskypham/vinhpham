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
	int sole, flag=0;
	for(int i=0; i<n; i++){
		if(arr[i]%2!=0){
			sole=arr[i];
			flag=1;
		}
	}
	if(flag==1){
		printf("So le cuoi cung trong mang la: %d",sole);
	}else{
		printf("Khong co so le nao trong mang!");
	}
	
}

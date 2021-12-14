#include <stdio.h>
#include <math.h>
int main(){
	int n;
	printf("n = ");
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		int count=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				count++;
			}
		}
		if(count==2){
			printf("SNT: %d\n",i);
		}
		
	}
}
//	while(i<n){
//		int j=1,count=0;
//		while(j<=i){
//			if(i%j==0){
//				count++;
//			}
//			j++;
//		}
//		if(count==2){
//			printf("SNT: %d\n",i);
//		}
//		i++;
//	}

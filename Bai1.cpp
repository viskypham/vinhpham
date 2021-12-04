#include <stdio.h>
#include <math.h>
int main(){
	int ngay;
	int thang;
	int S;
	int C;
	int thu;
	printf("Nhap ngay: ");
	scanf(" %d",&ngay);
	printf("Nhap thang: ");
	scanf(" %d",&thang);
 	if(ngay<=0||ngay>=32){
 		printf("Ngay khong hop le!\n",ngay);
 		return 0;
	 }
	 if(thang<=0||thang>=13){
	 	printf("Thang khong hop le!",thang);
	 	return 0;
	 }
	 if(thang==1){
		C=ngay%7;
		thu=C+1;
		printf("Ngay thu may trong nam: %d\n",ngay);
		if(thu==1){
			printf("Ngay thu may trong tuan: Chu Nhat",thu);
			return 0;
		}else{
			printf("Ngay thu may trong tuan: %d",thu);
			return 0;
		}
	 }
	 
	 if(thang==2){
	 	if(ngay>=29){
	 		printf("Ngay khong hop le!",ngay);
	 		return 0;
		 }else{
		 	S=31+ngay;
		 	printf("Ngay thu may trong nam: %d\n",S);
		 	C=S%7;
		 	thu=C+1;
		 	if(thu==1){
		 		printf("Ngay thu may trong tuan: Chu Nhat",thu);
		 		return 0;
			 }else{
			 	printf("Ngay thu may trong tuan: %d",thu);
			 	return 0;
			 }
		 }
	 }
	 
	 if(thang==3){
	 	int S;
	 	S=59+ngay;
	 	printf("Ngay thu may trong nam: %d\n",S);
	 	C=S%7;
	 	thu=C+1;
	 		if(thu==1){
		 		printf("Ngay thu may trong tuan: Chu Nhat",thu);
		 		return 0;
			 }else{
			 	printf("Ngay thu may trong tuan: %d",thu);
			 	return 0;
			 }
	 }
	 
	 if(thang==4){
	 	if(ngay>=31){
	 		printf("Ngay khong hop le!",ngay);
	 		return 0;
		 }else{
		 	int S;
		 	S=90+ngay;
		 	C=S%7;
		 	thu=C+1;
		 	printf("Ngay thu may trong nam: %d\n",S);
		 	if(thu==1){
		 		printf("Ngay thu may trong tuan: Chu Nhat",thu);
		 		return 0;
			 }else{
			 	printf("Ngay thu may trong tuan: %d",thu);
			 	return 0;
			 }
		 }
		 
	}
	if(thang==5){
	 	int S;
	 	S=120+ngay;
	 	printf("Ngay thu may trong nam: %d\n",S);
	 	C=S%7;
	 	thu=C+1;
	 		if(thu==1){
		 		printf("Ngay thu may trong tuan: Chu Nhat",thu);
		 		return 0;
			 }else{
			 	printf("Ngay thu may trong tuan: %d",thu);
			 	return 0;
			 }
	 }
	 if(thang==6){
	 	if(ngay>=31){
	 		printf("Ngay khong hop le!",ngay);
	 		return 0;
		 }else{
		 	int S;
		 	S=151+ngay;
		 	C=S%7;
		 	thu=C+1;
		 	printf("Ngay thu may trong nam: %d\n",S);
		 	if(thu==1){
		 		printf("Ngay thu may trong tuan: Chu Nhat",thu);
		 		return 0;
			 }else{
			 	printf("Ngay thu may trong tuan: %d",thu);
			 	return 0;
			 }
		 }
	}
	 if(thang==7){
	 	int S;
	 	S=181+ngay;
	 	printf("Ngay thu may trong nam: %d\n",S);
	 	C=S%7;
	 	thu=C+1;
	 		if(thu==1){
		 		printf("Ngay thu may trong tuan: Chu Nhat",thu);
		 		return 0;
			 }else{
			 	printf("Ngay thu may trong tuan: %d",thu);
			 	return 0;
			 }
	 }
	  if(thang==8){
	 	int S;
	 	S=212+ngay;
	 	printf("Ngay thu may trong nam: %d\n",S);
	 	C=S%7;
	 	thu=C+1;
	 		if(thu==1){
		 		printf("Ngay thu may trong tuan: Chu Nhat",thu);
		 		return 0;
			 }else{
			 	printf("Ngay thu may trong tuan: %d",thu);
			 	return 0;
			 }
	 }
	 if(thang==9){
	 	if(ngay>=31){
	 		printf("Ngay khong hop le!",ngay);
	 		return 0;
		 }else{
		 	int S;
		 	S=243+ngay;
		 	C=S%7;
		 	thu=C+1;
		 	printf("Ngay thu may trong nam: %d\n",S);
		 	if(thu==1){
		 		printf("Ngay thu may trong tuan: Chu Nhat",thu);
		 		return 0;
			 }else{
			 	printf("Ngay thu may trong tuan: %d",thu);
			 	return 0;
			 }
		 }
	}
	if(thang==10){
	 	int S;
	 	S=273+ngay;
	 	printf("Ngay thu may trong nam: %d\n",S);
	 	C=S%7;
	 	thu=C+1;
	 		if(thu==1){
		 		printf("Ngay thu may trong tuan: Chu Nhat",thu);
		 		return 0;
			 }else{
			 	printf("Ngay thu may trong tuan: %d",thu);
			 	return 0;
			 }
	 }
	 if(thang==11){
	 	if(ngay>=31){
	 		printf("Ngay khong hop le!",ngay);
	 		return 0;
		 }else{
		 	int S;
		 	S=304+ngay;
		 	C=S%7;
		 	thu=C+1;
		 	printf("Ngay thu may trong nam: %d\n",S);
		 	if(thu==1){
		 		printf("Ngay thu may trong tuan: Chu Nhat",thu);
		 		return 0;
			 }else{
			 	printf("Ngay thu may trong tuan: %d",thu);
			 	return 0;
			 }
		 }
	}
	if(thang==12){
	 	int S;
	 	S=334+ngay;
	 	printf("Ngay thu may trong nam: %d\n",S);
	 	C=S%7;
	 	thu=C+1;
	 		if(thu==1){
		 		printf("Ngay thu may trong tuan: Chu Nhat",thu);
		 		return 0;
			 }else{
			 	printf("Ngay thu may trong tuan: %d",thu);
			 	return 0;
			 }
	 }
}
	

	
	

	
	
	
	
	
	
	

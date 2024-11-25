#include <stdio.h>

int main(){
	
	printf("CALCULATOR\n");
	printf("\n");
	printf("1.Tong 2 so\n");
	printf("2.Hieu 2 so\n");
	printf("3.Tinh 2 so\n");
	printf("4.Thuong 2 so\n");
	printf("5.Thoat\n");
	printf("\n");
 
	int a,b,luachon,tong,hieu,tich;
	float thuong;
	printf("Lua chon phep tinh cua ban : ");
	scanf("%d",&luachon);
	printf("\n");
	printf("Nhap so thu nhat : ");
	scanf("%d",&a);
	printf("Nhap so thu hai : ");
	scanf("%d",&b);
	printf("\n");

	switch(luachon){
		case 1:
			tong=a+b;
			printf("Ket qua cua phep tinh %d + %d = %d",a,b,tong); 
			break;
		case 2:
			hieu=a-b;
			printf("Ket qua cua phep tinh %d - %d = %d",a,b,hieu);
			break;
		case 3:
			tich=a*b;
			printf("Ket qua cua phep tinh %d x %d = %d",a,b,tich);
			break;
		case 4:
			thuong=a/b;
			if(b > 0){
				printf("Ket qua cua phep tinh %d / %d = %.2f",a,b,thuong);
			}else{
				printf("Du lieu khong phu hop");
			}
			break;
		case 5:
			printf("Thoat tap vu");
			break;	
	}
	return 0;
}

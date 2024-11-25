#include <stdio.h>
int main(){
	int songuyen = 5;
	int i;
	
	printf("So da cho truoc la so 5\n");
	
	while(i != songuyen){
		if(i==songuyen){
			break;
		}
		printf("Moi ban nhap dung ki tu cho truoc : ");
		scanf("%d",&i);
		
	}
	
	return 0;
}

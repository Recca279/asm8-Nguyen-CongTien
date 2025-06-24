#include <stdio.h>
#include <math.h>
#include "khaibaoham.h"

int main(){
	float tg567 = dientich(5,6,7);
	printf("Dien tich:%f\n",tg567);
	
	int t = tinhtongchuso(1234);
	printf("Tong chu so:%d\n",t);

	int u=ucln(4,8);
	printf("UCLN:%d\n",u);
	

	int b=BCNN(4,8);
	printf("BCNN:%d\n",b);

	int s=luythua(2,3);
	printf("S:%d\n",s);

	

	int xyz[5]={4,1,7,9,2};
	//su dung ham tim so lon nhat
	int h= solonnhattrongmang(xyz,5);
	printf("high:%d\n",h);

	sortArray(xyz,5);
	for(int i=0;i<5;i++){
		printf("%d   ",xyz[i]);
	}
}
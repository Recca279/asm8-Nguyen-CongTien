#include <stdio.h>
#include <math.h>

void menu(){  // void: hàm chỉ in, không trả kết quả.
	printf("Danh sach cac mon an:\n");
	printf("1.Vit quay Bac Kinh\n");
	printf("2.Lau Tu Xuyen\n");
	printf("3.Heo quay Lang Son\n");
	printf("4.Ga ham bat bao\n");
	printf("5.Che cung dinh Hue\n");
}
// a,b là các tham số, khi sử dụng hàm bắt buộc phải truyền vào-> truyền giá trị
int total(int a, int b){  // ham total ham tinh tong co tra ve ket qua ngoai man hinh
	int c = a+b;// int c tuc la c la 1 so nguyen thi phai tra ve kq ham totla la 1 so nguyen
	return c;// return tra ve ben ngoai 1 gia tri
}

int giaithua(int n){
	int s=1;
	for(int i=1;i<=n;i++){
		s=s*i;
	}
	return s;
}

// viet ham tinh chu vi tam giac khi biet do dai ba canh
int chuvi(int a,int b,int c){
	int cv =a+b+c;
	return cv;
		
}

// viet ham tinh dien tich tam giac khi biet do dai ba canh
float dientich(int a, int b, int c){
	float p = (a+b+c)/2.0;// float p=chuvi(a,b,c)/2.0;
	float s = sqrt (p*(p-a)*(p-b)*(p-c));
	return s;
}


int tinhtongchuso(int n){
    int tong=0;
    while (n > 0) {
        tong += n % 10;  // Lấy chữ số cuối
        n /= 10;         // Bỏ chữ số cuối
    }

    return tong;
}

// UCLN
int ucln(int a, int b){
    while (b!=0) {
        int c = b;
        b = a % b;
        a = c;
    }
    return a;
}

// Hàm tìm bội chung nhỏ nhất (BCNN)
int BCNN(int a, int b) {
    return (a * b) / ucln(a, b);
}

// tinh S=x^y
int luythua(int x, int y){
	int s=1;
	for(int i=0;i<y;i++){
		s=s*x;
	}
	return s;
}
int solonnhattrongmang(int ary[],int size){ // ky hieu ary[]la mang, ko can dien so trong [] , size: kich thuoc mang
	int high =ary[0];
	for(int i=0;i<size;i++){
		if(ary[i]>high){
			high=ary[i];
		}
	}
	return high;

}



void sortArray(int ary[],int size){
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-i-1;j++){
			if(ary[j]>ary[j+1]){
				int tmp=ary[j];
				ary[j]=ary[j+1];
				ary[j+1]=tmp;
			}
		}
	}
}

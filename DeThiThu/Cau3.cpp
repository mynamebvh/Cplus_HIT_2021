#include <iostream>
#include <math.h>
using namespace std;
void NhapMang(double a[], int n){
	for(int i = 0 ; i < n; i++){
		cout << "nhap a[" << i << "] = ";
		cin >> a[i];
	}
}

void XuatMang(double a[], int n){
	for(int i = 0 ; i < n; i++){
		cout << a[i] << " ";
	}
}

double TrungBinhCong(double a[], int n){\
	int dem = 0, tong = 0;
	for(int i = 0 ; i < n ;i++){
		if(a[i] > 10){
			dem++;
			tong += a[i];
		}
	}
	if(dem == 0)
		return 0;
	else 
		return 1.0 * tong / dem;
}

void Chen(double a[], int &n, double x, int vt){
	if(vt < 0){
		vt = 0;
	}
	for(int i = n; i > vt; i--){
 	   a[i] = a[i-1];
	}
    a[vt] = x;
    ++n;
}

bool KiemTraSNT (int n){
	if (n == 1)
		return false;
	for(int i = 2 ; i <= sqrt(n) ; i++){
		if(n % i == 0)
			return false;
	}
	return true;
}

void Chen1SoTruocSNT(double a[], int &n){
	double x;
	cout << "\nnhap so can chen: ";
	cin >> x;
	
	if(x - (int) (x) != 0 || !KiemTraSNT(x)){
		for(int i = 0 ; i < n ; i++){
			if(KiemTraSNT(a[i])){
				Chen(a,n,x,i);
				i++;
			}
		}
	}
	else {
		cout << "vui long nhap x khong phai snt";
	}
}

int main(){
	double a[200];
	int n;
	cout << "nhap so phan tu: ";
	cin >> n;
	NhapMang(a,n);
	cout << "================MANG DA NHAP================" << endl;
	XuatMang(a,n);
	
	Chen1SoTruocSNT(a,n);
	cout << "================MANG DA CHEN================" << endl;
	XuatMang(a,n);
	
	cout << "\nTBC cac so > 10 = " << TrungBinhCong(a,n);


	return 0;
}

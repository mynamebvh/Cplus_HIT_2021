#include <iostream>
#include <math.h>
using namespace std;

void NhapMang(int a[], int n){
	for(int i = 0 ; i < n; i++){
		cout << "nhap a[" << i << "] = ";
		cin >> a[i];
	}
}

void XuatMang(int a[], int n){
	for(int i = 0 ; i < n; i++){
		cout << a[i] << " ";
	}
}

//  4 3 2 1
void SapXepGiamDan(int a[], int n){
	for(int i = 0 ; i < n ; i++){
		for(int j = i + 1 ; j < n ; j++){
			if(a[i] < a[j]){
				swap(a[i], a[j]);
			}
		}
	}
}

void Xoa(int a[], int &n, int vt){
	for(int i = vt; i < n - 1; i++){
		a[i] = a[i + 1];
	}
	n--;
}

void XoaTatCaSoAmLe(int a[], int &n){
	for(int i = 0; i < n; i++){
		if(a[i] < 0 && a[i] % 2 != 0){
			Xoa(a,n,i);
			i--;
		}
	}
}
int main(){
	int a[200];
	int n;
	cout << "nhap so phan tu: ";
	cin >> n;
	NhapMang(a,n);
	cout << "================MANG DA NHAP================" << endl;
	XuatMang(a,n);
	
	SapXepGiamDan(a,n);
	cout << "\n================MANG DA SAP XEP GIAM DAN================" << endl;
	XuatMang(a,n);
	XoaTatCaSoAmLe(a,n);
	cout << "\n================MANG DA XOA CAC SO LE AM================" << endl;
	XuatMang(a,n);
	
	return 0;
}

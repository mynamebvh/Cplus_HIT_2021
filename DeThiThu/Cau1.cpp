#include <iostream>
#include <math.h>
using namespace std;
double TinhL(int n, double x){
	if(n % 2 == 0)
		return fabs(log2(x) + exp(n) + 2021);
	else {
		int tu = 1;
		double mau = x, L = 2021;
		for(int i = 1; i <= n ; i++){
			L += tu / mau;
			tu += 2;
			mau *= x;
		}
		return L;
	}
		
}

int main(){
	int n;
	double x;
	cout << "nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "L = " << TinhL(n,x);
	return 0;
}

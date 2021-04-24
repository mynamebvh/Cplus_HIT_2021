#include <iostream>

using namespace std;

int main(){
	int n;
	cout << " Nhap n: ";
	cin >> n;
	if ( n == 1 ) {
		cout << "Cuop thanh cong"; 
	}
	else if ( n == 2 ) {
		cout << "Ban anh Doan bang sung thit"; 
	}
	else if( n > 3 && n < 10) {
		cout << "Chem anh Hoang"; 
	}
return 0;
}

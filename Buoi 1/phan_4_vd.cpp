#include <iostream>
using namespace std;

/*

*/
int main(){
  int n = 10;
  
  //if else else if 
  if(n < 5){ // kiểm tra điều kiện trong ngoặc () thấy n = 10 < 5 => sai
    // do sai lên chuyển xuống else if kiểm tra tiếp
    cout << "TB";
  }
  else if(n > 10){ // kiểm tra điều kiện n > 10 => sai chuyển xuống else
    cout << "PRO";
  }
  else {
    cout << "TOT"; // in ra TOT
  }

  // toán tử 3 ngôi
  (n == 10) ? cout << "n = 10" : cout << "n khac 10"; 
  
  // switch case
  int thang = 9; 
  switch (thang){
    case 2: 
      cout << "co 28 or 29 ngay";
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: 
      cout << "co 31 ngay";
      break;
    default:
      cout << "co 30 ngay";
  }


  return 0;
}


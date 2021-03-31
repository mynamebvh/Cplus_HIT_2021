#include <iostream>

// using namespace std;

namespace nha{
  void diadiem(){
    std::cout << "o nha";
  }
};
// using namespace nha;

namespace truong{
  void diadiem(){
    std::cout << "o truong";
  }
};

// using namespace truong;
int main(){
  int n;
  
  nha::diadiem();

  truong::diadiem();

  // diadiem();

  std::cout << "hello world!";
  std::cin >> n;
  
  return 0;
}
#include <iostream>


int main () {
  //deklarasi
  int a;
  std::cout << "MASUKAN NILAI" << std::endl;
  std::cin >> a;
  switch(a) {
    case 5:
    std::cout << "Ini adalah lima" << std::endl;
    break;
    case 4:
    std::cout << "Ini adalah empat" << std::endl;
    break;
    case 3:
    std::cout << "Ini adalah tiga" << std::endl;
    break;
    case 2:
    std::cout << "Ini adalah dua" << std::endl;
    break;
    case 1:
    std::cout << "Ini adalah satu" << std::endl;
    break;
    default:
    std::cout << "Coba masukan nilai antara 1-5" << std::endl;
    break;
  }
  std::cin.get();
  return 0;
}
#include <iostream>

int main () {
  float a, b, hasil;
  char aritmatika;
  std::cout << " == MASUKAN NILAI == \n \n" << std::endl;
  std::cout << "MASUKAN NILAI PERTAMA \n" << std::endl;
  std::cin >> a;
  std::cout << "MASUKAN OPERATOR ANDA (+, -, /, * \n" << std::endl;
  std::cin >> aritmatika;
  std::cout << "MASUKAN NILAI KEDUA \n \n" << std::endl;
  std::cin >> b;
  std::cout << a << aritmatika << b;
  if (aritmatika == '+') {
    hasil = a + b;
  } else if (aritmatika == '-') {
    hasil = a - b;
  } else if (aritmatika == '/') {
    hasil = a / b;
  } else if (aritmatika == '*') {
    hasil = a * b;
  } else {
    std::cout << " ANDA HANYA BISA MEMASUKAN BEBERAPA OPERATOR ( +, -, /, *) " << std::endl;
  }
  std::cout << " = " << hasil << std::endl;
  std::cout << " TERIMAKASIH SUDAH MEMOERCAYAI KALKULATOR KAMI 😀😀😀😀" << std::endl;
  std::cin.get();
  return 0;
}
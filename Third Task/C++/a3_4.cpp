#include <iostream>
#include <string>

int main() {
  int j = 10;
  {
    j = 20;
  }
  std::cout << j << std::endl;
  return 0;
}

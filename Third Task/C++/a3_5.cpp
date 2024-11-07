#include <iostream>

namespace A {
  struct X {};
  struct Y {};
  void f(int i) {
      std::cout << "f aus A" << std::endl;
  };
  void g(X x) {
      std::cout << "g aus A" << std::endl;
  };
}

namespace B {
  void f(int i) {
      std::cout << "f aus B" << std::endl;
      f(i);         // -> Welches f() wird aufgerufen?
  }

  void g(A::X x) {
      std::cout << "g aus B" << std::endl;
      g(x);        // -> Welches g() wird aufgerufen?
  }

  void h(A::Y y) {
      std::cout << "h aus B" << std::endl;
      h(y);        // -> Welches h() wird aufgerufen?
  }
}

int main() {
    ::B::f(1);
    ::B::g({});
    ::B::h({});

  return 0;
}

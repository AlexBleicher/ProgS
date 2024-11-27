#include <iostream>
#include <functional>
class IntStack {
  class IntStackItem {
    public:
    int value;
    IntStackItem *next;
    IntStackItem *prev;
  };
  public:
    IntStack();
    ~IntStack();
    bool isEmpty();
    void push(int value);
    int pop();
  typedef std::function<void (int&)> StackOperation;
  void traverse(StackOperation fn);

  private:
    IntStackItem *sp;
    IntStackItem newItem(int value);
  };

IntStack::IntStack() : sp(nullptr) {}

bool IntStack::isEmpty() {
  return sp == nullptr;
}

IntStack::~IntStack() {
  while(!isEmpty()) {
    IntStackItem *item = sp;
    sp = sp->prev;
    delete item;
  }
}

void IntStack::push(int value) {
  IntStackItem *item = new IntStackItem();
  item->value = value;
  if(isEmpty()) {
    sp = item;
  } else {
    item->prev = sp;
    sp->next = item;
    sp = item;
  }
}

int IntStack::pop() {
  if(isEmpty()) {
    std::cerr << "Stack is empty" << std::endl;
  }
  IntStackItem *item = sp;
  sp = sp->prev;
  if(sp != nullptr) {
    sp->next = nullptr;
  }
  return item->value;
}

void IntStack::traverse(StackOperation fn) {
  if(isEmpty()) {
    return;
  }
  for(IntStackItem *item = sp; item != nullptr; item = item->prev) {
    fn(item->value);
  }
}

int main(){
  IntStack stack;
  stack.push(1);
  stack.push(2);
  stack.push(3);
  stack.push(4);
  stack.push(5);
  stack.pop();
  stack.push(6);

  stack.traverse([](int& value) {value*=2;});

  while(!stack.isEmpty()) {
    std::cout << stack.pop() << std::endl;
  }
  return 0;
}

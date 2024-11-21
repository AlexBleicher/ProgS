#include <array>
#include <functional>
#include <iostream>
int main(){
    std::array<std::function<void ()>, 10> array;
    for(int i=0; i<10; i++){
        int j=0;
        array[i] = [&j] mutable  {j = j+1; std::cout << j << std::endl;};
    }

    //std::for_each(array.begin(), array.end(),  [](std::function<void()> f) {f();});
    for(std::function<void()> f : array){
        f();
    }
    return 0;
}

#include <iostream>

void passByRef(std::vector<int>& vec) {
    vec[0] = 5;
}

void passByValue(std::vector<int> vec)  {
    vec[0] = 10;
}
int main() {
    std::vector<int> vec(100);
    passByRef(vec);
    passByValue(vec);
    std::cout<< vec[0] <<" "<< vec[1] << "\n";
    return 0;
}
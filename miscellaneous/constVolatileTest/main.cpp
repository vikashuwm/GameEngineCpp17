#include "source.h"

int main() {
    testConstVolatile();
    constexpr int exp = 3+6+5;
    std::cout<<"\n" << exp;
    return 0;
}
#include "source.h"

void testConstVolatile() {
    const volatile int x = 5;
    int* temp = const_cast<int*>(&x);
    *temp = 20;

    std::cout<< x;
}
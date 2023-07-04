#include<iostream>

class Coordinates
{
public:
    int a;
    int b;

    // To SET CONST MEMBER WE CAN USE INITIALIZER LIST..
    Coordinates(int a, int b) : a(a), b(b) {
        // Construtor body
    }
};

int main()
{
    Coordinates obj1(1, 2);
    std::cout<< obj1.a << " and " << obj1.b;
    return 0;
}
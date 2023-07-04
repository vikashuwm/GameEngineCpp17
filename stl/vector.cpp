#include <vector>
#include<iostream>

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    //.size() type is unsigend so size_t
    for(size_t i =0;i<vec.size();i++) 
    {
        std::cout<<vec[i] <<" ";
    }

    for(auto& a : vec)
    {
        std::cout<< a <<" ";
    }
    return 0;
}
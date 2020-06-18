#include <iostream>
#include <exception>
#include "Array.h"

int main()
{
    Array<int> array(20);
    Array<int> barray(20);

    std::cout << "Array Size: " << array.size() << std::endl;
    std::cout << "BArray Size: " << barray.size() << std::endl;

    array[5] = 5;
    barray[12] = 26;
    std::cout << array[5] << std::endl;


}
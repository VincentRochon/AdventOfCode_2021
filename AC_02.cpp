#include <iostream>
#include <list>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, const char** argv) {

    int n = 5;
    std::cout << &n << std::endl;

    int* ptr = &n;
    int ptr2 = n;

    std::cout << ptr << std::endl;
    std::cout << *ptr << std::endl;

    *ptr = 10;

    std::cout << *ptr << std::endl;
    std::cout << n << std::endl;

    std::cout << "pointers" << std::endl;
    return 0;
}
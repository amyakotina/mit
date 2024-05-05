#include <iostream>

int fib(int n) {
    if(n <= 1) {
        return n;
    }
    return fib (n-1) + fib (n-2);
}

int main () {
    std::cout<< "Hello World" << std::endl;
    int n;
    std:: cout << "n = ";
    std:: cin >> n;
    std:: cout << "Число Фибоначчи для n = " << n << ": "<< fib(n);
    return 0;
}

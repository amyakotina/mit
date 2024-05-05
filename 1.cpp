#include <iostream>

void fib(int n) {
    int a = 0; int b = 1;
    int sum;
    
    std:: cout<< a << std:: endl;
    if (n>1){
        std:: cout<< b << std:: endl;
    }
    for (int i = 2; i < n; i++){
        sum = a+b;
        std:: cout << sum << std:: endl;
        a=b;
        b=sum;
    }
}



int main () {
    std::cout<< "Hello World" << std::endl;
    int n;
    std:: cout << "n = ";
    std:: cin >> n;
    fib(n);
    return 0;
}

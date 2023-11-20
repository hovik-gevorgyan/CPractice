#include <iostream>

// function pointer type
int(*ff)(int,int);


int add(int a, int b) {
    return a + b;
}

int mul(int a, int b) {
    return a * b;
}

int division(int a, int b) {
    return a/b;
}

int sub(int a, int b) {
    return a - b;
}

// return function pointer from function
int (*getOP(char s))(int,int) {
   if(s == '+') {
    return add;
   }
   if(s == '-') {
    return sub;
   }
   
   return mul;
}

int main() {
    std::cout << "Hello " << std::endl;

    ff = sub;
    int r1 = mul(11,22);
    std::cout << r1 << std::endl;

    // make array of function pointers
    int(*operations[])(int, int) = {add,sub, division, mul};
    int(*ss)(int,int) = operations[3];
    int r2 = ss(44,55);
    std::cout <<r2 << std::endl;


    // get function pointer;
    ff = getOP('+');
    int r3 = ff(55,55);
    std::cout << r3 << std::endl;


    

    return 0;
}

#include <iostream>

int f(int n)
{
    if(n < 2) return 0;
    if(n == 2 || n == 3) return 1;
    return f(n-1)+f(n-2);
}

int main(){
    std::cout<<f(10);
}
//완전 제곱수는 약수를 홀수개 가짐 -> 마지막에 열려있음
#include <iostream>
#include <cmath>
int main(){
    long long n;
    std::cin >> n;

    std::cout <<  (long long)std::sqrt(n) << std::endl;

    return 0;
}
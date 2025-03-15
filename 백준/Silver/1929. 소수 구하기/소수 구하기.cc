#include <iostream>
#include <vector>
#include <cmath>
bool is_prime_num(int num){
    if(num==1){
        return false;
    }
    else if(num==2){
        return true;
    }
    else if(num%2==0){
        return false;
    }
    for(int i=3;i<=std::sqrt(num);i+=2){
        if(num%i==0){
            return false;
        }
    }

    return true;
}
int main(){
    long long m,n;

    std::cin >> m >> n;

    for(long long i=m;i<=n;i++){
        if(is_prime_num(i)){
            std::cout << i << "\n";
        }
    }

    return 0;
}
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
    while(true){
        int n;
        std::cin >> n;
        if(n==0){
            break;
        }
        int count =0;
        for(int i=n+1;i<=2*n;i++){
            if(is_prime_num(i)){
                count++;
            }
        }
        std::cout << count << "\n";
    }

    return 0;
}
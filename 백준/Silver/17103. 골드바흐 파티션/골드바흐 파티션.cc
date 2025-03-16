#include <iostream>
#include <vector>
std::vector<bool> is_prime_arr(1000001,true);
const int max = 1000001;
//소수 판별
void sieve(){
    is_prime_arr[0]=is_prime_arr[1] = false;
    for(int i=2;i*i<=max;i++){
        if(is_prime_arr[i]){
            for(int j=i*i;j<=max;j+=i){
                is_prime_arr[j] = false;
            }
        }
    }
}
int main(){
    sieve();
    int t;
    std::cin >> t;
    for(int i=0;i<t;i++){
        long long val;
        std::cin >> val;
        int count=0;
        for(long long j=2;j<=val/2;j++){
            if(is_prime_arr[j]&&is_prime_arr[val-j]){
                count++;
            }
        }
        std::cout << count << "\n";
    }

    return 0;
    
}
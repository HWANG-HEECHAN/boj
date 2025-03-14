#include <iostream>
#include <vector>
#include <cmath>
bool is_prime_num(long long num){
    if (num <= 1) return false; // 1 이하의 숫자는 소수가 아니다.
    if (num == 2) return true;  // 2는 소수이다.
    if (num % 2 == 0) return false;  // 짝수는 소수가 아니다.

    // 제곱근까지 검사
    for(int i=3; i<=std::sqrt(num); i+=2){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    long long n;
    std::cin >> n;

    std::vector <long long> arr(n);

    for(int i=0;i<n;i++){
        std::cin >> arr[i];
    }

    std::vector<long long> prime_arr;
    for(int i=0;i<n;i++){
        long long value = arr[i];
        if(is_prime_num(value)){
            prime_arr.push_back(value);
        }

        else{
            long long prime_val = value;
            while(!is_prime_num(prime_val)){
                prime_val++;
            }
            prime_arr.push_back(prime_val);
        }
    }

    for(int i=0;i<n;i++){
        std::cout << prime_arr[i] << "\n";
    }

    return 0;

}
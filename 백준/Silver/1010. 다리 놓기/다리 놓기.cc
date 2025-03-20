#include <iostream>

long long combination(int n,int m){
    long long result = 1;
    for(int i=0;i<n;i++){
        result *= (m-i);
        result /= (i+1);
    }

    return result;
}

int main(){
    int t;
    std::cin >> t;
    for(int i=0;i<t;i++){
        int n,m;
        std::cin >> n >> m;
        std::cout << combination(n,m) << "\n";
    }

    return 0;
}
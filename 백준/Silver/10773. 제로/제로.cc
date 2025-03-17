#include <iostream>
#include <stack>

int main(){
    int k;
    std::cin >> k;

    std::stack<long long> s;

    for(int i=0;i<k;i++){
        long long val;
        std::cin >> val;
        if(val==0){
            s.pop();
        }
        else{
            s.push(val);
        }
    }

    long long sum=0;
    while(!s.empty()){
        sum+=s.top();
        s.pop();
    }

    std::cout << sum;

    return 0;
}
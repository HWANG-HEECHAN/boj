#include <iostream>
#include <stack>

int main(){
    long long n;
    std::cin >> n;
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    std::stack<int> arr;
    //스택은 후입선출 
    for(long long i=0;i<n;i++){
        int order;
        std::cin >> order;
        if(order == 1){
            int value;
            std::cin >> value;
            arr.push(value);
        }
        else if(order==2){
            if(arr.empty()){
                std::cout << -1 << "\n";
            }
            else{
                std::cout << arr.top() << "\n";
                arr.pop();
            }
        }
        else if(order==3){
            std::cout << arr.size() << "\n";
        }

        else if(order==4){
            if(arr.empty()){
                std::cout << 1 << "\n";
            }
            else{
                std::cout << 0 << "\n";
            }
        }
        else if(order==5){
            if(!arr.empty()){
                std::cout << arr.top() << "\n";
            }
            else{
                std::cout << -1 << "\n";
            }
        }
    }

    return 0;
}
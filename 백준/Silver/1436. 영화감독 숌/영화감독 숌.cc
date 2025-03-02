#include <iostream>
#include <string>
int main(){
    int n;
    std::cin >> n;
    int count = 0;
    int num = 666;

    while(true){
        if(std::to_string(num).find("666") != std::string::npos){
            count+=1;
            if(count==n){
                std::cout << num;
                break;
            }
        }
        num+=1;
    }

    return 0;
}
#include <iostream>
#include <stack>
#include <string>

int main(){
    int t;
    std::cin >> t;
    

    for(int i=0;i<t;i++){
        std::stack<char> s;
        std::string str;
        std::cin >> str;
        bool is_valid = true;
        for(char i : str){
            
            if(i == '('){
                s.push(i);
            }
            else{
                if(s.empty()){
                    is_valid=false;
                    break;
                }
                s.pop();
    
            }
        }
        if(s.empty() && is_valid){
            std::cout << "YES" << "\n";
        }
        else{
            std::cout << "NO" << "\n";
        }
    }

return 0;
}
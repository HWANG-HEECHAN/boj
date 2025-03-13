#include <iostream>
#include <string>
#include <set>
int main(){
    std::string s;
    std::cin >> s;

    std::set<std::string> set;

    for(int i=1;i<=s.length();i++){
        for(int j=0;j<s.length();j++){
            if(j+i<=s.length()){
                std::string sub = s.substr(j,i);
                set.insert(sub);
            }
            
        }
    }

    int count =0;
    for(std::string val : set){
        count++;
    }

    std::cout << count << std::endl;

    return 0;
}

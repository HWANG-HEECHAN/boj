#include <iostream>
#include <set>
#include <string>
#include <vector>
int main(){

    int n,m;

    std::cin >> n >> m;

    std::set<std::string> set;

    for(int i=0;i<n;i++){
        std::string value;
        std::cin >> value;
        set.insert(value);
    }

    std::set<std::string> sortedSet;
    int count =0;
    for(int i=0;i<m;i++){
        std::string value;
        std::cin >> value;
        if(set.find(value)!=set.end()){
            count++;
            sortedSet.insert(value);
        }
    }
    std::cout << count << "\n";
    for(std::string val : sortedSet){
        std::cout << val << "\n";
    }

    return 0;

}
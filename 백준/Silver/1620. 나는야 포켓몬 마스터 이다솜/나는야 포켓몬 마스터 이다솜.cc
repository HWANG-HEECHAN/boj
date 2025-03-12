#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

int main(){
    int n,m;
    std::cin >> n >> m;

    std::unordered_map<int,std::string> numToName;
    std::unordered_map<std::string,int> nameToNum;

    for(int i=1;i<=n;i++){
        std::string value;
        std::cin >> value;
        numToName[i] = value;
        nameToNum[value] = i;
    }

    std::vector<std::string> arr(m);
    for(int i=0;i<m;i++){
        std::cin >> arr[i];
    }

    for(auto value : arr){
        if(isdigit(value[0])){
            int num = std::stoi(value);
            std::cout << numToName[num] << '\n';
        }
        else{
            std::cout << nameToNum[value] << '\n';
        }
    }

    return 0;
}
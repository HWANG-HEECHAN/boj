#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

bool compare(const std::string& a,const std::string& b){
    if(a.size()==b.size()){
        return a<b;
    }
    return a.size()<b.size();
}

int main(){
    int n;
    std::cin >> n;

    std::vector<std::string> arr;

    for(int i=0;i<n;i++){
        std::string word;
        std::cin >> word;
        if(std::find(arr.begin(),arr.end(),word)==arr.end()){
            arr.push_back(word);
        }
        else{
            continue;
        }
        
    }

    std::sort(arr.begin(),arr.end(),compare);

    for(int i=0;i<arr.size();i++){
        std::cout << arr[i] << "\n";
    }

    return 0;

}
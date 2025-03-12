#include <iostream>
#include <unordered_map>
#include <vector>
int main(){
    int n,m;

    std::cin >> n;
    std::unordered_map<int,int> map;

    for(int i=0;i<n;i++){
        int num;
        std::cin >> num;
        
        map[num]++;
    }

    std::cin >> m;
    std::vector<int> arr(m);
    for(int i=0;i<m;i++){
        std::cin >> arr[i];
    }

    for(int i=0;i<m;i++){
        std::cout << map[arr[i]] << " ";
    }

    return 0;
}
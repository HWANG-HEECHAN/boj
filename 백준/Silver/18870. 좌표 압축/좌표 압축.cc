#include <iostream>
#include <algorithm>
#include <vector>
bool compare(const int& a,const int& b){
    return a<b;
}

int main(){

    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    

    for(int i=0;i<n;i++){
        std::cin >> arr[i];
    }

    std::vector<int> sortedarr = arr;

    std::sort(sortedarr.begin(),sortedarr.end(),compare);

    sortedarr.erase(std::unique(sortedarr.begin(), sortedarr.end()), sortedarr.end());

    for(int i=0;i<n;i++){
        std::cout << std::lower_bound(sortedarr.begin(),sortedarr.end(),arr[i]) - sortedarr.begin() << " ";
    }

    return 0;


}
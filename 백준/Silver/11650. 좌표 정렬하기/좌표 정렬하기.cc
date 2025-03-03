#include <iostream>
#include <vector>
#include <algorithm>
bool compare(const std::pair<int,int>& a,const std::pair<int,int>& b){
    if(a.first==b.first){
        return a.second<b.second;
    }

    return a.first<b.first;
}
int main(){
    int n;
    std::cin >> n;

    std::vector<std::pair<int,int>> arr(n);

    for(int i=0;i<n;i++){
        std::cin >> arr[i].first >> arr[i].second;
    }

    std::sort(arr.begin(),arr.end(),compare);

    for(int i=0;i<n;i++){
        std::cout << arr[i].first << " " << arr[i].second << "\n";
    }

    return 0;

}
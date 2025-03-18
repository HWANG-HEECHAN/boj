#include <iostream>
#include <queue>
#include <vector>

int main(){
    int n,k;
    std::cin >> n >> k;
    std::vector<int> arr;
    std::queue<int> q;
    for(int i=1;i<=n;i++){
        q.push(i);
    }
    while(!q.empty()){
        for(int i=1;i<k;i++){
            int temp = q.front();
            q.pop();
            q.push(temp);
        }

        arr.push_back(q.front());
        q.pop();
    }
    std::cout << "<";
    for(int i=0;i<n-1;i++){
        std::cout << arr[i] <<", ";
    }
    std::cout << arr[n-1] << ">";

    return 0;

}
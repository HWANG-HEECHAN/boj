//큐 : 선입선출
//enqueue,dequeue
//front : 앞에 있는 항목을 반환
//back : 뒤에 있는 항목을 반환

#include <iostream>
#include <queue>
#include <string>
int main(){
    std::ios::sync_with_stdio(false);  // std::cin, std::cout의 동기화 끊기
    std::cin.tie(nullptr);  // std::cin과 std::cout의 자동 동기화 끊기
    long long n;
    std::cin >> n;
    std::queue<int> q;

    for(long long i=0;i<n;i++){
        std::string order;
        std::cin >> order;

        if(order=="push"){
            int val;
            std::cin >> val;
            q.push(val);
        }
        else if(order == "pop"){
            if(q.empty()){
                std::cout << -1 << "\n";
            }
            else{
                std::cout << q.front() << "\n";
                q.pop();
            }
        }
        else if(order == "size"){
            std::cout << q.size() << "\n";
        }
        else if(order == "empty"){
            if(q.empty()){
                std::cout << 1 << "\n";
            }
            else{
                std::cout << 0 << "\n";
            }
        }
        else if(order == "front"){
            if(q.empty()){
                std::cout << -1 << "\n";
            }
            else{
                std::cout << q.front() << "\n";
            }
        }

        else if(order == "back"){
            if(q.empty()){
                std::cout << -1 << "\n";
            }
            else{
                std::cout << q.back() << "\n";
            }
        }

    }

    return 0;
}
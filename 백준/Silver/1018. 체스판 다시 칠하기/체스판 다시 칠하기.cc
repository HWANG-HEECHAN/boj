#include <iostream>
#include <vector>
#include <string>

std::string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};
std::string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

//입력받은 NM보드를 받기 위한 배열
std::string board[50];
//시작이 흰색인 경우
int cntWB(int x,int y){
    int cnt =0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[x+i][y+j] != WB[i][j]){
                cnt++;
            }
        }
    }
    return cnt;
}
//시작이 검정색인 경우
int cntBW(int x,int y){
    int cnt=0;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(board[x+i][y+j] != BW[i][j]){
                cnt++;
            }
        }
    }
    return cnt;
}

int main(){
    int n,m;
    std::cin >> n >> m;

    //체스판에 입력
    for(int i=0;i<n;i++){
        std::cin >> board[i];
    }

    int min_change = 64; // 최대로 변경할 수 있는 칸 수

    //가능한 시작 위치
    for(int i=0;i<=n-8;i++){
        for(int j=0;j<=m-8;j++){
            int while_start = cntWB(i,j);
            int black_start = cntBW(i,j);

            int realMin = std::min(while_start,black_start);

            if(realMin < min_change){
                min_change = realMin;
            }
        }
    }


    std::cout << min_change << std::endl;

    return 0;
}
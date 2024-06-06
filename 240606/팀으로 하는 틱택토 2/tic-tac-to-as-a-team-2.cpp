#include <iostream>
#include <string>
using namespace std;
int bingo[3][3];
int pairs[10][10]={};
int ans_cnt = 0;

int main() {
    string input;
    int ans = 0;
    bool teams[10][10] = {};

    for(int i = 0; i < 3; i++){
        cin >> input;
        for(int j = 0; j < 3; j++){
            bingo[i][j] = input[j]-48;
        }
    }
    

    for(int i = 1; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            for(int q= 0; q < 3;q++){
                int cntA =0;
                int cntB = 0;
                for(int w = 0; w < 3; w++){
                    if(bingo[q][w]==i){
                        cntA++;
                    }else if(bingo[q][w]==j){
                        cntB++;
                    }
                }
                if(cntA + cntB == 3 && cntA<3 && cntB<3){
                    teams[i][j]=true;
                }
            }
        }
    }

    for(int i = 1; i < 10; i++){
        for(int j = i+1; j < 10; j++){
            for(int q= 0; q < 3;q++){
                int cntA =0;
                int cntB = 0;
                for(int w = 0; w < 3; w++){
                    if(bingo[w][q]==i){
                        cntA++;
                    }else if(bingo[w][q]==j){
                        cntB++;
                    }
                }
                if(cntA + cntB == 3 && cntA<3&& cntB<3){
                    //cout << 'a' << endl;
                    teams[i][j]=true;
                }
            }
        }
    }

    for(int i = 1; i < 10; i++){
        for(int j = i+1; j < 10; j++){
                int cntA =0;
                int cntB = 0;
                for(int w = 0; w < 3; w++){
                    if(bingo[w][w]==i){
                        cntA++;
                    }else if(bingo[w][w]==j){
                        cntB++;
                    }
                }
                if(cntA + cntB == 3 && cntA<3&& cntB<3){
                    //cout << 'a' << endl;
                    teams[i][j]=true;
                }
        }
    }
    for(int i = 1; i < 10; i++){
        for(int j = i+1; j < 10; j++){
                int cntA = 0;
                int cntB = 0;
                for(int w = 0; w < 3; w++){
                    if(bingo[w][2-w]==i){
                        cntA++;
                    }else if(bingo[w][2-w]==j){
                        cntB++;
                    }
                }
                if(cntA + cntB == 3 && cntA<3 && cntB<3){
                    //cout << 'a' << endl;
                    teams[i][j]=true;
                }
        }
    }
    for(int i = 0; i < 10 ;i++){
        for(int j = 0; j < 10; j++){
            if(teams[i][j]==true){
                ans_cnt++;
                //cout << i << " " << j << endl;
            }
        }
    }
    cout << ans_cnt;
}
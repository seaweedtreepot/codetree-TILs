#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,a,b,c,max=0;
    cin >> n;

    //i번컵일대 최대점수
        bool arr1[4]= {};
        bool arr2[4] = {};
        bool arr3[4] = {};
        arr1[1]= true;
        arr2[2]=true;
        arr3[3] = true;
        int score1 = 0,score2=0,score3=0;
        for(int j = 0; j < n; j++){
            cin >> a >> b >> c;

            bool pram = arr1[a];
            arr1[a] = arr1[b];
            arr1[b] = pram;

            pram = arr2[a];
            arr2[a] = arr2[b];
            arr2[b] = pram;

            pram = arr3[a];
            arr3[a] = arr3[b];
            arr3[b] = pram;

            
            if(arr1[c]){
                score1++;
            }
            if(arr2[c]){
                score2++;
            }
            if(arr3[c]){
                score3++;
            }
        }
        //cout <<"::"<< score <<endl;
        if(score1 > max){
            max = score1;
        }
        if(score2>max){
            max = score2;
        }
        if(score3>max){
            max = score3;
        }
    

    cout << max;
    return 0;
}
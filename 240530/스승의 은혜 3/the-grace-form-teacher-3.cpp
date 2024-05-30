#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n, b,input1,input2,max = 0;
    pair<int,int> p[1000];

    cin >> n >> b;
    for(int i = 0; i < n; i++){
        cin >> input1 >> input2;
        p[i] = make_pair(input1,input2);
    }

    
    for(int i = 0; i < n; i++){
        //cout << p[i].first << " " << p[i].second<<endl;
    }
    for(int i = 0; i < n; i++){//반값받을 학생
        int temp[1000];
        for(int j = 0; j < n; j++){
            if(i == j){
                temp[j] = p[j].first/2 + p[j].second;
            }else{
                temp[j] = p[j].first + p[j].second;
            }
        }
        sort(temp,temp+n);
        int sum = 0;
        int cnt = 0;
        for(int j = 0; j < n; j++){
            sum += temp[j];
            if(sum > b){
                break;
            }else{
                cnt++;
            }
        }
        //cout << i << ": " << sum <<": "<< cnt <<endl;
        if(cnt > max){
            max = cnt;
        }
    }

    cout << max;
    return 0;
}
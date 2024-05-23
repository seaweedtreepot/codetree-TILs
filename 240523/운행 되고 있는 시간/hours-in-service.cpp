#include <iostream>
#include <climits>
#include <utility>
#include <cstdlib>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int max= 0;
    pair<int,int> develope[100];
    int input1,input2;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> input1 >> input2;
        develope[i] = make_pair(input1,input2);
    }

    for(int i = 0; i < n; i++){//skip
        bool arr[1001] = {};
        int cnt =0;
        for(int j = 0; j < n; j++){
            if(j==i)
                continue;
            
            for(int q = develope[j].first;q<develope[j].second;q++){
                arr[q] = true;
            }
            
        }
        for(int j = 0; j < 1001; j++){
            if(arr[j]){
                cnt++;
            }
        }


        if(cnt >max){
            max = cnt;
        }
    }

    cout << max;
    return 0;
}
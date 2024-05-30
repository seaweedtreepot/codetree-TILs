#include <iostream>
#include <utility>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,input1,input2;
    pair<int,int> strings[10];
    int cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> input1 >> input2;
        strings[i] = make_pair(input1,input2);
    }

    for(int i = 0; i < n; i++){//제외할 첫 선분
        for(int j = i+1; j < n; j++){//제외할 두번째 선분
            if(i==j)
                continue;
            for(int k = j+1; k < n; k++){//제외할 세번째 선분
                if(i==k || j == k)
                    continue;
                int grid[101]={};
                bool flag = true;
                for(int w = 0; w < n; w++){
                    if(w==i || w==j || w== k)
                        continue;
                    
                    for(int a = strings[w].first; a <= strings[w].second;a++){
                        grid[a]++;
                    }
                }
                for(int g = 0; g < 101; g++){
                    if(grid[g]>1){
                        flag = false;
                        break;
                    }
                }

                if(flag){
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}
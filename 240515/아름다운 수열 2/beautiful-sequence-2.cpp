#include <iostream>
#include <vector>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n,m;
    cin >> n >> m;
    vector<int> A(n);
    vector<int> B;
    int input;
    for(int i = 0; i < n;i++){
        cin >> A[i];
    }
    for(int i = 0; i < m; i++){
        cin >> input;
        B.push_back(input);
    }
    int cnt = 0;
    for(int i = 0; i < n-m+1; i++){
        vector<int> copyB = B;
        
        for(int f = 0; f < m; f++){
            for(int j = 0; j < copyB.size();j++){
            if(A[i+f]==copyB[j]){
                copyB.erase(copyB.begin()+j);
            }
        }
        }
        
        if(copyB.size()==0){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}
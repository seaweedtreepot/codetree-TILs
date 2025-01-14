#include <iostream>
#include <vector>
using namespace std;

int n;
int beautiful_num = 0;
vector<int> arr;

bool check(){
    for(int i = 0; i < n; i++){
        int k = arr[i];//i번째 자릿수의 값을 가져옴
        for(int j = i; j < i+k-1; j++){ //그 값만큼 앞을 확인함
            if(arr[j+1]!=arr[j]){
                //cout << arr[i] << endl;
                return false;
            }
        }
        i += (k-1); //그만큼 앞으로 감
    }
    return true;
}

void maker(int num){
    if(num==n){
        if(check()){
            for(int i = 0; i < n; i++){
                //cout << arr[i] << " ";
            }
           //cout << endl;
            beautiful_num++;
        }else{

        }
        return;
    }
    
    for(int i = 1; i <= 4; i++){
        arr.push_back(i);
        maker(num+1);
        arr.pop_back();
    }


}
int main() {
    cin >> n;

    // Write your code here!
    maker(0);
    cout << beautiful_num;
    
    return 0;
}

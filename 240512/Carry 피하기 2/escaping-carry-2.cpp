#include <iostream>
#include <climits>

bool IsCarried(int a,int b,int c){
    bool flag = true;
    while(a!=0 || b!=0 || c!=0){
        int temp = 0;
        temp+=a%10;
        temp+=b%10;
        temp+=c%10;
        if(temp > 9){
            flag = false;
            break;
        }
        a/=10;b/=10;c/=10;
    }

    return flag;
}
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int max = -1;
    int n;
    int arr[20];
    cin >> n;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                if(IsCarried(arr[i],arr[j],arr[k])&& max < (arr[i]+arr[j]+arr[k])){
                    max = arr[i]+arr[j]+arr[k];
                    //cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }

        }
    }

    cout << max;
    return 0;
}
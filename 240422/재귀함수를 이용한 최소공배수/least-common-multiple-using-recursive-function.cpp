#include <iostream>
using namespace std;

int Smallest(int arr[],int idx){
    if(idx == 0){
        int small = 1;
        int num1 = arr[idx];
        int num2 = arr[idx+1];
        if(num1 < num2){
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }

        while(1){
            if(num1%num2==0){
                //cout << "Excape" << endl;
               // cout << num1 << " " << num2 << endl;
                small = num2;
                break;
            }
        num1 = num1%num2;
        int temp = num1;
        num1 = num2;
        num2 = temp;
        }

        small = (arr[idx]/small) * (arr[idx+1]/small) * small;
        return small;
    }
        int small = 1;
        int num1 = Smallest(arr,idx-1);
        int num1_1 = num1;
        int num2 = arr[idx+1];
        if(num1 < num2){
            int temp = num1;
           num1 = num2;
            num2 = temp;
        }
     while(1){
            if(num1%num2==0){
                //cout << "Escape: " << idx << endl; 
               // cout << num1 << " " << num2 << endl;
                small = num2;
                break;
        }
        num1 = num1%num2;
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
        small = (num1_1/small) * (arr[idx+1]/small) * small;
        return small;
}



int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    int arr[10];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << Smallest(arr,n-2)<<endl;
    return 0;
}
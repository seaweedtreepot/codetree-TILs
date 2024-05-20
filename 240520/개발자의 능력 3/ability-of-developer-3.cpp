#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[6];
    int sum = 0;
    int min = INT_MAX;
    for(int i= 0;i  < 6; i++){
        cin >> arr[i];
        sum += arr[i];
    }


    for(int i = 0; i < 4; i++){
        for(int j = i +1; j < 5; j++){
            for(int k = j+1; k < 6; k++){

                int sumOfThree = arr[i] + arr[j] + arr[k];
                int diff = abs(sum - sumOfThree);
                diff = abs(diff - sumOfThree);
                if(min > diff){
                    min = diff;
                    //cout << arr[i] << " " << arr[j] << " " << arr[k]<<" " <<min<<endl; 
                }
            }
        }
    }

    cout << min;
    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int n,arr[100];
string str;

int mindist(){
    int min_dist = 101;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i]==1 && arr[j]==1){
                //cout << i << " " << j ; 
                if(min_dist > (j-i)){
                    min_dist = j-i;
                    //cout << min_dist << " ";
                }
            }
        }
        //cout << endl;
    }

    return min_dist;
}

int main() {
    // 여기에 코드를 작성해주세요.
    
    cin >> n >> str;
    int min = 0;
    for(int i = 0; i < n; i++){
        arr[i] = str[i]-48;
    }
    
    for(int i = 0; i < n; i++){
        if(arr[i]==1) continue;
        for(int j = i+1; j < n; j++){
            if(arr[j]==1) continue;
            arr[i]= 1; arr[j]=1;
            for(int q = 0; q < n; q++)
               // cout << arr[q] << " ";
                //cout << endl;
            min = max(mindist(),min);
            //cout << mindist() << endl;

            arr[i]=0; arr[j]=0;
        }
    }

    cout << min;
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    char arr[101]={};
    char input;
    int cur;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> cur >> input;
        arr[cur] = input;
    }

    int max =0;


    for(int i = 0; i < 101; i++){
        int start_point =-1,gcnt=0,hcnt=0;

        for(int j = i; j < 101; j++){
            if((arr[j]=='G' || arr[j]=='H')&&start_point==-1){
                start_point = j;
                
                if(arr[j]=='G'){
                    gcnt ++;
                }else if(arr[j]=='H'){
                    hcnt++;
                }
            }else{
                if(arr[j]=='G'){
                    gcnt++;
                }else if(arr[j]=='H'){
                    hcnt++;
                }
            }

            if((gcnt!=0 || hcnt!=0) && (arr[j]=='G'||arr[j]=='H')){
                if(gcnt==hcnt){
                    if(j-start_point > max){
                        max = j-start_point;
                    }
                }else if(gcnt==0 || hcnt==0){
                    if(j-start_point > max){
                        max = j-start_point;
                    }
                }
            }
        }
    }

    cout << max;
    return 0;
}
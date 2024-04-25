#include <iostream>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int arr_b[200001] = {};
    int arr_w[200001] = {};
    char carr[200001]={};
    int x; char direction; int current =0;
    int n;
    cin >> n;


    for(int i = 0; i < n; i++){
        cin >> x >> direction;
        while(x!=0){
            if(direction=='R'){
                arr_b[current+100000]++;
                carr[current+100000] = 'B';
                //cout <<current << " " << arr_b[current+100000] << " " << arr_w[current+100000] << endl;
                current++;
            }else{
                arr_w[current+100000]++;
                carr[current+100000] = 'W';
                //cout <<current << " "<<arr_b[current+100000] << " " << arr_w[current+100000] << endl;
                current--;
            }
            x--;
        }
        if(direction=='R'){
            current--;
        }else{
            current++;
        }
    }

    for(int i =0; i < 200001; i++){
        if(arr_b[i]>=2 && arr_w[i]>=2){
                carr[i]='G';
                if(direction=='R'){
                    current++;
                }else{
                    current--;
                }
            }
    }




    int num_B=0,num_W =0,num_G=0;
    for(int i = 0; i < 200001; i++){
        if(carr[i]=='B'){
            num_B++;
        }else if(carr[i]=='W'){
            num_W++;
        }else if (carr[i]=='G'){
            num_G++;
        }
    }
    cout << num_W << " " << num_B << " " << num_G ;
    return 0;
}
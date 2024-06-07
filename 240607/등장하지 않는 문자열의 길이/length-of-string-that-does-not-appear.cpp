#include <iostream>
#include <string>
using namespace std;
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string str;
    string dupl = "";
    bool flag = false;
    cin >> n >> str;

    for(int i = 1; i < n/2+1; i++){//길이
        dupl = "";
        flag = false;//
        for(int q = 0; q < n-i+1; q++){//start point
            
            dupl = str.substr(q,i);
            string ace = str; 
            ace.erase(q,i);
            //cout << ace << " "<< dupl << endl;
            if(ace.find(dupl)!=string::npos){
                flag = true;
                break;
            }
        }
        if(!flag){
            //cout << 1 <<endl;
            break;
        }else{
            if(i==n/2){
                //cout << 2 << endl;
                flag = false;
            }
        }
    }

    if(!flag && n%2==1){
        cout << dupl.length()+1;
    }else{
        cout << dupl.length();
    }
    
    return 0;
}
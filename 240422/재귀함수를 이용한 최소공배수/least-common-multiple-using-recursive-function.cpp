#include <iostream>
using namespace std;
int Smallest(int a,int b){
    if(a%b==0){
        return b;
    }
    return Smallest(b,a%b);
}
int Biggest(int a,int b){
    return (a*b/(Smallest(a,b)));
}
int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int arr[10];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int temp = Smallest(arr[0],arr[1]);
    //cout << "!" << endl;
    int big = Biggest(arr[0],arr[1]);
  //  cout << "!" << endl;
    for(int i = 2; i < n;i++){
        big = Biggest(big,arr[i]);

    }
    cout << big;
    return 0;
}
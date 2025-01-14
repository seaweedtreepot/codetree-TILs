#include <iostream>
#include <string>
#include <vector>
using namespace std;
int K, N;
vector<int> arr;
void print(){
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void choose(int num){
    if(num == N){
        print();
        return;
    }

    for(int i = 1; i <= K; i++){
        arr.push_back(i);
        choose(num+1);
        arr.pop_back();
    }
    
}

int main() {
    cin >> K >> N;

    // Write your code here!
    choose(0);
    return 0;
}

#include <iostream>
using namespace std;

void Plus(int a, int c){
cout << a << " + " << c << " = " << a+c << endl;
}

void Minus(int a, int c){
    cout << a << " - " << c << " = " << a-c << endl;
}

void Multiply(int a, int c){
    cout << a << " * " << c << " = " << a*c << endl;
}

void Divide(int a, int c){
    cout << a << " / " << c << " = " << a/c << endl; 
}

void Calculate(int a, int c, char o){
    if(o == '+'){
        Plus(a,c);
    }else if(o=='-'){
        Minus(a,c);
    }else if(o=='/'){
        Divide(a,c);
    }else if(o=='*'){
        Multiply(a,c);
    }else {
        cout << "False";
    }
}
int main() {
    // 여기에 코드를 작성해주세요.
    int a, c;
    char o;
    cin >> a >> o >> c;
    Calculate(a,c,o);
    return 0;
}
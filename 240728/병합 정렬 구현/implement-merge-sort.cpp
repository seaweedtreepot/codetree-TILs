#include <iostream>
using namespace std;
int arr[100000];
int setted[100000];
void merge(int low, int mid, int high){
    int i = low, j = mid+1;
    int k = low;
    while(i <=mid && j<=high ){
        if(arr[i] > arr[j]){
            setted[k++]=arr[j++];
        }else{
            setted[k++]=arr[i++];
        }
        //cout << 1 <<endl;
    }
    while(i<=mid){
        setted[k++] = arr[i++];
        //cout << 3 <<endl;
    }
    while(j<=high){
        setted[k++] = arr[j++];
        //cout << 2 <<endl;
    }
    for(int q = low; q <= high;q++){
        arr[q] = setted[q];
    }
}
void merge_sort(int low, int high){
    if(low < high){
        int mid = (low+high)/2;
        merge_sort(low, mid);
        merge_sort(mid + 1, high);
        merge(low,mid,high);
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n; 
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    merge_sort(0,n-1);
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
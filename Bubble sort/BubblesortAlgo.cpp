//buble sort algorithm;
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n){
    for (int i = 0; i < n;i++){
        cout << arr[i]<<" ";
    }
}
void bubblesort(int arr[],int n){
    int key;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < (n - i - 1); j++){
            if(arr[j]>arr[j+1]){
                key = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = key;
            }
        }
    }
}
int main(void){
    int myarr[20];
    int size;
    cout << "Enter the array size" << endl;
    cin >> size;
    cout << "Enter the array numbers in anyorder" << endl;
    for (int i = 0; i < size;i++){
        cin >> myarr[i];
    }
    cout << "Before sorting" << endl;
    display(myarr, size);
    bubblesort(myarr, size);
    cout<<endl<<"After sort "<<endl;
    display(myarr, size);
    return 0;
}
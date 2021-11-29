#include<bits/stdc++.h>
using namespace std;
void displayarray(int arr[],int n){
    for (int i = 0; i < n;i++){
        cout << arr[i]<<" ";
    }
}
void insertionsort(int arr[],int n){
    int key;
    int j = 0;
    for (int i = 1; i < n;i++){
        key = arr[i];
        j = i - 1;
        while(j>=0 && arr[j]>key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    
}
int main(void){
    int arrsize;
    int myarr[20];
    int output;
    cout << "Enter Data size = "<<endl;
    cin >> arrsize;
    cout << "Enter the data in any order " << endl;
    for (int i = 0; i < arrsize;i++){
        cin >> myarr[i];
    }
    cout << "Datas before sort " << endl;
    displayarray(myarr, arrsize);
    cout <<endl<< "Datas after sort " << endl;
    insertionsort(myarr, arrsize);
    displayarray(myarr, arrsize);

    return 0;
}
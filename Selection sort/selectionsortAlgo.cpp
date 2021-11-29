#include<bits/stdc++.h>
using namespace std;
void selectionsort(int arr[]){
    for (int i = 0; i < 6 - 1;i++){
        int min = i;
        for (int j = i + 1; j < 6;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        if(min!=i){
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
}
int main(void){
    int myarr[6];
    cout << "Enter array in any order" << endl;
    for (int i = 0; i < 6;i++){
        cin >> myarr[i];
    }
    cout << "Brfore sort" << endl;
    for (int i = 0; i < 6;i++){
        cout << myarr[i]<<" ";
    }
    selectionsort(myarr);
    cout <<endl<< "After sort" << endl;
    for (int i = 0; i < 6;i++){
        cout << myarr[i]<<" ";
    }
    return 0;
}
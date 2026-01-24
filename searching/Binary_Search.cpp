#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array in sorted order: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter element to search: ";
    cin>>key;
    int left=0, right=size-1;
    bool found=false;
    while(left<=right){
        int mid=(left+right)/2;
        if(arr[mid]==key){
            cout<<"Element found at index: "<<mid<<endl;
            found=true;
            break;
        }
        else if(arr[mid]<key){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    if(!found){
        cout<<"Element not found in the array."<<endl;
    }
}
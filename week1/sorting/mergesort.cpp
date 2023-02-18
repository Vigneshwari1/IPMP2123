#include<iostream>

using namespace std;

void merger(int arr[],int l, int r, int mid){
    int soln[r-l+1];
    int i=l, j=mid+1;
    int k=0;

    while(i<=mid && j<=r){
        if(arr[i]<arr[j]) soln[k++]=arr[i++];
        else soln[k++]=arr[j++];
    }

    while(i<=mid){
        soln[k++]=arr[i++];
    }

    while(j<=r){
        soln[k++]=arr[j++];
    }

    for(int i=l;i<=r;i++){
        arr[i]=soln[i-l];
    }
}

void mergesort(int arr[],int l,int r){ //l = starting index, r = last index
    if(l<r){
    int mid = (l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merger(arr,l,r,mid);
    }
}

int main(){
    int arr[]={5,2,7};
    mergesort(arr,0,2);
    cout<<"The sorted array is : ";
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

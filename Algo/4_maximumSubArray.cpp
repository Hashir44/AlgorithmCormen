#include<bits/stdc++.h>
using namespace std;
#define INT_MIN -999999

int max2(int a,int b){
    return (a>b) ? a : b;
}

int max3(int a,int b,int c){
    return max2(max2(a,b),c);
}

int maxCrossSection(int* arr,int l,int m,int r){

    int sum =0;
    int left_sum = INT_MIN, right_sum = INT_MIN;

    for(int i=m;i>=l;i++){
        sum += arr[i];
        if(sum>left_sum){
            left_sum=sum;
        }
    }

    sum =0;

    for(int i=m;i<=r;i++){
        sum+=arr[i];
        if(sum>right_sum){
            right_sum=sum;
        }
    }

    return max3(left_sum,right_sum,left_sum+right_sum-arr[m]);
}

int maxSubArray(int* arr, int l, int r){
    if(l>r){
        return INT_MIN;
    }
    if(l==r){
        return arr[l];
    }
    int m =(l+r)/2;


    return (max3(maxSubArray(arr,l,m-1), maxSubArray(arr,m+1,r),maxCrossSection(arr,l,m,r)));
}

int main(){
    cout<<"Enter Number of elements of array -> ";
    int n;cin>>n;
    cout<<"Enter Elements of array -> ";
    int arr[n];
    for(int i=0;i<n;i++){cin>>arr[i];}

    cout<<maxSubArray(arr,0,n-1)<<endl;

}

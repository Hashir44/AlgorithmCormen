#include<bits/stdc++.h>
using namespace std;
void printArray(int[] ,int ,int);
void mergeSort(int[] , int , int );
void mergeAlgo(int[], int , int , int );

int main(){
    cout<<"Enter Number of element of array"<<endl;
    int n;
    cin>>n;
    int v[n];
    cout<<"Enter Array Elements"<<endl;
    // Insert Element in vector
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    mergeSort(v,0,n-1);

    printArray(v,0,n);
    return 0;
}

void mergeAlgo(int v[], int p, int q, int r){
    int n1 = q-p+1;
    int n2 = r-q;
    vector<int> v1,v2;
    for(int i=0;i<n1;i++){
        v1.push_back(v[p+i]);
    }
    v1.push_back(1234567); // insert max value at end
    for(int i=0;i<n2;i++){
        v2.push_back(v[q+i+1]);
    }
    v2.push_back(1234567); // insert max value at end
    int i=0,j=0;
    for(int k=p ;k<=r;k++){
        if(v1[i]<=v2[j]){
            v[k]=v1[i];
            i++;
        }else if (v1[i] > v2[j]){
            v[k]=v2[j];
            j++;
        }
    }
}

void mergeSort(int* v, int p, int r ){
    int q = (p+r)/2;
    if(p<r){
        mergeSort(v,p,q);
        mergeSort(v,q+1,r);
        mergeAlgo(v,p,q,r);
    }
}

void printArray(int* v,int p, int r){
    for(int i=p;i<r;i++){
        cout<< v[i] << " ";
    }
}

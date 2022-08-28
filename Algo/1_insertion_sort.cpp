#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int>);

int main(){
    cout<<"Enter Number of element of array"<<endl;
    int n; vector<int> v;
    cin>>n;
    cout<<"Enter Array Elements"<<endl;
    // Insert Element in vector
    for(int i=0;i<n;i++){
        int e;cin>>e;v.push_back(e);
    }

    // Algorithm
    for(int i=2;i<n;i++){
        int key = v[i];
        int j = i-1;
        while( j>0 && v[j] > key){
            v[j+1]= v[j];
            j=j-1;
        }
        v[j]=key;
    }

    printVector(v);

    return 0;
}

void printVector(vector<int> v){
    for(auto i = v.begin(); i!=v.end();i++){
        cout<< *i << " ";
    }
}

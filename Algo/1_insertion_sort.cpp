#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter Number of element of array"<<endl;
    int n; vector<int> v;
    cin>>n;
    cout<<"Enter Array Elements"<<endl;
    // Insert Element in vector
    for(int i=0;i<n;i++){
        int e;cin>>e;v.push_back(e);
    }

    // Algo
    for(int i=2;i<n;i++){
        int element = v[i];
        
        for(int j=i-1;j>=0;j--){
           if(element < v[j]){
            
           }
        }
    }


    return 0;
}
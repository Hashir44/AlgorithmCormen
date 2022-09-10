#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter Size of matrix"<<endl;
    int n;cin>>n;
    vector<vector<int>> a,b,c;

    cout<<"Enter 1st matrix element"<<endl;
    for(int i=0;i<n;i++){
        vector<int> v;
        for(int j=0;j<n;j++){
            int r;cin>>r;v.push_back(r);
        }
        cout<<endl;
        a.push_back(v);
    }

     cout<<"Enter 2st matrix element"<<endl;
     for(int i=0;i<n;i++){
        vector<int> v;
        for(int j=0;j<n;j++){
            int r;cin>>r;v.push_back(r);
        }
        cout<<endl;
        b.push_back(v);
    }

    for(int i=0;i<n;i++){
        vector<int>v;
        for(int j=0;j<n;j++){
            int cRes =0;
            for(int k=0;k<n;k++){
                cRes+=(a[i][k]*b[k][j]);

            }
            cout<<cRes<<endl;
            v.push_back(cRes);
        }
        c.push_back(v);
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

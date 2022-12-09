#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x=0;
    cin>>n;
    int ar[n];
    int a = sizeof(ar) / sizeof(ar[0]);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+a);
    
    if(ar[0]!=0){
        for(int i=0;i<n;i++){
            cout<<ar[i];
        }
        return 0;
    }else if(ar[0]==0){
        for(int i=0;i<n;i++){
            if(ar[i]!=0){
                cout<<ar[i];
                break;
            }
            x+=1;
        }
        for(int i=0;i<n;i++){
            if(i!=x){
                cout<<ar[i];
            }
        }
    }
}

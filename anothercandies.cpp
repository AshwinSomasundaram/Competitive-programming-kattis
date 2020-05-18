#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        long numChild;
        cin>>numChild;
        long x;
        long sum=0;
        for(int i=0;i<numChild;i++){
            cin>>x;
            sum+=x;
            sum%=numChild;
        }
        if(sum%numChild==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        stringstream str(s);
        long x,y;
        str>>x>>y;
        cout<<abs(x-y)<<endl;
    }
}
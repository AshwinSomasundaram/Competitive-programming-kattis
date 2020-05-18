#include<iostream>
#include<math.h>
#include<iomanip>
#include <vector>
#include <set>
#include<map>
#include<algorithm>
#include<sstream>
#include<string>

using namespace std;
int main(){
    int cases;
    cin>>cases;
    
    while(cases--){
        map<string,vector<string>> gear;
        int n;
        cin>>n;
        while(n--){
        string x,y;
        cin>>x>>y;
            gear[y].push_back(x);
            
        }
        int product =1;
        for(auto it=gear.begin();it!=gear.end();it++){
            product*=(it->second.size() + 1);
        }
        cout<<product-1<<endl;
    }
    
}
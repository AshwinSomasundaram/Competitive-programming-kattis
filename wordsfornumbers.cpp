#include<iostream>
#include<math.h>
#include<iomanip>
#include <vector>
#include <set>
#include<map>
#include<algorithm>
#include<sstream>

using namespace std;
int main(){
    map<int,string> num;
    num.emplace(0,"zero");
    num.emplace(1,"one");
    num.emplace(2,"two");
    num.emplace(3,"three");
    num.emplace(4,"four");
    num.emplace(5,"five");
    num.emplace(6,"six");
    num.emplace(7,"seven");
    num.emplace(8,"eight");
    num.emplace(9,"nine");
    num.emplace(10,"ten");
    num.emplace(11,"eleven");
    num.emplace(12,"twelve");
    num.emplace(13,"thirteen");
    num.emplace(14,"fourteen");
    num.emplace(15,"fifteen");
    num.emplace(16,"sixteen");
    num.emplace(17,"seventeen");
    num.emplace(18,"eighteen");
    num.emplace(19,"nineteen");
    num.emplace(20,"twenty");
    num.emplace(30,"thirty");
    num.emplace(40,"forty");
    num.emplace(50,"fifty");
    num.emplace(60,"sixty");
    num.emplace(70,"seventy");
    num.emplace(80,"eighty");
    num.emplace(90,"ninety");
    string s;
    while(cin>>s){
        int count=0;
        for( int i=0;i<s.length();i++){
            if(isdigit(s.at(i)))
                count++;
        }
        int var;
        if(count==s.length()){
            stringstream n(s);
            n>>var;
            if(var%10==0){
                cout<<num[var]<<" ";
            }
            else if(var<20){
                cout<<num[var]<<" ";
            }
            else{
                int o = var%10;
                var-=o;
                cout<<num[var]<<"-"<<num[o]<<" ";
            }
        }
        else{
            cout<<s<<" ";
        }
            
    }
    return 0;
}
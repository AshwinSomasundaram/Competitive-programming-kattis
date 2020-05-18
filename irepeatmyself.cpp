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
    int n;
    cin>>n;
    string s;
    getline(cin,s);
    while(n--){
        //cin.get();
        //string s;
        getline(cin,s);
        string pattern ="";
        //pattern+=s.at(0);
        for(int i=0;i<s.length();i++){
            pattern+=s.at(i);
            string trial = "";
            int j=0;
            while(trial.length()<s.length()&&s.find(trial)==0){
                trial+=pattern.at(j);
                j++;
                if(j==pattern.length())
                    j=0;
            }
            //cout<<trial<<endl;
            if(trial==s){
                break;
            }
        }
        cout<<pattern.length()<<endl;
    }
}
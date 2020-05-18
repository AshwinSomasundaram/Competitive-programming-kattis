#include<bits/stdc++.h>
using namespace std;
int main(){
    string line;
    map<string,int> variables;
    while(cin>>line){
        if(line=="define"){
            string variable;
            int number;
            cin>>number>>variable;
            if(variables.find(variable)!=variables.end()){
                variables[variable]=number;
            }
            else{
                variables.emplace(variable,number);
            }
        }
        else if(line=="eval"){
             string arg1,arg2;
             string opr;
             cin>>arg1>>opr>>arg2;
             int left,right;
             if(variables.find(arg1)!=variables.end()){
                  left = variables[arg1];
             }
             else{
                 cout<<"undefined\n";
                 continue;
             }
             if(variables.find(arg2)!=variables.end()){
                  right = variables[arg2];
             }
             else{
                 cout<<"undefined\n";
                 continue;
             }
             if(opr==">"){
                 if(left>right){
                     cout<<"true\n";
                 }
                 else{
                     cout<<"false\n";
                 }
             }
             if(opr=="<"){
                 if(left<right){
                     cout<<"true\n";
                 }
                 else{
                     cout<<"false\n";
                 }
             }
             if(opr=="="){
                 if(left==right){
                     cout<<"true\n";
                 }
                 else{
                     cout<<"false\n";
                 }
             }
        }
    }
}
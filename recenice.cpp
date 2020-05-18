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
    num.emplace(100,"onehundred");
    num.emplace(200,"twohundred");
    num.emplace(300,"threehundred");
    num.emplace(400,"fourhundred");
    num.emplace(500,"fivehundred");
    num.emplace(600,"sixhundred");
    num.emplace(700,"sevenhundred");
    num.emplace(800,"eighthundred");
    num.emplace(900,"ninehundred");
    
    int n;
    scanf("%d",&n);
    vector<string> words;
    int total=0;
    string s;
    while(n--){
        string s="";cin>>s;
        words.push_back(s);
        if(s!="$"){
            total+=s.length();
        }
        
    }
    string finalnum="";
    for(int i=0;i<1000;i++){
        string number="";
        if(i<99&&i>20&&(i%10!=0)){
            int temp = i;
            int o=temp%10;
            temp-=o;
            number+=num[temp];
            number+=num[o];
        }
        else if(i<=20){
            number+=num[i];
        }
        else if(i<100&&(i%10==0)){
            number+=num[i];
        }
        else if(i>=100&&(i%100==0)){
            number+=num[i];
        }else if(i>=100 &&(i%10==0)){
            int temp =i;
            int t=temp%100;
            temp-=t;
            number+=num[temp];
            number+=num[t];
        }
        else{
            int temp =i;
            if(temp%100<20){
                number+=num[temp-(temp%100)];
                number+=num[temp%100];
            }
            else{
            int o=temp%10;
            temp-=o;
            int t = temp%100;
            temp-=t;
            number+=num[temp];
            number+=num[t];
                number+=num[o];}
        }
        
        if(total+number.length()==i){
            finalnum=number;
            break;
        }
        
        
    }
    for(string i: words){
        if(i=="$")
            cout<<finalnum<<" ";
        else
            cout<<i<<" ";
    }
    return 0;
}
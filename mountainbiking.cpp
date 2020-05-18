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
    int n;
    scanf("%d",&n);
    int l= n;
    double a;
    scanf("%lf",&a);
    vector<double> dist;
    vector<double> degrees;
    while(n--){
        double dis,deg;
        scanf("%lf%lf",&dis,&deg);
        dist.push_back(dis);
        degrees.push_back(deg);
    }
    double v=0;
    double u=0;
    vector<double> output;
    for(int i=l-1;i>=0;i--){
        double tempAngle =degrees.at(i);
        double tempDist = dist.at(i);
        double tempResult = (u*u)+(2*a*cos(tempAngle*(3.14159265358/180))*tempDist);
        v= sqrt(tempResult);
        output.push_back(v);
        u=v;
    }
    for(int i=output.size()-1;i>=0;i--){
        printf("%.5lf\n",output.at(i));
    }
}
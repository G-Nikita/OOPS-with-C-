#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float p;
    cout<<"enter any float value with at least 6 decimal points"<<endl;
    cin>>p;
    cout<<fixed<<setprecision(5)<<p<<endl;
    cout<<fixed<<setprecision(4)<<p<<endl;
    cout<<fixed<<setprecision(3)<<p<<endl;
    cout<<fixed<<setprecision(2)<<p<<endl;
    cout<<fixed<<setprecision(1)<<p<<endl;

}

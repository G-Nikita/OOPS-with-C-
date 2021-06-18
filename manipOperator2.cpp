#include<iostream>
using namespace std;
#include<iomanip>
int main(){
    cout<<"using setw and setfill"<<endl;
    cout<<setfill('*')<<setw(40)<<"it will print from right to left"<<endl;
    cout<<setw(14)<<"adding numbers"<<endl;
    cout<<setw(14)<<100<<endl;
    cout<<setw(14)<<10<<endl;
    cout<<setw(14)<<1<<endl;
    cout<<setw(14)<<111<<endl;
}

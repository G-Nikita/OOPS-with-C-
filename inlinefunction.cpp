#include<iostream>
using namespace std;

inline int max(int x, int y){
    return(x>y?x:y);
}
int main(){
    int a,b;
    cout<<"enter two integrs "<<endl;
    cin>>a>>b;
    cout<<"larger of two is :"<<max(a,b);


}

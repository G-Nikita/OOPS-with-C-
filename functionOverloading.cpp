 #include<iostream>
 using namespace std;
 float area (int base,float h){
     return(0.5*base*h);
 }
 int area(int l, int b){
     return(l*b);
 }
 int area(int s){
     return(s*s);
 }
 int main(){
     int s,l,b,base;
     float h;
     cout<<"enter the base and height(in float) of triangle\n";
     cin>>base>>h;
     cout<<"area is:"<<area(base,h)<<endl;
     cout<<"enter the length and breadth of rectangle\n";
     cin>>l>>b;
     cout<<"area is:"<<area(l,b)<<endl;
     cout<<"enter the side of square \n";
     cin>>s;
     cout<<"area is:"<<area(s)<<endl;

 }

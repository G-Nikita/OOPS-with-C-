#include<iostream>
using namespace std;
class student{
private:
int id;
char name[20];
float fee;
public:
void get();
void put();
};
void student :: get(){
cout<<"Enter id, name, fee\n";
cin>>id>>name>>fee;
}
void student:: put(){
cout<<"\n the values that you entred are\n";
cout<<"Name="<<name<<endl;
cout<<"id="<<id<<endl;
cout<<"fee="<<fee<<endl;
}
int main(){
student s1;
s1.get();
s1.put();
}

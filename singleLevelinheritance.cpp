#include<iostream>
using namespace std;
class Sample{
protected:
    int id,fee;
    char name[20];
public:
    void get(){
        cout<<"enter the id,fee and name of student";
        cin>>id>>fee>>name;
    }
    void put(){
    cout<<"the values you enterd are :.........\n";
    cout<<"id="<<id<<endl<<"name="<<name<<endl<<"fee="<<fee;
    }

};
class Inherited :public Sample{
private:
    int m1,m2,m3,tot;
    float avg;
public:
    void get_marks(){
        cout<<"enter the number of "<<name<< " in three subjects\n";
        cin>>m1>>m2>>m3;
    }
    void put_marks(){
        tot=m1+m2+m3;
        avg=tot/3;
        cout<<"average of "<<name<<"with id = "<< id<<"is="<<avg;
    }

};
int main(){
    Inherited der_obj;
    der_obj.get();
    der_obj.put();
    der_obj.get_marks();
    der_obj.put_marks();
    return 0;
}

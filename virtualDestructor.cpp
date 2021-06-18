#include<iostream>
using namespace std;
class base{
public:
    base(){
        cout<<"base class constructor"<<endl;
    }
  virtual ~ base(){/*first use this destructor without virtual keyword and then see the diffrence*/
       cout<<"base class destructor\n";
   }
};
class der:public base{
public:
    der(){
        cout<<"derived class constructor\n";
    }
    ~der(){
        cout<<"derived class destructor\n";
    }

};
int  main(){
    base *p=new der;
    delete p;
}

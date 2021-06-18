#include<iostream>
using namespace std;
class student
{
	int id;
	float fee;
	char name[20];
public:
	void get()
	{
		cout<<"Enter student id,fee and name";
		cin>>id>>fee>>name;

	}
	void put();


};
void student:: put()
{
	cout<<"The values that you enterd are"<<id<<"\n"<<fee<<endl<<name;
}
int main()
{
	student s1;
	s1.get();
	s1.put();

}

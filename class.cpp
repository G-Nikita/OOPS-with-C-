#include<iostream>
using namespace std;
class student 
{
	int id;
	float fee;
	char name;
public:
	void get()
	{
		cout<<"Enter student id,fee and name";
		cin>>id>>fee>>name;

	}

void put()
{
	cout<<"The values that you enterd are";
	cout<<id;
	cout<<name;
	cout<<fee;
}
};
int main()
{
	student s1;
	s1.get();
	s1.put();
	
}
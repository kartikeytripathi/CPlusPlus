#include<iostream>
using namespace std;

class Dog
{
	string name;
	int age;
	
	public:
		Dog(){
			name="dummy";
			age=3;
		}
		
		void getName(){
			cout<<name;
		}
		void getName() const{
			cout<<"const"<<name;
		}
};
int main()
{
	const Dog d;
	d.getName();
}

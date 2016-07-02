//Set doesn't allow duplicate values while multiset does
//Associative Containers (Always Sorted)
#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main()
{
	set<int> s;
	s.insert(3);
	s.insert(4);
	s.insert(1);
	
	set<int>::iterator it;
	it=s.find(3);
	
	pair<set<int>::iterator,bool> ret;
	
	ret=s.insert(4);
	
	if(ret.second==false)
	it=ret.first;
	
	cout<<*it;
	
	s.insert(it,9);  //it is just used to reduce insertion time O(logn)
	
	s.erase(it);
	
}

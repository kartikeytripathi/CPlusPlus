//Map doesn't allow duplicate values while multimap does
//Associative Containers (Always Sorted)

#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main()
{
	map<char,int> mymap;
	
	mymap.insert(make_pair('a',100));
	mymap.insert(make_pair('z',200));
	mymap.insert(make_pair('g',220));
	mymap.insert(make_pair('c',180));
	
	map<char,int>::iterator it=mymap.begin();
	mymap.insert(it,pair<char,int>('b',300));
	
	for(it=mymap.begin();it!=mymap.end();it++)
	cout<<(*it).first<<"  "<<(*it).second<<end;
	
}

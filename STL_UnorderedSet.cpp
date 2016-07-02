//UnorderedContainers
//Unordered_Set

#include<iostream>
#include<unordered_set>
#include<set>
#include<iterator>
#include<vector>

using namespace std;

int main()
{
	std::unordered_set<string> myset = {"red","green","blue"};
	unordered_set<string>::const_iterator itr=myset.find("green");
	
	if(itr!=myset.end())
	cout<<*itr<<endl;
	
	myset.insert(itr,"yellow");
	
	vector<string> vec ={"purple","black"};
	
	myset.insert(vec.begin(),vec.end());
	
	for(itr=myset.begin();itr!=myset.end();itr++)
	cout<<*itr<< " ";
	
	
}

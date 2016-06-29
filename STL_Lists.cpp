/*Sequence Containers (Vector,Deque,Lists)
Shradhey Tripathi
*/
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<list>
using namespace std;

int main()
{
	list<int> mylist;
	
	mylist.push_back(4);
	mylist.push_back(6);
	mylist.push_back(3);
	
	mylist.push_back(1);
	mylist.push_front(10);

	list<int>::iterator itr1;
	
	for(itr1=mylist.begin();itr1!=mylist.end();itr1++)
	{
		cout<<*itr1<<" ";
	}
	cout<<endl;
	
	
	list<int>::iterator itr=find(mylist.begin(),mylist.end(),6);
	
	mylist.insert(itr,8);	    //insert function O(1) time
	
	for(itr1=mylist.begin();itr1!=mylist.end();itr1++)
	{
		cout<<*itr1<<" ";
	}
	cout<<endl;
	
	itr++;
	mylist.erase(itr);         //erase function
	
	for(itr1=mylist.begin();itr1!=mylist.end();itr1++)
	{
		cout<<*itr1<<" ";
	}
	cout<<endl;
	
	
	
}


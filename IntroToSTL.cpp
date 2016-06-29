/*Introduction To C++ STL
Shradhey Tripathi
*/
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> vec;    //Container
	vec.push_back(6);
	vec.push_back(8);
	vec.push_back(1);
	vec.push_back(3);
	
	vector<int>::iterator itr1=vec.begin();   //Iterators
	vector<int>::iterator itr2=vec.end();
	vector<int>::iterator itr;
	
	for(itr=itr1;itr!=itr2;itr++)
	{
		cout<<*itr<< " ";
	}
	cout<<endl;
	sort(itr1,itr2);   //algorithms
	
	for(itr=itr1;itr!=itr2;itr++)
	{
		cout<<*itr<< " ";
	}
}

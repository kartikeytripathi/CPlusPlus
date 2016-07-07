//Disjoint Set in C++
//Shradhey Tripathi

#include<iostream>
#include<unordered_map>

using namespace std;

class Disjoint_Set
{
	unordered_map<char,char> PARENT;
	
	public:
		Disjoint_Set()
		{
			char set[]={'a','b','c','d','e','f'};
			for(char x:set)
			{
				PARENT[x]=x;
			}
			PARENT['d']='b';
		}
		
		char Find(char item)
		{
			if(PARENT[item]==item)
			return item;
			else
			return Find(PARENT[item]);
		}
		
		void Union(char set1,char set2)
		{
			PARENT[set1]=set2;
		}
};
int main()
{
	Disjoint_Set ds;
	cout<<ds.Find('c')<<endl;
	ds.Union('a','b');
	cout<<ds.Find('a')<<endl;
	cout<<ds.Find('d')<<endl;
	
	
}

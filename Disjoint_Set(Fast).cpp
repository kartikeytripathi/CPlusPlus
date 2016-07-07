//Disjoint Set in C++ (Fast Find Implementation )
//Shradhey Tripathi

#include<iostream>
#include<unordered_map>

using namespace std;

class Disjoint_Set
{
	unordered_map<char,char> PARENT;
	unordered_map<char,int> RANK;
	public:
		Disjoint_Set()
		{
			char set[]={'a','b','c','d','e','f'};
			for(char x:set)
			{
				PARENT[x]=x;
				RANK[x]=0;		
			}
			PARENT['d']='b';
			RANK['b']=1;
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
			if(RANK[set1]>RANK[set2])
			{
				PARENT[set2]=set1;
			}
			else if(RANK[set1]<RANK[set2])
			{
				PARENT[set1]=set2;
			}
			else
			{
				PARENT[set1]=set2;
				RANK[set2]++;
			}
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

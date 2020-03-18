#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	list<int> s;
	for(int i=0;i<n;i++)
	{
		int m;
		cin>>m;
		s.push_back(m);
	}
	while(s.size()>0)
	{
	cout<<s.size()<<endl;
	int min=(*min_element(s.begin(),s.end()));
	
	for(auto j=s.begin();j!=s.end();j++)
	{
		*j-=min;
	}
     s.remove(0);
	}

	

}

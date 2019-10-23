#include<iostream>
#include<vector>
using namespace std;

int main()
{
	std::vector<string>s;

	int n;
	std::cin>>n;
	int b[n]; string name;
for(int i=0;i<n;i++)
{
	std::cin>>name;
	b[i]=name.length();
	s.push_back(name);
}

char f,r;
std::cin>>f>>r;
int t=-1;
for (int i=0;i<n;i++)
{
//cout<<i<<"\t";
	if((f==s[i][0]) && (r==s[i][b[i]-1]))
	{ t=i;
	  
	}
}

cout<<t<<"\n";
}
	

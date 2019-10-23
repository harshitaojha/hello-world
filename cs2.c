#include <iostream>
//#include<conio.h>
int main()
{
	int n,b=0,sum=0;
     	std::cin>>n;
	int trade[n],risk[n],bonus[n];

for(int i=0;i<n;i++)
{
	std::cin>>trade[i];
}

for(int i=0;i<n;i++)
{
	std::cin>>risk[i];
}

for(int i=0;i<n;i++)
{
	std::cin>>bonus[i];
}

for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if(trade[i]>=risk[j])
			if(b<bonus[j])
				b=bonus[j];
	}
sum+=b;
}

std::cout<<sum;
}


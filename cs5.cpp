#include<iostream>
int main()
{
	int n;
	std::cin>>n;
	int a[2*n];
	for(int i=0;i<2*n;i++)
	{
		std::cin>>a[i];
	}

int i=1,p=0;
while(i<n-2)
{
	int b = abs(a[i]-a[i+2]);
	if(b>p)
	  p=b;
i=i+2;
} 

std::cout<<p<<"\n";
}


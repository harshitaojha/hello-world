#include<iostream>
int main()
{
	int m,n;
	std::cin>>m>>n;
	
	int A[m],a[n];

for(int i=0;i<m;i++)
{
	std::cin>>A[i];
}

for(int i=0;i<n;i++)
{
	std::cin>>a[i];
}

for (int i=0;i<n;i++)
{
	if(a[i]==A[0])
	   a[i]=1;
   else
	for(int j=0;j<m-1;j++)
	{
		if((a[i]<A[j]) && (a[i]>=A[j+1]))
			a[i]=j+2;
		a[i]=n;
	}
	
}

for(int i=0;i<m;i++)
A[i]=0;

for(int i=0;i<n;i++)
A[a[i]]++;

int mode=0;
int k=A[0];

for(int i=1;i<m;i++)
{
	if(A[i]>k)
	  {
		k = A[i];
		mode = i;
	  }
}

std::cout<<mode<<"\n";
}



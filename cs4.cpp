#include<iostream>
 
using namespace std;
int b=0;
 
void Combination(int a[],int v[], int reqLen, int start, int currLen, bool check[], int len, int mc) 
{
	
	// Return if the currLen is more than the required length.
	if(currLen > reqLen)
	return;
	// If currLen is equal to required length then print the sequence.
	else if (currLen == reqLen) 
	{
		//cout<<"\t"; 
		int sum=0,p=0;
		for (int i = 0; i < len; i++) 
		{
			if ((check[i] == true) && !(a[i]>mc))
			{
				sum+=a[i];
				p+=v[i];
			}
		}
		if((sum<=mc) && (p>b))
		b=p;
		return;
	}
	// If start equals to len then return since no further element left.
	if (start == len) 
	{
		return;
	}
	// For every index we have two options.
	// First is, we select it, means put true in check[] and increment currLen and start.
	check[start] = true;
	Combination(a,v, reqLen, start + 1, currLen + 1, check, len,mc);
	// Second is, we don't select it, means put false in check[] and only start incremented.
	check[start] = false;
	Combination(a,v, reqLen, start + 1, currLen, check, len, mc);
}
 
int main()
{
	int i, n;
	bool check[n];
	//cout<<"Enter the number of element array have: ";
	std::cin>>n;
 
	int c[n],v[n];
	//cout<<"\n";
 
	// Take the input of the array.
	for(i = 0; i < n; i++)
	{
		//cout<<"Enter "<<i+1<<" element: ";
		std::cin>>c[i];
		check[i] = false;
	}
	for(i = 0; i < n; i++)
	{
		//cout<<"Enter "<<i+1<<" element: ";
		std::cin>>v[i];
		check[i] = false;
	}

 	int mc;
        std::cin>>mc;
 
	// For each length of sub-array, call the Combination().
	for(i = 1; i <= n; i++)
	{
		//cout<<"\nThe combination of  length "<<i<<" for the given array set:\n";
		Combination(c,v, i, 0, 0, check, n, mc);
	}
	cout<<b<<"\n";
	return 0;
}

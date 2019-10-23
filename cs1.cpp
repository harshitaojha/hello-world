#include<iostream>
int main()
{
	float initialLevelOfDebt, interestPercentage, repaymentPercentage,c=0;	  	  std::cin>>initialLevelOfDebt>>interestPercentage>>repaymentPercentage;
	
	float r = repaymentPercentage*0.01*initialLevelOfDebt;
	
	while(initialLevelOfDebt>50)
	{
		initialLevelOfDebt+=interestPercentage*0.01*initialLevelOfDebt;
		initialLevelOfDebt-=r;
		//std::cout<<initialLevelOfDebt<<"\n";
		c++;
	}

int t = c*r+initialLevelOfDebt+100;
std::cout<<t<<"\n";
}


//My approach:
//Take log (n) to base 2 and if the result is purely an integer,i.e ceil(log2(n) == floor(log2(n)), then its power of 2
//TC = O(1)
//SC = O(1)

//Another approach:
//Its an observation basically
//Let n=4 (0100), n-1=3 (0011)
//Let n=8 (1000), n-1=7 (0111)
//observe that (n & (n-1)) == 0 if n is power of 2
//TC = O(1)
//SC = O(1)

//I have used 1st one

#include<iostream>
#include<cmath>   //to use floor() and ceil() and log2()
using namespace std;

int isPowerOf2(int n)
	{
		//corner case. Log() ke andar no 0 and negative
		if(n==0)
		{
			return 0;
		}
		else
		{
			//returns only if the condition holds
			if(ceil(log2(n))==(floor(log2(n))))
			{
				return 1;	
			}
		}
	}
	
int main() 
{ 
	int n;
	
	cout<<"\nEnter the number ";
	cin>>n;
	 
	//corner case
	//n>0 else bitwise operations will be undefined and meaningless
	
	int flag=isPowerOf2(n);
	
	//check point
	if(flag==1 && n>=0) 
	{
		cout<<"\nIts a power of 2!";
	}
	else
	{
		cout<<"\nThe input number is either not a power of 2 or its negative. Try with another number!";	
	}
		
	return 0;
}

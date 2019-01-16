#include<iostream>
#include<vector>
using namespace std;
long long int MaximumProduct(int n,vector<int> vect)
{
	long long int largest,second_largest;
	if(n==1)
	return vect[0];
	else
	{
		if(vect[0]>=vect[1])
		{
			largest=vect[0];
			second_largest=vect[1];
		}
		else
		{
			largest=vect[1];
			second_largest=vect[0];
		}
		for(int i=2;i<n;i++)
		{
			if(vect[i]>second_largest)
			{
				if(vect[i]>largest)
				{
					
					second_largest=largest;
					largest=vect[i];
				}
				else
				{
					second_largest=vect[i];
				}
			}
		}
		
	}

	return largest * second_largest;
}

int main()
{
	int size,i,number;
	vector<int> numbers;
	cout<<"Enter the number of elements: ";
	cin>>size;
	cout<<"Enter the elements: \n";
	for(i=0;i<size;i++)
	{
		cout<<i+1<<": ";
		cin>>number;
		numbers.push_back(number);
	}
	cout<<"Maximum Pairwise Product: "<<MaximumProduct(size,numbers);
	return 0;
}

/*#include<iostream>
#include<string>*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string prev="",cur="1";
	int n=10,i,j;
	//cout<<"Enter value of n:";
	//cin>>n;
	for(i=1;i<n;i++)  //outer loop to iterate n number of times.
	{
		cout<<cur<<endl;
		prev=cur;
		cur.clear();
		int count=1;
		for(j=0;j<prev.length();j++)  //iterating for number of characters in the previous line
		{
			if(prev[j]==prev[j+1])
			{
				count++;
				continue;
			}
			cur.append(to_string(count));/*Completing the current line on the basis of
			                               	      the count of the characters of the previous line.*/
			cur+=prev[j];
			count=1;//initializing count back to 1.
		}
		prev.clear();//clearing the previous value.
	}
	cout<<endl<<"\""<<cur<<"\""<<endl;
}

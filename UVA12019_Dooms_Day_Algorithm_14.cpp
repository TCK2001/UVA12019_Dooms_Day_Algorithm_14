/*
Sample Input
8
1 6
2 28
4 5
5 26
8 1
11 1
12 25
12 31
Sample Output
Thursday
Monday
Tuesday
Thursday
Monday
Tuesday
Sunday
Saturday
*/

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int m=0,d=0;
		cin>>m>>d;
		for(int i=m-1;i>=1;i--) //1월 까지 계산; 
		{
			if(i==2)
			{
				d=d+28;
			}
			else if(i%2==1)
			{
				if(i<8)
				{
					d=d+31;
				}
				else 
				{
					d=d+30;
				}
			}
			else if(i%2==0)
			{
				if(i>=8)
				{
					d=d+31;	
				}
				else
				{
					d=d+30;
				}
			} 
		}
		if(d%7==1) //전부 일로 바꾼후 나누기 시도; 
		{
			cout<<"Saturday"<<endl;
		}
		else if(d%7==2)
		{
			cout<<"Sunday"<<endl;
		}
		else if(d%7==3)
		{
			cout<<"Monday"<<endl;
		}
		else if(d%7==4)
		{
			cout<<"Tuesday"<<endl;
		}
		else if(d%7==5)
		{
			cout<<"Wednesday"<<endl;
		}
		else if(d%7==6)
		{
			cout<<"Thursday"<<endl;
		}
		else if(d%7==7)
		{
			cout<<"Friday"<<endl;
		}
	}	
return 0;
}


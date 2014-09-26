#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{   int ct=97;
    int flag=1; 
	int ctr[26]={0};
	char str[1000],c[26];
	for(int l=0;l<26;l++)
	{
		c[l]=ct;
		ct++;
	}
	scanf ("%[^\n]%*c", str);
	for(int u=0;u<strlen(str);u++)
	{
		if(str[u]<97)
		{
			str[u]=str[u]+32;
		}
		
	}
	int len=strlen(str);
	for(int i=0;i<len;i++)
	{   
		for(int j=0;j<26;j++)
		{
			if(str[i]==c[j])
			{
				ctr[j]=1;
				
			}
			
		}
	}
	for(int h=0;h<26;h++)
	{	
		if(ctr[h]==1)
		{
			flag=1;
		}
		else 
		{
		flag=0;
		break;		
		}
	}
	if(flag==1)
	{
		
	cout<<"pangram";
	}
	else
	
		cout<<"not pangram";
}

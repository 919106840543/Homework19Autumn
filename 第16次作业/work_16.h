（4）
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
void f1(char *s[],int a[],int n)
 {
 	for(int i=0;i<n;i++)
 	{
 		for(int j=0;j<i;j++)   
 		{
 			if(strcmp(s[j],s[i])==0)
 			{
 				a[i]=a[j];
 				i++;
 				break;
 			}
 		}		
 		for(int k=i+1;k<n;k++) 
 		{
 			if(strcmp(s[i],s[k])==0) a[i]+=1;
 		}
 	}
 	int b;
 	char *temp;
 	for(int i=0;i<n-1;i++)
void f(char* a)
{
 	int l=strlen(a);
 	for(int i=0;i<l;i++)
 	{
 		for(int j=0;j<n-1-i;j++)
 		{
 			if(a[j]>a[j+1])
 			{
 				b = a[j];			
 				a[j] = a[j+1];
 				a[j+1] = b;	
				temp = s[j];			
 				s[j] = s[j+1];
 				s[j+1] = temp;		
 			}
 		}
 		if(*a>='A'&&*a<='Z') *a+=32;
 		a++;
 	}
 	int word;
 	for(int j=n-1;j>=0;j--)
 	    {
 			word=1;
 			for(int k=n-1;k>j;k--)
 			{
 				if(strcmp(s[k],s[j])==0)
 				{
 					word=0;
 					break;
 				}
 			}
 			if(word==0) continue;		    
 			cout<<s[j]<<" "<<a[j]<<endl;
 	    }	

}
int main()
{
	int n;
 	cin>>n;
 	if(n>10||n<3) return false;
 	int a[n];
 	for(int i=0;i<n;i++)
 	{
 		a[i]=1;
 	}
 	char *b[20]; 
 	for(int i=0;i<n;i++)
 	{
 		b[i]=(char*)malloc(sizeof(char)*21);
 		cin>>b[i];
 	}
 	f1(b,a,n);
 	char a[50];
 	cin.getline(a,50);
 	f(a);
	cout<<a;
}

（5）
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void f1(char *p)
{
	int a[100],j=0,b=0;
	for(int i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)>='0'&&*(p+i)<='9')
		{
			b=*(p+i)-48+b*10;
			if (*(p+i+1)<'0'||*(p+i+1)>'9')
			{
				a[j]=b;
				j++;
				b=0;
			}
		}
	}
	int sum=0;
	for(int i=0;i<j;i++)
	{
		cout<<a[i]<<" ";
		sum++;
	}
	cout<<endl;
	cout<<"共有"<<sum<<"个整数";
}
int main()
int main(int argc,char *argv[])
{
	char s[100];
	cin.getline(s,100);
	f1(s);
}
 	char *t;
 	for(int i=0;i<argc-1;i++)
 	{
 		for(int j=0;j<argc-i-1;j++)
 		{
 			if(strcmp(argv[j],argv[j+1])>0)
 			{
 				t=argv[j];
 				argv[j]=argv[j+1];
 				argv[j+1]=t;
 			}
 		}
 	}
 	for(int k=0;k<argc;k++)
 	    cout<<argv[k]<<endl;
} 
/*
(4)编写一个程序， 先输入 n>2， 再输入 n 个不同长度的字符串，然后对这些串进行多种计算。 比如，
按串内容进行排序，计算每个串重复出现的次数，并按次数降序排序。 要求不能假设 n 最大值，也不能按假
设每个串统一长度造成内存浪费。
*/
/*测试数据 
6
qwe
sda
qw
qw
dsgdsg
sa
*/ 
#include<iostream>
#include<string.h>
#include <iomanip>
using namespace std;
struct node{
	char*str;
	int num;
};
void sort(node*s,int n){
	char *temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(strcmp(s[j].str,s[j+1].str)>0){
				temp=s[j].str;
				s[j].str=s[j+1].str;
				s[j+1].str=temp;
			}
		}
	}
}
node* count(node* ss,int n){
	for(int i=0;i<n;i++){
		ss[i].num=0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(strcmp(ss[i].str,ss[j].str)==0){
				ss[i].num+=1;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(ss[j].num<ss[j+1].num){
				int mm=ss[j].num;
				ss[j].num=ss[j+1].num;
				ss[j+1].num=mm;	
				char *temp=ss[j].str;
				ss[j].str=ss[j+1].str;
				ss[j+1].str=temp;
			}
		}
	}	
	return ss;
}

int main(){
	cout<<"请输入要计算的串数 n: ";
	int n;cin>>n;
	cout<<"请输入要计算的字符串"<<endl;	
	node* table=new node[n];
	for(int i=0;i<n;i++){
		table[i].str=new char[20];
		cin>>table[i].str;
	}
	///////////////////////////	
	cout<<"按串内容进行排序结果："<<endl;
	sort(table,n);
	for(int i=0;i<n;i++){
		cout<<table[i].str<<endl;
	}
	//////////////////////////
	cout<<"按串重复次数降序结果："<<endl;
	cout<<"字符串\t\t\t"<<"次数"<<endl;	
	table=count(table,n);	
	for(int i=0;i<n;i++){
		if(strcmp(table[i].str,table[i+1].str)==0){
			i++;		
		}
		cout<<table[i].str<<"\t\t\t"<<table[i].num<<endl;		
	}
	
	for(int i=0;i<n;i++){
		delete []table[i].str;
	}
	delete []table;	
}


41(4).

#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
void sort1(char * strs[], int n){		
	char *temp;
	for(int i = 0; i < n-1; i++)				
		for(int j = 0; j < n-i-1; j++)
			if(strcmp(strs[j], strs[j+1]) > 0){
				temp = strs[j];				
				strs[j] = strs[j+1];
				strs[j+1] = temp;
			}
}
void sort2(char* strs[],int n){
	int k[10];
	char *temp1;
	for(int i=0;i<n;i++)
		k[i]=1;
	for(int i = 0; i < n; i++)				
		for(int j = 0; j < n; j++)
			if(strcmp(strs[i], strs[j])==0){
				k[i]++;
			}
	for(int i=0;i<n;i++)
		k[i]--;
	for(int i=0;i<n-1;i++)
		for(int j=0;j<n-1-i;j++){
			if(k[j]<k[j+1]){
				int temp=k[j];
				k[j]=k[j+1];
				k[i+1]=temp;
				temp1 = strs[j];				
				strs[j] = strs[j+1];
				strs[j+1] = temp1;
			}
	}
	cout<<"       字符串       "<<" 次数"<<endl; 
	for(int i=0;i<n;i++){
		if(i==0){
				cout<<setw(10)<<strs[0]<<"  "<<setw(10)<<k[0]<<endl;
				continue;
		}
		if(strcmp(strs[i],strs[i-1])==0)
			continue;
		cout<<setw(10)<<strs[i]<<"  "<<setw(10)<<k[i]<<endl;
	}
}
int main(){
	int n;
	cout<<"输入要输入的字符串数！"<<endl;
	while(1){
		cin>>n;
		if(n<=2||n>10)
			cout<<"please input n>2&&n<=10!"<<endl;
		else
			break;
	}	
	char ms[10][20];
	char *p[10];
	getchar();
	for(int i=0;i<n;i++){
		memset(ms[i],sizeof(ms[i]),0);
	}
	cout<<"输入字符串！"<<endl;
	for(int i=0;i<n;i++){
		cin.getline(ms[i],20);
		p[i]=ms[i];
 	}
 	cout<<"直接排序后："<<endl; 
	sort1(p,n);
	for(int i=0;i<n;i++){
		cout<<p[i]<<endl;
	}
	cout<<"第二种排序后："<<endl;
	sort2(p,n);
} 


41(5).

#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
void dealNumCount(char a[]){
	int count=0;
	int b[50];
	for(int i=0;i<strlen(a);i++){
		if((a[i]>=65&&a[i]<=122)||a[i]=='	'||a[i]==' '){
			continue;
		}
		if((a[i]>=48&&a[i]<=57)||a[i]!='	'||a[i]==' '){
			int temp=0;
			for(;;i++){
				//***************
				if((a[i]>=48&&a[i]<=57))
					temp=temp*10+(a[i]-48);
				//***************
				if((a[i]>=65&&a[i]<=122)||a[i]==' '||a[i]=='	'){
					b[count]=temp;
					count++;
					break;
				}
			}
		}
	}
	cout<<"一共有"<<count<<"个整数"<<endl; 
	for(int i=0;i<count;i++){
		cout<<b[i]<<'\t';
	}
}
int main(){
	char a[100];
	int b[50];
	cin.getline(a,100);
	dealNumCount(a);

} 
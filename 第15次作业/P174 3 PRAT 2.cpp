#include <iostream>
using namespace std; 
int yueshu;
int gongyueshu(int a,int b)
{
	int t,temp;
	if(a!=0)
	{
	for (temp=a;;temp--)
	{
	if(a%temp==0&&b%temp==0)
	break ;
}
	return temp;
}
} 
struct Fraction
{
	int fenzi;
	int fenmu;
};
void tongfen(Fraction *d)
 {
 	d->fenzi/=yueshu;
 	d->fenmu/=yueshu;
 }
int huajian(Fraction s1)
 {
	Fraction *zhizhen1=&s1;
 	yueshu=gongyueshu(s1.fenzi,s1.fenmu);
 	if(yueshu<0)
	 yueshu=-yueshu;
  if(yueshu>0)
 	{
	 tongfen(zhizhen1);
	if(s1.fenmu<0&&s1.fenzi>0)
	{
	s1.fenmu=-s1.fenmu;
	s1.fenzi=-s1.fenzi;
    }
 	cout<<s1.fenzi<<endl;
 	cout<<s1.fenmu<<endl;
 	}
	 else 
 	{
 		s1.fenmu=1;
 		cout<<s1.fenzi<<endl;
 		cout<<s1.fenmu<<endl;
	}
}
int main()
 {
 	Fraction m1,m2,plus,minus,multi,divide,*mm1=&m1,*mm2=&m2,*mm3=&plus,*mm4=&minus,*mm5=&multi,*mm6=&divide;
 	cout<<"imput left fenzi:"<<endl;cin>>m1.fenzi;
 	cout<<"imput left fenzu:"<<endl;cin>>m1.fenmu;
 	cout<<"imput right fenzi:"<<endl;cin>>m2.fenzi;
 	cout<<"imput right fenzi:"<<endl;cin>>m2.fenmu;
 	if((m1.fenmu==0)||(m2.fenmu==0))
 	return 0;
 	int Mu1=(m1.fenmu)*(m2.fenmu);
 	mm3->fenmu=Mu1;mm4->fenmu=Mu1;mm5->fenmu=Mu1;
 	if((m1.fenzi)*(m2.fenmu)>(m1.fenmu)*(m2.fenzi))
 	cout<<" left > right "<<endl;
 	else if ((m1.fenzi)*(m2.fenmu)==(m1.fenmu)*(m2.fenzi))
 	cout<<" left = right "<<endl;
 	else cout<<" left < right "<<endl;
 	mm3->fenzi=(m1.fenzi)*(m2.fenmu)+(m1.fenmu)*(m2.fenzi);
 	mm4->fenzi= (m1.fenzi)*(m2.fenmu)-(m1.fenmu)*(m2.fenzi);
 	mm5->fenzi=(m1.fenzi)*(m2.fenzi);
 	mm6->fenzi=(m1.fenzi)*(m2.fenmu);mm6->fenmu=(m1.fenmu)*(m2.fenzi);
 	cout<<"sum :"<<endl;huajian(plus);
 	cout<<"minus :"<<endl;huajian(minus);
 	cout<<"multi :"<<endl;huajian(multi);
 	cout<<"divide :"<<endl;huajian(divide);
}

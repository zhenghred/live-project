#include "stdio.h"
#include "iostream"
#include "string"
using namespace std;
class CampusAutos
{
private:
string snotag;
public:
CampusAutos(string sno)
{
snotag=sno;
}
string Getsnotag()
{
return snotag;
}
};
void main()
{
CampusAutos *p[5];
bool status[5];
for(int m=0;m<5;m++)
{
status[m]=false;
}
int i=0;
while(1)
{
cout<<"操作：1表示学生进入，2表示学生出校"<<endl;
cin>>i;
int biaoji=0;
switch(i)
{
case 1:
{
while(status[biaoji]==true&&biaoji<5)
biaoji++;
if(biaoji<5)
{
cout<<"请输入学号"<<endl;
string snoin;
cin>>snoin;
while (snoin.length()>8)
{
cout<<"学号超过9个字符,请重新输入"<<endl;
cin>>snoin;
}
p[biaoji]=new CampusAutos(snoin);
status[biaoji]=true;
cout<<"该生已进入校园"<<endl;
}
}
case 2:
{
string pout;
cout<<"输出要出学校的学号"<<endl;
cin>>pout;
for(int out=0;out<5;out++)
{
if(status[out]==true&&pout.compare(p[out]->Getsnotag()))
continue;
else if(status[out]==false)
continue;
else
break;
}
if(out==5)
cout<<"无此学生"<<endl;
else
{
cout<<"学号为"<<p[out]->Getsnotag()<<"该生已出校"<<endl;
delete p[out];
status[out]=false;
}
break;
}
}
}
}
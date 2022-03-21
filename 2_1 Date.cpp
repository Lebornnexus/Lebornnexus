#include <iostream>
#include <string>
using namespace std;
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
class Date{
	public:
		Date(int y,int m,int d)
		{year=y;month=m;day=d;
		}
		Date()
		{cout<<"请输入年月日:";
		 cin>>year>>month>>day;
		}
		void show()
		{cout<<year<<"年"<<month<<"月"<<day<<"日";
		}
		int getyear(){return year;} 
		int isleap();
		int days();
		void addoneday();
		void minusoneday();
		void addndays();
		void weekday();
		friend int difference(Date &d1,Date &d2);
	private:
		int year,month,day;
};
int Date::isleap()
{
	return (year%4==0&&year%100!=0||year%400==0);
}
int Date::days()
{
	int n=0,i;
	for(i=1;i<month;i++)
	   n=n+a[i];
	n=n+day;
	if (month>2&&isleap()) n++;
	return n;
}
void Date::addoneday()
{
	day++;
	if(month!=2&&day>a[month]||month==2&&day>a[2]+isleap())
	    month++,day=1;
	if(month>12) year++,month=1,day=1;
}
void Date::minusoneday()
{
	day--;
	if(day<1)
	{
		month--;
		if(month==2) day=a[month]+isleap();
		else if(month<1)
		{  year--,month=12,day=a[month];
		   if(year<0) {cout<<"超出范围"<<endl;exit(0);}
		}
		else day=a[month];	    
	}
}
void Date::addndays()
{
	int n,i;
	cout<<"请输入要增加的天数:";
	cin>>n;
	if (n>=0)
	    for(i=1;i<=n;i++)
	        addoneday();
	else
	    for(i=1;i<=-n;i++)
	        minusoneday();
	cout<<"则新日期为:"<<endl;
	show();
	cout<<endl;
}
void Date::weekday()
{
	int m;
	string s; 
	m=(year-1+(year-1)/4-(year-1)/100+(year-1)/400+days())%7;
	show();
	switch(m)
	{
		case 0:s="日";break; 
		case 1:s="一";break; 
		case 2:s="二";break; 
		case 3:s="三";break; 
		case 4:s="四";break; 
		case 5:s="五";break; 
		case 6:s="六";break; 
	}
	cout<<"是星期"<<s<<endl; 
}
int difference(Date &d1,Date &d2)
{
	int n=0,i,flag=1;
	if(d1.year<d2.year||d1.year==d2.year&&d1.month<d2.month||d1.year==d2.year&&d1.month==d2.month&&d1.day<d2.day)
	{
		Date t(d1);
		d1=d2;d2=t;flag=-1;
	}
	if(d1.year>d2.year)
	{   n=365+d2.isleap()-d2.days()+d1.days()+(d1.year-d2.year-1)*365;
		for(i=d2.year+1;i<d1.year;i++)
		    n=n+(i%4==0&&i%100!=0||i%400==0);	  
	}
	else if(d1.year==d2.year&&d1.month>d2.month||d1.year==d2.year&&d1.month==d2.month&&d1.day>=d2.day)
		n=d1.days()-d2.days();
	return n*flag;
}
int main()
{
    Date d;
    d.show(); 
    cout<<"是该年的第"<<d.days()<<"天"<<endl;
    d.weekday();
	if (d.isleap())
       cout<<d.getyear()<<"是闰年"<<endl;
    else 
       cout<<d.getyear()<<"不是闰年"<<endl;
    d.addndays();
    cout<<endl<<"请输入一个新的日期:"<<endl;
    Date c;
    cout<<"这两个日期相差"<<difference(c,d)<<"天"<<endl;
    return 0;
}

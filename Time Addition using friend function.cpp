#include<iostream>
using namespace std;
class time{
	int hr,min,sec,day;
	public:
		time()
		{hr=0;
		sec=0;
		min=0;
		day=0;
		}
		void get()
		{
			cout<<"Enter hours:";
			cin>>hr;
			cout<<"Enter min:";
			cin>>min;
			cout<<"Enter sec:";
			cin>>sec;
		}
	friend time operator +(time,time);
		
		void display()
		{cout<<hr<<":"<<min<<":"<<sec<<","<<day<<endl;
		}
	
};
time operator +(time t,time g)
		{time s;
		s.sec=g.sec+t.sec;
		s.min=g.min+t.min;
		s.hr=g.hr+t.hr;
		s.min+=s.sec/60;
		s.sec=s.sec%60;
		s.hr+=s.min/60;
		s.min=s.min%60;
		s.day+=s.hr/24;
		s.hr=s.hr%24;
		return s;
		}
		
		
int main()
{time t1,t2,t3;
cout<<"                                      ////SOME OF TWO TIMES////"<<endl;
cout<<"Enter first time:"<<endl;
t1.get();
cout<<"Enter second time"<<endl;
t2.get();
t3=t1+t2;
cout<<"The sum of two time is:"<<endl;
t3.display();
return 0;
	
}

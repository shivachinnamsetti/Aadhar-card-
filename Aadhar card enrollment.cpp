#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class adhaar
{
	public:
		static int n;
		string name,add,dob,gen,email,phn,adno;
		char p,fp;
		void getdata()
		{
			cout<<"\nname";
			cin>>name;
			cout<<"\naddress";
			cin>>add;
			cout<<"\ndate of birth-";
			cin>>dob;
			cout<<"\ngender-";
			cin>>gen;
			cout<<"\nenter y if photo is taken and n if pending";
			cin>>p;
			cout<<"\nenter y if finger print is taken and n if pending";
			cin>>fp;
			cout<<"\nenter emailid";
			cin>>email;
			cout<<"\nenter phn no";
			cin>>phn;
			
			
		}
		void generate()
		{
			++n;
			convert();
			ofstream Ad("Acard",ios::app);
			Ad<<name<<" "<<adno<<"\n";
			cout<<"\nyour aadhar card number is-"<<adno;
			cout<<"\nit has been emailed to ur id"<<email;
		cout<<"\nyou  will receive your aadhar card in 15 days,it will be posted to the address"<<add;
		Ad.close();
	}
	void convert()
	{
		int y,x=1000+n;
		adno="201605220000";
		for(y=11;y>=8;y--)
		{
			if(x%10==0)
			adno[y]='0';
			if(x%10==1)
			adno[y]='1';
			if(x%10==2)
			adno[y]='2';
			if(x%10==3)
			adno[y]='3';
			if(x%10==4)
			adno[y]='4';
			if(x%10==5)
			adno[y]='5';
			if(x%10==6)
			adno[y]='6';
			if(x%10==7)
			adno[y]='7';
			if(x%10==8)
			adno[y]='8';
			if(x%10==9)
			adno[y]='9';
			x=x/10;
					
		}
	}
		}ob[500];
int adhaar::n;
main()
{
	int x,y;
	for(x=0;x<500;x++)
	{
		cout<<"\nenter the details for your adhaar card";
		ob[x].getdata();
		if(ob[x].fp=='n'||ob[x].p=='n')
		{
	cout<<"\nTo complete the registration get the fingerprint scanner and photo click and resubmit the form";
	x--;
	cout<<"\nEnter 0 if this was the last entry\n";
	cin>>y;
	if(y==0)
		break;
}
ob[x].generate();
cout<<"\nEnter 0 if this was the last entry";
cin>>y;
if(y==0)
break;
}
cout<<++x<<"registration(s) were done";


}









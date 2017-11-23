#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<sstream>
#include<string.h>
using namespace std;
string int2str(int);

int main()
{
int i,EC,DS,CS,CN,OS,AVG;
string First_name[10]={"jhon","anne","roger","rafay","andy","nickole","jacob","sebestian","gustav","vlad"};
string Last_name[10]={"waraich","khokhar","gondal","rizvi","khan","mirza","raja","mughal","chaudry","pervaiz"};
int choice,roll,choice_2;
char *numb;
string first,last,section;
fstream myfile("student.txt");
if(myfile.is_open())
{
	

}
else
{
	myfile.open("student.txt",ios::in | ios::app | ios::out );
	if(myfile.is_open())
	{
	cout<<"file created"<<endl;
	
	for(i=100;i<120;i++)
	{
		myfile<<i<<endl;//roll no 
		myfile<<"RED"<<endl;//class
		myfile<<First_name[rand()%10]<<endl;//First name
		myfile<<Last_name[rand()%10]<<endl;//last name
		EC=rand()%100;//ecnomics marks
		
		myfile<<int2str(EC)<<endl;
		DS=rand()%100;//data structure marks
				
		myfile<<int2str(DS)<<endl;
		CN=rand()%100;//computer networks marks
				
		myfile<<int2str(CN)<<endl;		
		OS=rand()%100;//operating system marks
				
		myfile<<int2str(OS)<<endl;
		CS=rand()%100;//comunication skills marks
				
		myfile<<int2str(CS)<<endl;
		AVG=(EC+DS+CN+OS+CS)/5;//Average marks;
				
		myfile<<int2str(AVG)<<endl;
	}
	for(i=120;i<135;i++)
	{
		myfile<<i<<endl;//roll no 
		myfile<<"BLUE"<<endl;//class
		myfile<<First_name[rand()%10]<<endl;//First name
		myfile<<Last_name[rand()%10]<<endl;//last name
		EC=rand()%100;//ecnomics marks
		
		myfile<<int2str(EC)<<endl;
		DS=rand()%100;//data structure marks
				
		myfile<<int2str(DS)<<endl;
		CN=rand()%100;//computer networks marks
				
		myfile<<int2str(CN)<<endl;		
		OS=rand()%100;//operating system marks
				
		myfile<<int2str(OS)<<endl;
		CS=rand()%100;//comunication skills marks
				
		myfile<<int2str(CS)<<endl;
		AVG=(EC+DS+CN+OS+CS)/5;//Average marks;
				
		myfile<<int2str(AVG)<<endl;
	}
	for(i=135;i<150;i++)
	{
		myfile<<i<<endl;//roll no 
		myfile<<"GREEN"<<endl;//class
		myfile<<First_name[rand()%10]<<endl;//First name
		myfile<<Last_name[rand()%10]<<endl;//last name
		EC=rand()%100;//ecnomics marks
		
		myfile<<int2str(EC)<<endl;
		DS=rand()%100;//data structure marks
				
		myfile<<int2str(DS)<<endl;
		CN=rand()%100;//computer networks marks
				
		myfile<<int2str(CN)<<endl;		
		OS=rand()%100;//operating system marks
				
		myfile<<int2str(OS)<<endl;
		CS=rand()%100;//comunication skills marks
				
		myfile<<int2str(CS)<<endl;
		AVG=(EC+DS+CN+OS+CS)/5;//Average marks;
				
		myfile<<int2str(AVG)<<endl;
	}
	}
	else
	{cout<<"file not created"<<endl;
	}

}
myfile.close();
string temp;
while(1)
{	
	cout<<"Enter a choice"<<endl;
	cout<<"1.View information of student"<<endl;
	cout<<"2.Update information of student"<<endl;
	cout<<"3.View result "<<endl;
	cout<<"4.Edit result"<<endl;
	cout<<"5.Exit"<<endl;
	cin>>choice;
	if(choice==1)
	{
		cout<<"Enter the roll number of student"<<endl;
		cin>>roll;
		if(roll>=100 && roll<150)
		{
		myfile.open("student.txt",ios::in );
		while(getline(myfile,temp))
		{
			if(temp==int2str(roll))
			{
				cout<<"Roll no. "<<temp<<endl;
				getline(myfile,temp);
				cout<<"CLASS : "<<temp<<endl;
				getline(myfile,temp);
				cout<<"First Name : "<<temp<<endl;
				getline(myfile,temp);	
				cout<<"Last Name : "<<temp<<endl;
				break;
			}	
		}//while end
		myfile.close();
		}//if end
		else
		{cout<<"Invalid roll no."<<endl;}	
	}//if1 end
	if(choice==2)
	{	
		cout<<"enter roll number"<<endl;
		cin>>roll;
		
		if(roll>=100 && roll<150)
		{	
			cout<<"Enter your Choice "<<endl;
			cout<<"1.Class"<<endl<<"2 .First name"<<endl<<"3 .Last Name"<<endl;
			cin>>choice_2;
			
			myfile.open("student.txt",ios::in | ios::out );
			while(getline(myfile,temp))
			{	
				if(temp==int2str(roll))
				{
					if(choice_2==1)
					{cout<<"Enter new class "<<endl;
						section="\0";
					 cin>>section;	
					myfile<<section;
						
					}
					if(choice_2==2)
					{cout<<"Enter new First name  "<<endl;
						section="\0";
					 cin>>section;	
					getline(myfile,temp);
					myfile<<section;
						
					}
					if(choice_2==3)
					{cout<<"Enter new last name "<<endl;
						section="\0";
					 cin>>section;	
					getline(myfile,temp);
					getline(myfile,temp);
					myfile<<section;
						
					}
				}
				
			}
			myfile.close();
		}		
		else
		{cout<<"Invlaid roll number"<<endl;}
		
	}//if2 end
	if(choice==3)
	{	system("clear");
		cout<<"Enter the roll number of student"<<endl;
		
		cin>>roll;
		if(roll>=100 && roll<150)
		{
		myfile.open("student.txt",ios::in | ios::out );
		while(getline(myfile,temp))
		{
			if(temp==int2str(roll))
			{
				cout<<"Roll no. "<<temp<<endl;
				getline(myfile,temp);
				cout<<"CLASS : "<<temp<<endl;
				getline(myfile,temp);
				cout<<"First Name : "<<temp<<endl;
				getline(myfile,temp);	
				cout<<"Last Name : "<<temp<<endl;
				getline(myfile,temp);	
				numb=&temp[0u];
				cout<<"Ecnomics Marks : "<<atoi(numb)<<endl;
				getline(myfile,temp);	
				cout<<"Data Structure Marks : "<<temp<<endl;
				getline(myfile,temp);	
				cout<<"Computer Networks Marks : "<<temp<<endl;				
				getline(myfile,temp);
				cout<<"Operating system Marks : "<<temp<<endl;
				getline(myfile,temp);	
				cout<<"Communication Skills : "<<temp<<endl;
				getline(myfile,temp);	
				cout<<"Average Marks : "<<temp<<endl;
				
				break;
			}	
		}//while end
		myfile.close();
		}//if end
		else
		{cout<<"Invalid roll no."<<endl;}
	}//if3 end
	if(choice==4)
	{
	system("clear");
	cout<<"Enter the roll number"<<endl;
	cin>>roll;
	if(roll>99 && roll<150)
	{
		cout<<"Enter your Choice "<<endl;
			cout<<"1 .Ecnomics "<<endl<<"2 .Data Structure"<<endl<<"3 .Computer Networks"<<endl;
			cout<<"4 .Operating System "<<endl<<"5 .Communication Skills"<<endl;
			cin>>choice_2;
			
			myfile.open("student.txt",ios::in | ios::out );
			while(getline(myfile,temp))
			{	
				if(temp==int2str(roll))
				{	
					getline(myfile,temp);
					getline(myfile,temp);
					getline(myfile,temp);

					if(choice_2==1)
					{cout<<"Enter new Ecnomics marks "<<endl;
						
					 cin>>EC;	
					myfile<<int2str(EC);
					getline(myfile,temp);
					getline(myfile,temp);
					numb=&temp[0u];
					DS=atoi(numb);
					getline(myfile,temp);
					numb=&temp[0u];
					CN=atoi(numb);
					getline(myfile,temp);
					numb=&temp[0u];
					OS=atoi(numb);
					getline(myfile,temp);
					numb=&temp[0u];
					CS=atoi(numb);
					AVG=(EC+DS+CN+OS+CS)/5;
					cout<<AVG<<endl;
					myfile<<int2str(AVG);
					
						
					}
					if(choice_2==2)
					{cout<<"Enter new Data Structure marks  "<<endl;
						
					  cin>>DS;	
					
					getline(myfile,temp);
					numb=&temp[0u];
					EC=atoi(numb);

					myfile<<int2str(DS);
					getline(myfile,temp);
					getline(myfile,temp);
					numb=&temp[0u];
					CN=atoi(numb);
					getline(myfile,temp);
					numb=&temp[0u];
					OS=atoi(numb);
					getline(myfile,temp);
					numb=&temp[0u];
					CS=atoi(numb);
					AVG=(EC+DS+CN+OS+CS)/5;
					myfile<<int2str(AVG);
					cout<<AVG<<endl;	
					}
					if(choice_2==3)
					{cout<<"Enter new Computer Networks marks "<<endl;
					cin>>CN;	
					getline(myfile,temp);
					numb=&temp[0u];
					EC=atoi(numb);
					getline(myfile,temp);
					numb=&temp[0u];
					DS=atoi(numb);
					myfile<<int2str(CN);
					getline(myfile,temp);
					getline(myfile,temp);
					numb=&temp[0u];
					OS=atoi(numb);
					getline(myfile,temp);
					numb=&temp[0u];
					CS=atoi(numb);
					AVG=(EC+DS+CN+OS+CS)/5;
					myfile<<int2str(AVG);
					cout<<AVG<<endl;	
					}
					if(choice_2==4)
					{cout<<"Enter new Operating System marks "<<endl;
					cin>>OS;	
					getline(myfile,temp);
					numb=&temp[0u];
					EC=atoi(numb);
					getline(myfile,temp);
					numb=&temp[0u];
					DS=atoi(numb);
					getline(myfile,temp);
					numb=&temp[0u];
					CN=atoi(numb);
					myfile<<int2str(OS);
					getline(myfile,temp);
					getline(myfile,temp);
					numb=&temp[0u];
					CS=atoi(numb);
					AVG=(EC+DS+CN+OS+CS)/5;
					myfile<<int2str(AVG);
						
					}
					if(choice_2==5)
					{cout<<"Enter new Communication Skills marks "<<endl;
					cin>>CS;	
					getline(myfile,temp);
					numb=&temp[0u];
					EC=atoi(numb);
					getline(myfile,temp);
					numb=&temp[0u];
					DS=atoi(numb);
					getline(myfile,temp);
					numb=&temp[0u];
					CN=atoi(numb);
					
					getline(myfile,temp);
					numb=&temp[0u];
					OS=atoi(numb);
					myfile<<int2str(CS);
					getline(myfile,temp);
					AVG=(EC+DS+CN+OS+CS)/5;
					myfile<<int2str(AVG);
					cout<<AVG<<endl;	
					}
					
				}
				
			}
			myfile.close();
		
	}
	else
	{
	}
	}
	if(choice==5)
	{break;}
}//while end
}
//main end



string int2str(int a)
{
ostringstream ss;
ss<<a;
return ss.str();
}

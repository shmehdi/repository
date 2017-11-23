#include<iostream>
using namespace std;
struct day_structure{
int total_days;
int *day;

};

struct month_structure{
int *month;
day_structure *months_day;
};

struct year_structure{
int *year;
month_structure *year_months;
};

int main()
{
int days_per_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
string day_name[7]={"SU","MO","TU","WE","TH","FR","SA"};
string month_name[12]={"JANUARY","FEBURARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER"};
int i,j,k,choice_1,choice_2;
year_structure years;
years.year=new int[2014-2005];
years.year_months=new month_structure[2014-2005];
for(i=2005 ;i<=2014;i++)
{
years.year[i-2005]=i;
years.year_months[i-2005].month=new int[12];
years.year_months[i-2005].months_day=new day_structure[12];
for(j=0;j<12;j++)
{
years.year_months[i-2005].month[j]=j+1;
if(j==1 && i%4==0){
years.year_months[i-2005].months_day[j].total_days=days_per_month[j]+1;
years.year_months[i-2005].months_day[j].day=new int[days_per_month[j]+1];

}
else
{
years.year_months[i-2005].months_day[j].total_days=days_per_month[j];
years.year_months[i-2005].months_day[j].day=new int[days_per_month[j]];

}
for(k=0;k<(years.year_months[i-2005].months_day[j].total_days);k++)
{
if(k>0)
{years.year_months[i-2005].months_day[j].day[k]=(years.year_months[i-2005].months_day[j].day[k-1]+1)%7;}

if(k==0 && i==2005 && j==0)
{years.year_months[i-2005].months_day[j].day[k]=6;}

if(k==0 && j==0 && i>2005)
{years.year_months[i-2005].months_day[j].day[k]=(years.year_months[i-2005-1].months_day[11].day[30]+1)%7;}

if(k==0 && j>0)
{years.year_months[i-2005].months_day[j].day[k]=(years.year_months[i-2005].months_day[j-1].day[years.year_months[i-2005].months_day[j-1].total_days-1]+1)%7;}


//
}

//
}
//
}




cout<<"Enter the year between 2005 - 2014"<<endl;
cin>>choice_1;
cout<<"Enter the month "<<endl;
cout<<"1 .january"<<endl;
cout<<"2 .Feburary"<<endl;
cout<<"3 .March"<<endl;
cout<<"4 .April"<<endl;
cout<<"5 .May"<<endl;
cout<<"6 .June"<<endl;
cout<<"7 .July"<<endl;
cout<<"8 .August"<<endl;
cout<<"9 .September"<<endl;
cout<<"10 .October"<<endl;
cout<<"11 .November"<<endl;
cout<<"12 .December"<<endl;
cin>>choice_2;
cout<<"   "<<choice_1<<"  "<<month_name[choice_2-1]<<endl;
for (i=0;i<7;i++)
{cout<<day_name[i]<<" ";}
cout<<endl;
k=0;
for(i=0;k<years.year_months[choice_1-2005].months_day[choice_2-1].total_days;i++)
{
i=i%7;
if(years.year_months[choice_1-2005].months_day[choice_2-1].day[k]==i)
{
cout<<(k+1)/10<<(k+1)%10<<" ";
k++;
}
else
{
cout<<"   ";
}

if(i==6)
{cout<<endl;}
//cout<<years.year_months[choice_1-2005].months_day[choice_2-1].day[k]<<" ="<<k<<endl;
//k++;
}
cout<<endl;















}

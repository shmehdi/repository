#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;


void circle();
void rectangle();
void square();
void triangle(void );



int main()
{
int x;
while(1)
{

cout<<"Enter desired geometrical Figure"<<endl<<"1 .Circle"<<endl<<"2 .Rectangle"<<endl;
cout<<"3 .Square"<<endl<<"4 .Triangle"<<endl<<"5 .Exit"<<endl;
cin>>x;
system("clear");
if(x<1 || x>5)
{ 
cout<<"enter valid choice"<<endl;
continue;
}

if(x==1)
{circle();}

if(x==2)
{rectangle();}

if(x==3)
{square();}

if(x==4)
{triangle();}
if(x==5)
{break;}
}
return 0;
}
void circle()
{
system("clear");
float radius,calc[3];
string choices[3]={"Circumference","Diameter","Area"};
int choice;
cout<<"Enter the radius of circle"<<endl;
cin>>radius;
calc[0]=2*3.14*radius;
calc[1]=2*radius;
calc[2]=3.14*radius*radius;
cout<<"Enter choice for calculation"<<endl<<"1 .Circumference"<<endl<<"2 .Diameter"<<endl;
cout<<"3 .Area"<<endl;
cin>>choice;
cout<<choices[choice-1]<<" of the circle is "<<calc[choice-1]<<endl<<endl;


}
void rectangle()
{
system("clear");
float length,width,calc[2];
string choices[2]={"Area","Perimeter"};
int choice;
cout<<"Enter the length of rectangl"<<endl;
cin>>length;
cout<<"Enter the width of rectangl"<<endl;
cin>>width;
calc[0]=length*width;
calc[1]=2*(length+width);

cout<<"Enter choice for calculation"<<endl<<"1 .Area"<<endl<<"2 .Perimeter"<<endl;

cin>>choice;
system("clear");
cout<<choices[choice-1]<<" of the Rectangle is "<<calc[choice-1]<<endl<<endl;

}
void square()
{
system("clear");
float length,calc[2];
string choices[2]={"Area","Perimeter"};
int choice;
cout<<"Enter the length of Square"<<endl;
cin>>length;

calc[0]=length*length;
calc[1]=4*length;

cout<<"Enter choice for calculation"<<endl<<"1 .Area"<<endl<<"2 .Perimeter"<<endl;

cin>>choice;
system("clear");
cout<<choices[choice-1]<<" of the Square is "<<calc[choice-1]<<endl<<endl;

}
void triangle()
{
system("clear");
float side_a,side_b,side_c;
float angle_a,angle_b,angle_c,p,area;
int choice_1,choice_2;

cout<<"Enter the required execution mode"<<endl<<"1 .Enquirey Mode"<<endl<<"2 .Length Mode"<<endl;
cout<<"3 .Angle Mode"<<endl<<"4 .Area Mode"<<endl;
cin>>choice_1;
//Enquirey Mode
if(choice_1==1)
{
cout<<"enter length of side a of triangle"<<endl;
cin>>side_a;
cout<<"enter length of side b of triangle"<<endl;
cin>>side_b;
cout<<"enter length of side c of triangle"<<endl;
cin>>side_c;
system("clear");
if((side_a*side_a)==(side_b*side_b)+(side_c*side_c))
{cout<<"triangle is a right angle triangle"<<endl;}

if((side_a*side_a)>(side_b*side_b)+(side_c*side_c))
{cout<<"triangle is a obtuse angle triangle"<<endl;}

if((side_a*side_a)<(side_b*side_b)+(side_c*side_c))
{cout<<"triangle is a acute angle triangle"<<endl;}
}
//Enquirey mode end
//Length Mode
if(choice_1==2)
{

}
//legth mode end
//Angle Mode
if(choice_1==3)
{}
//Angle mode end 
//Area mode
if(choice_1==4)
{
cout<<"enter length of side a of triangle"<<endl;
cin>>side_a;
cout<<"enter length of side b of triangle"<<endl;
cin>>side_b;
cout<<"enter length of side c of triangle"<<endl;
cin>>side_c;
system("clear");
p=(side_a+side_b+side_c)/2;
cout<<p<<endl;
area=sqrt(p*(p-side_a)*(p-side_b)*(p-side_c));
cout<<"Area of the triangle is "<<area<<endl<<endl;
}
//Area mode end
}


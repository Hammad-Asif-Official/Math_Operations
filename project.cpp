#include<iostream>
#include<math.h>
using namespace std;

void squre()

{ 
    int a;
    cout<<"entera num for squre"<<endl;
    cin>>a;
    cout<<"****squre="<<a*a<<endl;
	
}

void sum()

{ 
    int a,b;
    cout<<"enter a first num"<<endl;
    cin>>a;
    cout<<"entera second num"<<endl;
    cin>>b;
    cout<<"********sum="<<a+b<<endl;
}

void sub()

{ 
    int a;
    int b;
    cout<<"enter a first num"<<endl;
    cin>>a;
    cout<<"entera second num"<<endl;
    cin>>b;
    cout<<"sub="<<a-b<<endl;
}

void mul()

{    
    int a;
    int b;
    cout<<"enter a first num"<<endl;
    cin>>a;
    cout<<"entera second num"<<endl;
    cin>>b;
    cout<<"mul="<<a*b<<endl;

}
  
void div()

{
int a;
int b;
    cout<<"enter a first num"<<endl;
    cin>>a;
    cout<<"entera second num"<<endl;
    cin>>b;
    cout<<"div="<<a/b<<endl;
}

void grater()

{
int a;
int b;
    cout<<"enter a first num"<<endl;
    cin>>a;
    cout<<"entera second num"<<endl;
    cin>>b;
    
if(a>b)
    
    cout<<"first num is grater"<<endl;
    
else
	 
    cout<<"second num is grater"<<endl;
}

void lesser()

{ 
int a;
int b;
    cout<<"enter a first num"<<endl;
    cin>>a;
    cout<<"entera second num"<<endl;
    cin>>b;
    
if(a<b)

    cout<<"first num is less "<<endl; 
    
else 
    
    cout<<"second num is less"<<endl;
}


void even()


{ 
int a; 
int remainder;
    cout<<"enter a even or odd num"<<endl;
    cin>>a;

    remainder=a%2;
    
if(remainder==0)

    cout<<"this num is even"<<endl;
    
else

    cout<<"this num is odd"<<endl;
}


void odd()


{
int a; 
int remainder;

    cout<<"enter a even or odd num"<<endl;
    cin>>a;

    remainder=a%2;
    
if(remainder==0)

    cout<<"this num is even"<<endl;

else
    cout<<"this num is odd"<<endl;
}


void ten()


{ 
int a; 
int b=10;

    cout<<"enter a num with multiply by 10"<<endl;
    cin>>a;

    cout<<"before multiply progress="<<a*10<<endl;
    
}




int main()





{
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"////////////////////////////////////"<<endl;
	
	cout<<"/NAME ======HAMMAD ASIF************/"<<endl;
	
	cout<<"/CLASS======BS COMPUTER SCIENCE****/"<<endl;
	
	cout<<"/COLLEGE ROLL NUM======582*********/"<<endl;
	
	cout<<"/UNIVERSTY ROLL NUMBER======034928*/"<<endl;
	
	cout<<"/SESSION======2019-2020************/"<<endl;
	
	cout<<"/SECTION======G2*******************/"<<endl;
	
	cout<<"////////////////////////////////////"<<endl;
	cout<<""<<endl; 
	cout<<""<<endl;
	
	int a;
	int x;
	int y;
	char b;

	do{
	
	cout<<"press 1 for squre***************"<<endl;
	
	cout<<"press 2 for arithmatic opration*"<<endl;
	
	cout<<"press 3 for disply grater*******"<<endl;
	
	cout<<"press 4 for display less********"<<endl;
	
	cout<<"press 5 for even converstion****"<<endl;
	
	cout<<"press 6 for odd converstion*****"<<endl;
	
	cout<<"press 7 for multiply with 10****"<<endl;
	
	cin>>a;
	
if(a==1)
	squre();
	
else if(a==3)
	grater();
	
else if(a==4)
	lesser();
	
else if(a==5)
	even();
	
else if(a==6)
	odd();
	
else if(a==7)
	ten();
	
	
cout<<"press 8 for run again"<<endl;
cin>>y;
	

switch(a)
 
		
{case 2:
		
		
    cout<<"press 1 for sum************************************************"<<endl;
    
	cout<<"press 2 for sub************************************************"<<endl;
	
	cout<<"press 3 for mul************************************************"<<endl;
	
	cout<<"press 4 for div************************************************"<<endl;
	
	cin>>a;
			
		
		
if(a==1)
	sum();
	
else if(a==2)
	sub();
	
else if(a==3)
	mul();
	
else if(a==4)
	div();	
}


}while(y==8);



return 0;
	
}

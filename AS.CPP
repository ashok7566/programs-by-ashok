#include<iostream.h>

#include<fstream.h>

#include<conio.h>

#include<stdlib.h>

#include<dos.h>

#include<graphics.h>

#include<stdio.h>

#include<process.h>

#include<string.h>

void display();

class bank

{
 char a[50];  //a=account holder name       

 char b[50];         //b=pan number

 char c[50];         //c=occupation

 char e[50];         //e=father's/husband name

 char f[50];         //f=gender

 char g[50];         //g=date of birth

 char h[50];         //h=nationality

 char j[50];         //j=aadhar no.

 char k[50];         //k=address

 char l[50];         //l=city

 char m[50];         //m=state

 char n[50];         //n=mobile no.

 char o[50];         //o=pin code

 long double as;     //as=account number

 long double bs;     //bs=money

 long double cs;     //cs=deposit

 public:
	void getaccountno();

	void deposit();

	void input();

	void output();

	int getaccount()


	{
	 return bs;

	}

  };

  void bank::input()

  {
     cout<<"\n\n\n\n\nAccount Holder:";

     gets(a);

     cout<<"pan";

     gets(b);

     cout<<"Occupation Menu:\n";

     cout<<"1.Private Sector \t2.Public Sector \t3.Agriculturist\n";

     cout<<"4.Getired \t5.GovernmentSer. \t6.Housewife\n";

     cout<<"7.Bussiness \t8.Student \t9.Professional\n";

     cout<<"\t\t10.Other(Please Specify)\n";

     cout<<"Occupation Type:";

     gets(c);

     cout<<"Father Name:";

     gets(e);

     cout<<"Gender:";

     cout<<"\tMale/Female:";

     gets(f);

     cout<<"Date Of Birth:";

     gets(g);

     cout<<"Nationality:";

     cout<<"\tIndian/Other(Please Specify,___________):";

     gets(h);

     cout<<"Adhar Number:";

     gets(j);

     cout<<"Address:";

     gets(k);

     cout<<"Town:";

     gets(l);

     cout<<"State:";

     gets(m);

     cout<<"Mobile no.:";

     gets(n);

     cout<<"Pin Code:";

     gets(o);

     getaccountno();

  }

  void bank::getaccountno()

  {
   px:

   clrscr();

   int gdriver=DETECT,gmode;

   initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");

   setcolor(4);

   setcolor(0);

   settextstyle(1,0,6);

   outtextxy(100,20,"ALLAHABAD BANK");

   cout<<"\n\n\n\n\n\n\nEnter The Amount:";

   cin>>bs;

   if(bs>=500)

   { clrscr();

     long double cp;

     cout<<"Your Number Is Generating......";

     delay(500);

     do
     { clrscr();

       cout<<"\n\n\n\t\t\tPress Any Key";

       cout<<"\n\n\n\n\n\t\tgenerating.."<<(cp=(random(1000000))+745363);

       delay(20);

       clrscr();

     }
      while(!kbhit());

      clrscr();

      initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");

      setbkcolor(0);

      cout<<cp;

      cout<<"\nEnter The Number That You Got Above:";

      cin>>as;

      cout<<"\n\n\n\n\t\t\t Please Note The Number";

      cout<<"\n\n\t\t\t\tIts Your";

      cout<<"\n\n\n\t\t\t Account Number";

   }

   else

   {
     delay(1000);

     cout<<"The Minimum Amount(i.e RS 500)\n";

     cout<<"You Have Deposit:";

     cout<<bs;

     goto px;
   }

  }

  void bank::output()

  {
    cout<<"\n\n\n\nAccount Holder:";

    cout<<a;

    cout<<"Pan:";

    cout<<b;

    cout<<"Occupation:";

    cout<<c;

    cout<<"Father Name:";

    cout<<e;

    cout<<"Gender:";

    cout<<f;

    cout<<"Date Of Birth:";

    cout<<g;

    cout<<"Nationality:";

    cout<<h;

    cout<<"Aadhar Nunber:";

    cout<<j;

    cout<<"Address:";

    cout<<k;

    cout<<"Town:";

    cout<<l;

    cout<<"State:";

    cout<<m;

    cout<<"mobile Number:";

    cout<<n;

    cout<<"Pin Code:";

    cout<<o;

    cout<<"Account Number:";

    cout<<as;

    cout<<"Balance:";

    cout<<bs;

  }

  void main()

  {
    clrscr();

    int gdriver=DETECT,gmode;

    initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");

    setbkcolor(14);                                //14=yellow

    setcolor(4);                                   //4=red

    delay(2000);

    settextstyle(1,0,6);

    outtextxy(200,20,"WELCOME");

    delay(500);

    settextstyle(1,0,6);

    outtextxy(290,100,"TO");

    delay(500);

    settextstyle(1,0,6);

    outtextxy(100,200,"ALLAHABAD BANK");

    delay(2000);

    int ch,pos;

    char a,found='f';

    bank b1;

    fstream fine;

    menu:

    clrscr();

    initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");

    setcolor(4);

    setbkcolor(0);

    settextstyle(1,0,6);

    outtextxy(100,20,"ALLAHABAD BANK");

    cout<<"\n\n\n\n\n\n1.CREAT AN ACCOUNT";

    cout<<"\n2.DISPLAY ACCOUNT HOLDER DETAILS";

    cout<<"\n3.EXITS";

    cout<<"\n\n\n ENTER YOUR CHOICE:";

    cin>>ch;

    switch(ch)

    { case 1:
	     clrscr();

	     initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");

	     setcolor(4);

	     setbkcolor(0);

	     settextstyle(1,0,6);

	     outtextxy(100,20,"ALLAHABAD BANK");

	     fine.open("DOCOMENT.txt",ios::out|ios::app);

	     if(!fine)

	     { cout<<"\n\n\n\n\n\n unable to open.....";

	     }

	     else

	     {
	     b1.input();

	     fine.write((char*)&b1,sizeof(b1));

	     }

	     delay(2000);

	     fine.close();

	     clrscr();

	     initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");

	     setcolor(4);

	     setbkcolor(14);

	     display();

	     delay(5000);

	     goto menu;

	     break;

      case 2:

	     int cl;

	     fine.open("DOCOMENT.txt",ios::in);

	     clrscr();

	     fine.seekg(0);

	     initgraph(&gdriver,&gmode,"c:\\turboc3\\bgi");

	     setcolor(4);

	     setbkcolor(0);

	     settextstyle(1,0,6);

	     outtextxy(100,20,"ALLAHABAD BANK");

	     cout<<"\n\n\n\n\n enter the account number:-";

	     cin>>cl;

	     while(!fine.eof())

	     {
	      fine.read((char*)&b1,sizeof(b1));

	       if(b1.getaccount()==cl)

	       {
		b1.output();

		found='y';

		break;

	       }

	     }
	    if(found=='n')

	    {

	     cout<<"\n\t\t\t record not found"<<"\n";

	     fine.close();

	    }

	   break;

      case 3: exit(0);

      default:

	       cout<<"you have input wrong choice:";

	       goto menu;

    }

    }                             //main() close

     void display()

     {

     settextstyle(1,0,6);

     outtextxy(100,20,"ALLAHABAD BANK");

     settextstyle(1,0,4);

     outtextxy(200,200,"CONGRATULATIONS");

     settextstyle(1,0,1);

     outtextxy(190,300,"YOUR ACCOUNT HAS BEEN OPENED");

     }


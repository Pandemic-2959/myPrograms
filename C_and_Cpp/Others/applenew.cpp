#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<process.h>
#include<stdio.h>
#include<iomanip.h>
void Iphone();
void Iphone4s();
void Iphone5s();
void Iphone6();
void Iphone6plus();
void Iphone6s();
void Iphone6splus();
void bill(char[],float);
void intbank(float);
void PAGE1();
void showroom();
void authentication();
void front();
void view();
fstream fil("Customer.txt",ios::in|ios::out|ios::app);
void front()
{
clrscr();
char username[50],password[50];
view();
cout<<'\n'<<'\n';
cout<<"   HELLO!!! If you are a customer enter * to continue\n\n" ;
cout<<"   OR!! If you are an autenticated user enter username\n\n";
cout<<"   OR!! Enter x to exit\n\n";
cout<<"   Enter your choice:  ";
char Page1[20];strcpy(Page1,"NULL");
reenter:
gets(Page1);
if(strcmp(Page1,"*")==0)
Iphone();
else if(strcmp(Page1,"AGAGHV")==0)
authentication();
else if((strcmp(Page1,"x")==0)||(strcmp(Page1,"X")==0))
exit(0);
else
{
cout<<"   Incorrect INPUT!!!!!\n\n";
cout<<"   Reenter your choice\n";
goto reenter;
}
}
void Iphone()
{
clrscr();
cout<<'\n'<<'\n';
cout<<"+=+=+=+=+=+=+=Welcome to Iphone menu=+=+=+=+=+=+=\n\n";
cout<<"1. Iphone 4s\n";
cout<<"2. Iphone 5s\n";
cout<<"3. Iphone 6\n";
cout<<"4. Iphone 6+\n";
cout<<"5. Iphone 6s\n";
     cout<<"6. Iphone 6s+\n";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Enter..0..to move to previous page\n\n";
cout<<"and ..x.. to exit\n\n";
cout<<"PLEASE!! Enter your choice:\n";
char choice2;
reenter:
cin>>choice2;
switch(choice2)
{
case '0':front();
break;
case '1':Iphone4s();
break;
case '2':Iphone5s();
break;
case '3':Iphone6();
break;
case '4':Iphone6plus();
break;
case '5':Iphone6s();
break;
case '6':Iphone6splus();
break;
case 'x':exit(0);
break;
default:
cout<<"!!...Wrong choice...!!\n";
cout<<"PLEASE!! Reenter your choice to continue:\n";
goto reenter;
}
}
void Iphone4s()
{
clrscr();
char name[20];
float price;
strcpy(name,"Iphone 4s");
price=19000.00;
cout<<"Features of Iphone 4s\n";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Processor         :    Dual core 1.0 Ghz\n";
cout<<"Screen resolution :    326 ppi\n";
cout<<"RAM               :    1 GB \n";
cout<<"Internal memory   :    8 GB\n";
cout<<"Screen size       :    4 inch\n";
cout<<"Price             :    Rs. 19000\n";
cout<<"Camera            :    6 Mp\n";
cout<<'\n'<<'\n';
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<".....Enter.....\n"<<"1. To buy this product\n";
cout<<"Enter..0..to move to previous page ";
cout<<"and ..x.. to exit\n";
char choice3;
cout<<"Enter your choice:\n";
reenter:
cin>>choice3;
if(choice3=='0')
Iphone();
else if(choice3=='1')
{
int stock;
ifstream fin("Iphone4s",ios::in);
fin>>stock;
stock--;
fin.close();
ofstream fout("Iphone4s",ios::out);
fout<<stock;
fout.close();
bill(name,price);
}
else if(choice3=='x')
exit(0);
else
{
cout<<"!!...Wrong choice...!!\n";
cout<<"PLEASE!! Reenter your choice to continue:\n";
goto reenter;
}
}
void Iphone5s()
{
clrscr();
char name[20];
float price;
strcpy(name,"Iphone 5s");
price=21000.00;
cout<<"Features of Iphone 5s\n ";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Processor         : Dual core 1.3 Ghz\n";
cout<<"Screen resolution : 326 ppi\n";
cout<<"RAM               : 1 GB \n";
cout<<"Internal memory   : 16 GB\n";
cout<<"Screen size       : 4 inch\n";
cout<<"Price             : Rs. 21000\n";
cout<<"Camera            : 8 Mp\n";
cout<<'\n'<<'\n';
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<".....Enter.....\n"<<"1. To buy this product\n";
cout<<"Enter..0..to move to previous page ";
cout<<"and ..x.. to exit\n";
char  choice3;
cout<<"Enter your choice:\n";
reenter:
cin>>choice3;
if(choice3=='0')
Iphone();
else if(choice3=='1')
{
int stock;
ifstream fin("Iphone5s",ios::in);
fin>>stock;
stock--;
fin.close();
ofstream fout("Iphone5s",ios::out);
fout<<stock;
fout.close();
bill(name,price);
}
else if(choice3=='x')
exit(0);
else
{
cout<<"!!...Wrong choice...!!\n";
cout<<"PLEASE!! Reenter your choice to continue:\n";
goto reenter;
}
}
void Iphone6()
{
clrscr();
char name[20];
float price;
strcpy(name,"Iphone 6");
price=44000.00;
cout<<"Features of Iphone 6\n ";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Processor         : Dual core 1.4 Ghz\n";
cout<<"Screen resolution : 326 ppi\n";
cout<<"RAM               : 1 GB \n";
cout<<"Internal memory   : 16 GB\n";
cout<<"Screen size       : 4.7 inch\n";
cout<<"Price             : Rs. 44000\n";
cout<<"Camera            : 8 Mp\n";
cout<<'\n'<<'\n';
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#/n";
cout<<".....Enter.....\n"<<"1. To buy this product\n";
cout<<"Enter..0..to move to previous page ";
cout<<"and ..x.. to exit\n";
char choice3;
cout<<"Enter your choice:\n";
reenter:
cin>>choice3;
if(choice3=='0')
Iphone();
else if(choice3=='1')
{
int stock;
ifstream fin("Iphone6",ios::in);
fin>>stock;
stock--;
fin.close();
ofstream fout("Iphone6",ios::out);
fout<<stock;
fout.close();
bill(name,price);
}
else if(choice3=='x')
exit(0);
else
{
cout<<"!!...Wrong choice...!!\n";
cout<<"PLEASE!! Reenter your choice to continue:\n";
goto reenter;
}
}
void Iphone6plus()
{
clrscr();
char name[20];
float price;
strcpy(name,"Iphone 6+");
price=54000.00;
cout<<"Features of Iphone 6+\n ";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Processor         : Dual core 1.4 Ghz\n";
cout<<"Screen resolution : 401 ppi\n";
cout<<"RAM               : 1 GB \n";
cout<<"Internal memory   : 16 GB\n";
cout<<"Screen size       : 5.5 inch\n";
cout<<"Price             : Rs. 54000\n";
cout<<"Camera            : 8 Mp\n";
cout<<'\n'<<'\n';
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<".....Enter.....\n"<<"1. To buy this product\n";
cout<<"Enter..0..to move to previous page ";
cout<<"and ..x.. to exit\n";
char choice3;
cout<<"Enter your choice:\n";
reenter:
cin>>choice3;
if(choice3=='0')
Iphone();
else if(choice3=='1')
{
int stock;
ifstream fin("Iphone6plus",ios::in);
fin>>stock;
stock--;
fin.close();
ofstream fout("Iphone6plus",ios::out);
fout<<stock;
fout.close();
bill(name,price);
}
else if(choice3=='x')
exit(0);
else
{
cout<<"!!...Wrong choice...!!\n";
cout<<"PLEASE!! Reenter your choice to continue:\n";
goto reenter;
}
}
void Iphone6s()
{
clrscr();
char name[20];
float price;
strcpy(name,"Iphone 6s");
price=64000.00;
cout<<"Features of Iphone 6s\n ";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Processor         : Dual core 1.84 Ghz\n";
cout<<"Screen resolution : 326 ppi\n";
cout<<"RAM               : 2 GB \n";
cout<<"Internal memory   : 32 GB\n";
cout<<"Screen size       : 4.7 inch\n";
cout<<"Price             : Rs. 64000\n";
cout<<"Camera            : 12 Mp\n";
cout<<'\n'<<'\n';
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<".....Enter.....\n"<<"1. To buy this product\n";
cout<<"Enter..0..to move to previous page ";
cout<<"and ..x.. to exit\n";
char choice3;
cout<<"Enter your choice:\n";
reenter:
cin>>choice3;
if(choice3=='0')
Iphone();
else if(choice3=='1')
{
int stock;
ifstream fin("Iphone6s",ios::in);
fin>>stock;
stock--;
fin.close();
ofstream fout("Iphone6s",ios::out);
fout<<stock;
fout.close();
bill(name,price);
}
else if(choice3=='x')
exit(0);
else
{
cout<<"!!...Wrong choice...!!\n";
cout<<"PLEASE!! Reenter your choice to continue:\n";
goto reenter;
}
}
void Iphone6splus()
{
clrscr();
char name[20];
float price;
strcpy(name,"Iphone 6s+");
price=76000.00;
cout<<"Features of Iphone 6s+\n ";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Processor         : Dual core 1.84 Ghz\n";
cout<<"Screen resolution : 401 ppi\n";
cout<<"RAM               : 2 GB \n";
cout<<"Internal memory   : 32 GB\n";
cout<<"Screen size       : 5.5 inch\n";
cout<<"Price             : Rs. 76000\n";
cout<<"Camera            : 12 Mp\n";
cout<<'\n'<<'\n';
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<".....Enter.....\n"<<"1. To buy this product\n";
cout<<"Enter..0..to move to previous page ";
cout<<"and ..x.. to exit\n";
char choice3;
cout<<"Enter your choice:\n";
reenter:
cin>>choice3;
if(choice3=='0')
Iphone();
else if(choice3=='1')
{
int stock;
ifstream fin("Iphone6splus",ios::in);
fin>>stock;
stock--;
fin.close();
ofstream fout("Iphone6splus",ios::out);
fout<<stock;
fout.close();
bill(name,price);
}
else if(choice3=='x')
exit(0);
else
{
cout<<"!!...Wrong choice...!!\n";
cout<<"PLEASE!! Reenter your choice to continue:\n";
goto reenter;
}
}
void bill(char NAME[],float PRICE)
{
clrscr();
cout<<'\n'<<'\n';
cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n";
cout<<"Your bill is:\n\n";
cout<<"Product Name :  ";puts(NAME);
cout<<"\nNet amount :  "<<PRICE;
fil<<"Name of the product purchased by customer: ";
fil<<NAME;
fil<<"\nPrice of the product purchased by customer: ";
fil<<PRICE;
int bank;
cout<<"\nTo buy this product enter 1\n";
cin>>bank;
if(bank==1)
{
intbank(PRICE);
}
cout<<"\nENTER x to move to front page\n";char e;
reenter:
cin>>e;
if(e=='x')
front();
else
{
cout<<"Incorrect Input\n";
cout<<"Please!! reenter your choice:\n";
goto reenter;
}
}
void intbank(float p)
{
clrscr();
char atm[50],pass[50],email[50];
cout<<'\n'<<'\n';
cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n";
cout<<"*********  WELCOME to Internet BanK  **********\n\n";
cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n";
cout<<"Enter your e-mail ID\n";
gets(email);
fil<<"\nEmail-ID of customer\n";
fil<<email;
cout<<"Please enter your ATM number and OTP to purchase\n";
cout<<"ATM No. :  ";gets(atm);
fil<<"\nATM no. of customer:";fil<<atm;
cout<<"OTP     :  ";gets(pass);
fil<<"\nOTP of customer:";fil<<pass;
cout<<"Amount  :  "<<p;
cout<<"\nEnter 1 to pay :  "; int a=0;
cin>>a;
if(a==1)
{
cout<<"\nThankyou for using Internet Bank!!!!\n\n";
cout<<"Reciept will be sent to your entered e-mail id\n\n";
fil<<"\nPurchase Successfull!!!!\n";
}
}
void authentication()
{
clrscr();
char userid[50];
char password[50];
int k=3;
cout<<'\n'<<'\n';
cout<<"HELLO SIR!!! \n";
cout<<"PLEASE  ENTER :\n"; char ch;
reenter:
if(k<3)
clrscr();
cout<<"UserID    :  ";gets(userid);
cout<<"Password  :  ";gets(password);
if(strcmp(userid,"SHIELD 007")==0)
{
if(strcmp(password,"A02A09H15")==0)
{
showroom();
}
else
{
while(k>=0)
{
k--;
if(k==0)
{ clrscr();
cout<<'\n'<<'\n';
cout<<"!! @@ ## $$ %% ^^ && ** !! @@ ## $$ %% ^^ && ** !!\n\n";
cout<<"Your attempts are over your access is terminated\n\n";
cout<<"!! @@ ## $$ %% ^^ && ** !! @@ ## $$ %% ^^ && ** !!\n\n";
for(long i=0;i<=70000000;i++);
cout<<"....Bye Bye!!!!....!";
for(long j=0;j<=50000000;j++);
exit(0);
}
cout<<"Invalid userid or password \n\n";
cout<<"You have only..."<<k<<"...attempts left to access private data\n\n";
cout<<"Enter & to enter userid and password again\n\n";
cout<<"Enter any other key to exit\n\n";
cin>>ch;
if(ch=='&')
goto reenter;
else
exit(0);
}
}
}
else
{
cout<<"Invalid userid or password\n\n";
while(k>=0)
{
k--;
if(k==0)
{
clrscr();
cout<<'\n'<<'\n';
cout<<"!! @@ ## $$ %% ^^ && ** !! @@ ## $$ %% ^^ && ** !!\n\n";
cout<<"Your attempts are over your access is terminated\n\n";
cout<<"!! @@ ## $$ %% ^^ && ** !! @@ ## $$ %% ^^ && ** !!\n\n";
for(long i=0;i<=70000000;i++);
cout<<"....Bye Bye!!!!....";
for(long j=0;j<=50000000;j++);
exit(0);
}
cout<<"You have only..."<<k<<"...attempts left to access private data\n\n";
cout<<"Enter & to enter userid and password again\n\n";
cout<<"Enter any other key to exit\n\n";
cin>>ch;
if(ch=='&')
goto reenter;
else
exit(0);
}
}
}
void showroom()
{
int stock;
clrscr();
cout<<"\nSir...\n";
cout<<"Enter......\n";
cout<<"1. To update stocks\n"<<"2. To see stocks\n";
char ch;
cout<<"Enter your choice:\n";
reenter:
cin>>ch;
if(ch=='1')
{
clrscr();
mno:
cout<<"Which products  stocks you want to update?\n";
int ch1;
cout<<"1 . Iphone4s\n";
cout<<"2 . Iphone5s\n";
cout<<"3 . Iphone6\n";
cout<<"4 . Iphone6plus\n";
cout<<"5 . Iphone6s\n";
cout<<"6 . Iphone6splus\n";
cout<<"0 . To move to front page\n";
xyz:
cout<<"Enter your choice:\n";
cin>>ch1;
switch(ch1)
{
case 1:
cout<<"Enter stocks of Iphone4s:\n";
cin>>stock;
ofstream fout1("Iphone4s",ios::out);
fout1<<stock;
fout1.close();
break;
case 2:
cout<<"Enter stocks of Iphone5s:\n";
cin>>stock;
ofstream fout2("Iphone5s",ios::out);
fout2<<stock;
fout2.close();
break;
case 3:
cout<<"Enter stocks of Iphone6:\n";
cin>>stock;
ofstream fout3("Iphone6",ios::out);
fout3<<stock;
fout3.close();
break;
case 4:
cout<<"Enter stocks of Iphone6+:\n";
cin>>stock;
ofstream fout4("Iphone6plus",ios::out);
fout4<<stock;
fout4.close();
break;
case 5:
cout<<"Enter stocks of Iphone6s:\n";
cin>>stock;
ofstream fout5("Iphone6s",ios::out);
fout5<<stock;
fout5.close();
break;
case 6:
cout<<"Enter stocks of Iphone6splus:\n";
cin>>stock;
ofstream fout6("Iphone6splus",ios::out);
fout6<<stock;
fout6.close();
break;
case 0:
front();
break;
default:
cout<<"!!...Wrong choice...!!\n";
cout<<"PLEASE!! Reenter your choice to continue:\n";
goto xyz;
}
abhi:
cout<<"\nWant to enter more stock enter 1 ??\n";
cout<<"else enter 0 to move to Front page\n";
int a;
cin>>a;
if(a==1)
goto mno;
else if(a==0)
front();
else
{
cout<<"\nWrong Input:\n";
goto abhi;
}
}
else if(ch=='2')
{
clrscr();
mnoa:
cout<<"Which products  stocks you want to see?\n";
int ch1;
cout<<"1 . Iphone4s\n";
cout<<"2 . Iphone5s\n";
cout<<"3 . Iphone6\n";
cout<<"4 . Iphone6plus\n";
cout<<"5 . Iphone6s\n";
cout<<"6 . Iphone6splus\n";
cout<<"0 . To move to front page\n";
xyza:
cout<<"Enter your choice:\n";
cin>>ch1;
switch(ch1)
{
case 1:
cout<<"The stocks of Iphone4s:\n";
ifstream fout1("Iphone4s",ios::out);
fout1>>stock;
cout<<stock;
fout1.close();
break;
case 2:
cout<<"The stocks of Iphone5s:\n";
ifstream fout2("Iphone5s",ios::out);
fout2>>stock;
cout<<stock;
fout2.close();
break;
case 3:
cout<<"The stocks of Iphone6:\n";
ifstream fout3("Iphone6",ios::out);
fout3>>stock;
cout<<stock;
fout3.close();
break;
case 4:
cout<<"The stocks of Iphone6+:\n";
ifstream fout4("Iphone6plus",ios::out);
fout4>>stock;
cout<<stock;
fout4.close();
break;
case 5:
cout<<"The stocks of Iphone6s:\n";
ifstream fout5("Iphone6s",ios::out);
fout5>>stock;
cout<<stock;
fout5.close();
break;
case 6:
cout<<"The stocks of Iphone6splus:\n";
ifstream fout6("Iphone6splus",ios::out);
fout6>>stock;
cout<<stock;
fout6.close();
break;
case 0:
front();
break;
default:
cout<<"!!...Wrong choice...!!\n";
cout<<"PLEASE!! Reenter your choice to continue:\n";
goto xyza;
}
abhi1:
cout<<"\nWant to see more stock enter 1 ??\n";
cout<<"else enter 0 to front page\n";
int a;
cin>>a;
if(a==1)
goto mnoa;
else if(a==0)
front();
else
{
cout<<"\nWrong Input:\n";
goto abhi1;
}
}
}
void view()
{
clrscr();
cout<<'\n'<<'\n'<<'\n';
cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
cout<<'\n'<<'\n';
cout<<"        @        @ @ @ @    @ @ @ @    @          @ @ @ @ @\n";
cout<<"       @ @       @       @  @       @  @          @        \n";
cout<<"      @   @      @       @  @       @  @          @        \n";
cout<<"     @ @ @ @     @ @ @ @    @ @ @ @    @          @ @ @ @  \n";
cout<<"    @       @    @          @          @          @        \n";
cout<<"   @         @   @          @          @          @        \n";
cout<<"  @           @  @          @          @ @ @ @ @  @ @ @ @ @\n";
cout<<'\n'<<'\n';
cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
cout<<'\n'<<'\n';
cout<<"        @@@@@@@@@@ WELCOME To APPLE Menu @@@@@@@@@@\n";
}
void main()
{
clrscr();
front();
getch();
}

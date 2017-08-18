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
void Imac();
void Imacme();
void Imacmini();
void Ipad();
void Ipadpro();
void Ipadair();
void Macbook();
void Macbookpro();
void MacbookUltra();
void MacbookSwift();
void MacbookWave();
void MacbookExtreme();
void Applewatch();
void Applewatchsport();
void Applewatch2();
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
PAGE1();
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
case '0':PAGE1();
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
void Imac()
{
clrscr();
cout<<'\n'<<'\n';
cout<<"+=+=+=+=+=+=+=Welcome to Imac menu=+=+=+=+=+=+=\n";
cout<<"1. Imac me\n";
cout<<"2. Imac mini\n";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Enter..0..to move to previous page ";
cout<<"and ..x.. to exit\n";
cout<<"PLEASE!! Enter your choice:\n";
char choice2;
cout<<"Enter your choice:\n";
reenter:
cin>>choice2;
switch(choice2)
{
case '0':PAGE1();
break;
case '1':Imacme();
break;
case '2': Imacmini();
break;
case 'x': exit(0);
break;
default:cout<<"Wrong choice!!!\n";
cout<<"Reenter to continue\n";
goto reenter;
}
}
void Imacme()
{
clrscr();
char name[20];float price;
strcpy(name,"Imacme");
price=92500.00;
cout<<"Features of Imacme\n ";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Processor        : 4th Gen Intel Quad Core i5\n";
cout<<"RAM              : 8GB \n";
cout<<"Hard Disk        : 1TB\n";
cout<<"Operating system : Mavericks\n";
cout<<"Monitor          : 54.61cm\n";
cout<<"Price            : Rs. 92500\n";
cout<<'\n'<<'\n';
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"...Enter...\n";
cout<<"1. To buy this product\n";
cout<<"Enter..0..to move to previous page ";
cout<<"and ..x.. to exit\n";
char choice3;
cout<<"Enter your choice:\n";
reenter:
cin>>choice3;
if(choice3=='0')
Imac();
else if(choice3=='1')
{
int stock;
ifstream fin("Imacme",ios::in);
fin>>stock;
stock--;
fin.close();
ofstream fout("Imacme",ios::out);
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
void Imacmini()
{
clrscr();
char name[20];
float price;
strcpy(name,"Imacmini");
price=79980.00;
cout<<"Features of Imacmini\n ";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Processor        : 4th Gen Intel Quad Core i5\n";
cout<<"RAM              : 8GB \n";
cout<<"Hard Disk        : 1TB\n";
cout<<"Operating system : Yosemite\n";
cout<<"Monitor          : 54.61cm\n";
cout<<"Price            : Rs. 92500\n";
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
Imac();
else if(choice3=='1')
{
int stock;
ifstream fin("Imacmini",ios::in);
fin>>stock;
stock--;
fin.close();
ofstream fout("Imacmini",ios::out);
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
void Ipad()
{
clrscr();
cout<<'\n'<<'\n';
cout<<"+=+=+=+=+=+=+=Welcome to Ipad menu=+=+=+=+=+=+=\n";
cout<<"1. Ipad pro\n";
cout<<"2. Ipad air\n";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Enter..0..to move to previous page ";
cout<<"and ..x.. to exit\n";
cout<<"PLEASE!! Enter your choice:\n";
char choice2;
reenter:
cout<<" Enter your choice:\n";
cin>>choice2;
switch(choice2)
{
case '0':PAGE1();
break;
case '1':Ipadpro();
break;
case '2': Ipadair();
break;
case 'x': exit(0);
break;
default:
cout<<"!!...Wrong choice...!!\n";
cout<<"PLEASE!! Reenter your choice to continue:\n";
goto reenter;
}
}
void Ipadpro()
{
clrscr();
char name[20];float price;
strcpy(name,"Ipad pro");
price=67900.00;
cout<<"Features of Ipadpro\n ";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Scree size      : 12.9 inch\n";
cout<<"Internal memory : 32 GB\n";
cout<<"Processor       : 2.25 GHz \n";
cout<<"Camera          : 8 Mp\n";
cout<<"RAM             : 4 GB\n";
cout<<"Price           : Rs. 67900\n";
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
Ipad();
else if(choice3=='1')
{
int stock;
ifstream fin("Ipadpro",ios::in);
fin>>stock;
stock--;
fin.close();
ofstream fout("Ipadpro",ios::out);
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
void Ipadair()
{
clrscr();
char name[20];float price;
strcpy(name,"Ipad air");
price=67900.00;
cout<<"Features of Ipadair\n ";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Scree size      : 12.9 inch\n";
cout<<"Internal memory : 32 GB\n";
cout<<"Processor       : 2.25 GHz \n";
cout<<"Camera          : 8 Mp\n";
cout<<"RAM             : 4 GB\n";
cout<<"Price           : Rs. 67900\n";
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
Ipad();
else if(choice3=='1')
{
int stock;
ifstream fin("Ipadair",ios::in);
fin>>stock;
stock--;
fin.close();
ofstream fout("Ipadair",ios::out);
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
void Macbook()
{
clrscr();
cout<<'\n'<<'\n';
cout<<"+=+=+=+=+=+=+=Welcome to Macbook menu=+=+=+=+=+=+=\n";
cout<<"1. Macbook pro\n";
cout<<"2. Mackbook Ultra\n";
cout<<"3. Macbook Swift\n";
cout<<"4. Macbook wave\n";
cout<<"5. Macbook Extreme \n";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Enter..0..to move to previous page\n";
cout<<"and ..x.. to exit\n";
cout<<"PLEASE!! Enter your choice:\n";
char choice2;
reenter:
cout<<" Enter your choice:\n";
cin>>choice2;
switch(choice2)
{
case '0':PAGE1();
break;
case '1':Macbookpro();
break;
case '2': MacbookUltra();
break;
case '3': MacbookSwift();
break;
case '4': MacbookWave();
break;
case '5': MacbookExtreme();
break;
case 'x': exit(0);
break;
default:
cout<<"!!...Wrong choice...!!\n";
cout<<"PLEASE!! Reenter your choice to continue:\n";
goto reenter;
}
}
void Macbookpro()
{
clrscr();
char name[20];
float price;
strcpy(name,"Macbook pro");
price=66590.00;
cout<<"Features of Macbookpro\n ";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Processor        : Dual core  i5\n";
cout<<"RAM              : 4 GB \n";
cout<<"Hard Disk        : 8 GB\n";
cout<<"Screen size      : 13 inch\n";
cout<<"Operating system : Yosemite\n";
cout<<"Price            : Rs. 66590\n";
cout<<"Camera           : 2 Mp\n";
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
Macbook();
else if(choice3=='1')
{
int stock;
ifstream fin("Macbookpro",ios::in);
fin>>stock;
stock--;
fin.close();
ofstream fout("Macbookpro",ios::out);
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
void MacbookUltra()
{
clrscr();
char name[20];
float price;
strcpy(name,"MacbookUltra");
price=86977.00;
cout<<"Features of MacbookUltra\n ";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Processor        : Dual core i5\n";
cout<<"Ram              : 8 GB \n";
cout<<"Hard disk        : 1 TB\n";
cout<<"Operating System : Yosemite\n";
cout<<"Screen size      : 13.17 inch\n";
cout<<"Price            : Rs. 86977\n";
cout<<"Camera           : 3 Mp\n";
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
Macbook();
else if(choice3=='1')
{
int stock;
ifstream fin("MacbookUltra",ios::in);
fin>>stock;
stock--;
fin.close();
ofstream fout("MacbookUltra",ios::out);
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
void MacbookSwift()
{
clrscr();
char name[20];
float price;
strcpy(name,"Macbook Swift");
price=100000.00;
cout<<"Features of MacbookSwift\n ";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Processor        : Dual core i5\n";
cout<<"RAM              : 1 GB \n";
cout<<"Hard disk        : 1 TB\n";
cout<<"Operating System : Mavericks\n";
cout<<"Screen size      : 13.17 inch\n";
cout<<"Price            : Rs. 100000\n";
cout<<"Camera           : 3 Mp\n";
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
Macbook();
else if(choice3=='1')
{
int stock;
ifstream fin("MacbookSwift",ios::in);
fin>>stock;
stock--;
fin.close();
ofstream fout("MacbookSwift",ios::out);
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
void MacbookWave()
{
clrscr();
char name[20];
float price;
strcpy(name,"MacbookWave");
price=112050.00;
cout<<"Features of MacbookWave\n ";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Processor        : Dual core i5\n";
cout<<"RAM              : 4 GB \n";
cout<<"Hard disk        : 512 GB\n";
cout<<"Operating System : Mavericks\n";
cout<<"Screen size      : 12 inch\n";
cout<<"Price            : Rs. 112050\n";
cout<<"Camera           : 4 Mp\n";
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
Macbook();
else if(choice3=='1')
{
int stock;
ifstream fin("MacbookWave",ios::in);
fin>>stock;
stock--;
fin.close();
ofstream fout("MacbookWave",ios::out);
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
void MacbookExtreme()
{
clrscr();
char name[20];
float price;
strcpy(name,"MacbookExtreme");
price=160000.00;
cout<<"Features of MacbookExtreme\n ";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Processor        : Dual core i7\n";
cout<<"RAM              : 8 GB \n";
cout<<"Hard disk        : 1.5 TB\n";
cout<<"Operating System : Yosemite\n";
cout<<"Screen size      : 15.25 inch\n";
cout<<"Price            : Rs. 160000\n";
cout<<"Camera           : 4 Mp\n";
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
Macbook();
else if(choice3=='1')
{
int stock;
ifstream fin("MacbookExtreme",ios::in);
fin>>stock;
stock--;
fin.close();
ofstream fout("MacbookExtreme",ios::out);
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
void Applewatch()
{
clrscr();
cout<<'\n'<<'\n';
cout<<"+=+=+=+=+=+=+=Welcome to Applewatch menu=+=+=+=+=+=+=\n";
cout<<"1. Apple Watch sport\n";
cout<<"2. Apple Watch 2\n";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Enter..0..to move to previous page\n";
cout<<"and ..x.. to exit\n";
cout<<"PLEASE!! Enter your choice:\n";
char choice2;
cout<<"Enter your choice:\n";
reenter:
cin>>choice2;
switch(choice2)
{
case '0':PAGE1();
break;
case '1':Applewatchsport();
break;
case '2':Applewatch2();
break;
case 'x': exit(0);
break;
default:
cout<<"!!...Wrong choice...!!\n";
cout<<"PLEASE!! Reenter your choice to continue:\n";
goto reenter;
}
}
void Applewatchsport()
{
clrscr();
char name[20];
float price;
strcpy(name,"Apple Watch Sport");
price=33250.00;
cout<<"Features of Apple Watch Sports\n ";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"Size   :  42mm\n";
cout<<"Colour : Space Grey\n";
cout<<"Body   : Aluminium\n";
cout<<"Band   : Sports Band\n";
cout<<"Price  : Rs. 33250\n";
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
Applewatch();
else if(choice3=='1')
{
int stock;
ifstream fin("AppleWatchsport",ios::in);
fin>>stock;
stock--;
fin.close();
ofstream fout("AppleWatchsport",ios::out);
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
void Applewatch2()
{
clrscr();
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"!!!!!!!To be launched soon!!!!!!! \n";
cout<<"         IN  MARCH 2016 \n";
cout<<"With more interesting features\n";
cout<<"#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
cout<<"....Enter....\n";
cout<<"0. To move to previous page\n";
cout<<"AND...x...to exit\n";
char choice3;
cout<<"Enter your choice:\n";
reenter:
cin>>choice3;
if(choice3=='0')
Applewatch();
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
void PAGE1()
{
clrscr();
cout<<"Menu:\n";
cout<<"Enter your choice:\n";
cout<<"1. Iphone\n"<<"2. Imac\n"<<"3. Ipad\n";
cout<<"4. Macbook\n"<<"5. Apple Watch\n";
cout<<"0. To go to previous page\n";
char choice1;
cout<<"Enter your choice:\n";
reenter:
cin>>choice1;
switch(choice1)
{
case '0':front();
break;
case '1':Iphone();
break;
case '2':Imac();
break;
case '3':Ipad();
break;
case '4':Macbook();
break;
case '5':Applewatch();
break;
case 'x':exit(0);
break;
default:
cout<<"!!...Wrong choice...!!\n";
cout<<"PLEASE!! Reenter your choice to continue:\n";
goto reenter;
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
cout<<"7 . Imacme\n";
cout<<"8 . Imacmini\n";
cout<<"9 . Ipadpro\n";
cout<<"10. Ipadair\n";
cout<<"11. Macbookpro\n";
cout<<"12. MacbookUltra\n";
cout<<"13. MacbookSwift\n";
cout<<"14. MacbookWave\n";
cout<<"15. MacbookExtreme\n";
cout<<"16. Applewatchsport\n";
cout<<"17. Applewatch2\n";
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
case 7:
cout<<"Enter stocks of Imacme:\n";
cin>>stock;
ofstream fout7("Imacme",ios::out);
fout7<<stock;
fout7.close();
break;
case 8:
cout<<"Enter stocks of Imacmini:\n";
cin>>stock;
ofstream fout8("Imacmini",ios::out);
fout8<<stock;
fout8.close();
break;
case 9:
cout<<"Enter stocks of Ipadpro:\n";
cin>>stock;
ofstream fout9("Ipadpro",ios::out);
fout9<<stock;
fout9.close();
break;
case 10:
cout<<"Enter stocks of Ipadair:\n";
cin>>stock;
ofstream fout10("Ipadair",ios::out);
fout10<<stock;
fout10.close();
break;
case 11:
cout<<"Enter stocks of Macbookpro:\n";
cin>>stock;
ofstream fout11("Macbookpro",ios::out);
fout11<<stock;
fout11.close();
break;
case 12:
cout<<"Enter stocks of MacbookUltra:\n";
cin>>stock;
ofstream fout12("MacbookUltra",ios::out);
fout12<<stock;
fout12.close();
break;
case 13:
cout<<"Enter stocks of MacbookSwift:\n";
cin>>stock;
ofstream fout13("MacbookSwift",ios::out);
fout13<<stock;
fout13.close();
break;
case 14:
cout<<"Enter stocks of MacbookWave:\n";
cin>>stock;
ofstream fout14("MacbookWave",ios::out);
fout14<<stock;
fout14.close();
break;
case 15:
cout<<"Enter stocks of MacbookExtreme:\n";
cin>>stock;
ofstream fout15("MacbookExtreme",ios::out);
fout15<<stock;
fout15.close();
break;
case 16:
cout<<"Enter stocks of AppleWatchsport:\n";
cin>>stock;
ofstream fout16("AppleWatchsport",ios::out);
fout16<<stock;
fout16.close();
break;
case 17:
cout<<"Enter stocks of AppleWatch2:\n";
cin>>stock;
ofstream fout17("AppleWatch2",ios::out);
fout17<<stock;
fout17.close();
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
cout<<"7 . Imacme\n";
cout<<"8 . Imacmini\n";
cout<<"9 . Ipadpro\n";
cout<<"10. Ipadair\n";
cout<<"11. Macbookpro\n";
cout<<"12. MacbookUltra\n";
cout<<"13. MacbookSwift\n";
cout<<"14. MacbookWave\n";
cout<<"15. MacbookExtreme\n";
cout<<"16. Applewatchsport\n";
cout<<"17. Applewatch2\n";
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
case 7:
cout<<"The stocks of Imacme:\n";
ifstream fout7("Imacme",ios::out);
fout7>>stock;
cout<<stock;
fout7.close();
break;
case 8:
cout<<"The stocks of Imacmini:\n";
ifstream fout8("Imacmini",ios::out);
fout8>>stock;
cout<<stock;
fout8.close();
break;
case 9:
cout<<"The stocks of Ipadpro:\n";
ifstream fout9("Ipadpro",ios::out);
fout9>>stock;
cout<<stock;
fout9.close();
break;
case 10:
cout<<"The stocks of Ipadair:\n";
ifstream fout10("Ipadair",ios::out);
fout10>>stock;
cout<<stock;
fout10.close();
break;
case 11:
cout<<"The stocks of Macbookpro:\n";
ifstream fout11("Macbookpro",ios::out);
fout11>>stock;
cout<<stock;
fout11.close();
break;
case 12:
cout<<"The stocks of MacbookUltra:\n";
ifstream fout12("MacbookUltra",ios::out);
fout12>>stock;
cout<<stock;
fout12.close();
break;
case 13:
cout<<"The stocks of MacbookSwift:\n";
ifstream fout13("MacbookSwift",ios::out);
fout13>>stock;
cout<<stock;
fout13.close();
break;
case 14:
cout<<"The stocks of MacbookWave:\n";
ifstream fout14("MacbookWave",ios::out);
fout14>>stock;
cout<<stock;
fout14.close();
break;
case 15:
cout<<"The stocks of MacbookExtreme:\n";
ifstream fout15("MacbookExtreme",ios::out);
fout15>>stock;
cout<<stock;
fout15.close();
break;
case 16:
cout<<"The stocks of AppleWatchsport:\n";
ifstream fout16("AppleWatchsport",ios::out);
fout16>>stock;
cout<<stock;
fout16.close();
break;
case 17:
cout<<"The stocks of AppleWatch2:\n";
ifstream fout17("AppleWatch2",ios::out);
fout17>>stock;
cout<<stock;
fout17.close();
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



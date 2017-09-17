#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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
void front()
{
system("cls");
fflush(stdin);
char username[50],password[50];
view();
printf("\n\n");
printf("   HELLO!!! If you are a customer enter * to continue\n\n");
printf("   OR!! If you are an autenticated user enter username\n\n");
printf("   OR!! Enter x to exit\n\n");
printf("   Enter your choice:  ");
char Page1[20];strcpy(Page1,"NULL");
reenter:
   fflush(stdin);
gets(Page1);
if(strcmp(Page1,"*")==0)
Iphone();
else if(strcmp(Page1,"apple")==0)
authentication();
else if((strcmp(Page1,"x")==0)||(strcmp(Page1,"X")==0))
exit(0);
else
{
printf("   Incorrect INPUT!!!!!\n\n");
printf("   Reenter your choice\n");
goto reenter;
}
}
void Iphone()
{
system("cls");
printf("\n\n");
printf("+=+=+=+=+=+=+=Welcome to Iphone menu=+=+=+=+=+=+=\n\n");
printf("1. Iphone 4s\n");
printf("2. Iphone 5s\n");
printf("3. Iphone 6\n");
printf("4. Iphone 6+\n");
printf("5. Iphone 6s\n");
     printf("6. Iphone 6s+\n");
printf("#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n");
printf("Enter..0..to move to previous page\n\n");
printf("and ..x.. to exit\n\n");
printf("PLEASE!! Enter your choice:\n");
char choice2;
reenter:
    fflush(stdin);
scanf("%c",&choice2);
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
printf("!!...Wrong choice...!!\n");
printf("PLEASE!! Reenter your choice to continue:\n");
goto reenter;
}
}
void Iphone4s()
{
system("cls");
char name[20];
float price;
strcpy(name,"Iphone 4s");
price=19000.00;
printf("Features of Iphone 4s\n");
printf("#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n");
printf("Processor         :    Dual core 1.0 Ghz\n");
printf("Screen resolution :    326 ppi\n");
printf("RAM               :    1 GB \n");
printf("Internal memory   :    8 GB\n");
printf("Screen size       :    4 inch\n");
printf("Price             :    Rs. 19000\n");
printf("Camera            :    6 Mp\n");
printf("\n\n");
printf("#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n");
printf(".....Enter.....\n1. To buy this product\n");
printf("Enter..0..to move to previous page ");
printf("and ..x.. to exit\n");
char choice3;
printf("Enter your choice:\n");
reenter:
    fflush(stdin);
scanf("%c",&choice3);
if(choice3=='0')
Iphone();
else if(choice3=='1')
{
int stock;
FILE *fin;
fin=fopen("iphone4s.txt","r");
stock=getw(fin);
stock--;
fclose(fin);
FILE *fout;
fout=fopen("iphone4s.txt","w");
putw(stock,fout);
fclose(fout);
bill(name,price);
}
else if(choice3=='x')
exit(0);
else
{
printf("!!...Wrong choice...!!\n");
printf("PLEASE!! Reenter your choice to continue:\n");
goto reenter;
}
}
void Iphone5s()
{
system("cls");
char name[20];
float price;
strcpy(name,"Iphone 5s");
price=21000.00;
printf("Features of Iphone 5s\n ");
printf("#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n");
printf("Processor         : Dual core 1.3 Ghz\n");
printf("Screen resolution : 326 ppi\n");
printf("RAM               : 1 GB \n");
printf("Internal memory   : 16 GB\n");
printf("Screen size       : 4 inch\n");
printf("Price             : Rs. 21000\n");
printf("Camera            : 8 Mp\n");
printf("\n\n");
printf("#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n");
printf(".....Enter.....\n1. To buy this product\n");
printf("Enter..0..to move to previous page ");
printf("and ..x.. to exit\n");
char choice3;
printf("Enter your choice:\n");
reenter:
    fflush(stdin);
scanf("%c",&choice3);
if(choice3=='0')
Iphone();
else if(choice3=='1')
{
int stock;
FILE *fin;
fin=fopen("iphone5s.txt","r");
stock=getw(fin);
stock--;
fclose(fin);
FILE *fout;
fout=fopen("iphone5s.txt","w");
putw(stock,fout);
fclose(fout);
bill(name,price);
}
else if(choice3=='x')
exit(0);
else
{
printf("!!...Wrong choice...!!\n");
printf("PLEASE!! Reenter your choice to continue:\n");
goto reenter;
}
}
void Iphone6()
{
system("cls");
char name[20];
float price;
strcpy(name,"Iphone 6");
price=44000.00;
printf("Features of Iphone 6\n ");
printf("#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n");
printf("Processor         : Dual core 1.4 Ghz\n");
printf("Screen resolution : 326 ppi\n");
printf("RAM               : 1 GB \n");
printf("Internal memory   : 16 GB\n");
printf("Screen size       : 4.7 inch\n");
printf("Price             : Rs. 44000\n");
printf("Camera            : 8 Mp\n");
printf("\n\n");
printf("#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#/n");
printf(".....Enter.....\n1. To buy this product\n");
printf("Enter..0..to move to previous page ");
printf("and ..x.. to exit\n");
char choice3;
printf("Enter your choice:\n");
reenter:
    fflush(stdin);
scanf("%c",&choice3);
if(choice3=='0')
Iphone();
else if(choice3=='1')
{
int stock;
FILE *fin;
fin=fopen("iphone6.txt","r");
stock=getw(fin);
stock--;
fclose(fin);
FILE *fout;
fout=fopen("iphone6.txt","w");
putw(stock,fout);
fclose(fout);
bill(name,price);
}
else if(choice3=='x')
exit(0);
else
{
printf("!!...Wrong choice...!!\n");
printf("PLEASE!! Reenter your choice to continue:\n");
goto reenter;
}
}
void Iphone6plus()
{
system("cls");
char name[20];
float price;
strcpy(name,"Iphone 6+");
price=54000.00;
printf("Features of Iphone 6+\n ");
printf("#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n");
printf("Processor         : Dual core 1.4 Ghz\n");
printf("Screen resolution : 401 ppi\n");
printf("RAM               : 1 GB \n");
printf("Internal memory   : 16 GB\n");
printf("Screen size       : 5.5 inch\n");
printf("Price             : Rs. 54000\n");
printf("Camera            : 8 Mp\n");
printf("\n\n");
printf("#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n");
printf(".....Enter.....\n1. To buy this product\n");
printf("Enter..0..to move to previous page ");
printf("and ..x.. to exit\n");
char choice3;
printf("Enter your choice:\n");
reenter:
    fflush(stdin);
scanf("%c",&choice3);
if(choice3=='0')
Iphone();
else if(choice3=='1')
{
int stock;
FILE *fin;
fin=fopen("iphone6plus.txt","r");
stock=getw(fin);
stock--;
fclose(fin);
FILE *fout;
fout=fopen("iphone6plus.txt","w");
putw(stock,fout);
fclose(fout);
bill(name,price);
}
else if(choice3=='x')
exit(0);
else
{
printf("!!...Wrong choice...!!\n");
printf("PLEASE!! Reenter your choice to continue:\n");
goto reenter;
}
}
void Iphone6s()
{
system("cls");
char name[20];
float price;
strcpy(name,"Iphone 6s");
price=64000.00;
printf("Features of Iphone 6s\n ");
printf("#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n");
printf("Processor         : Dual core 1.84 Ghz\n");
printf("Screen resolution : 326 ppi\n");
printf("RAM               : 2 GB \n");
printf("Internal memory   : 32 GB\n");
printf("Screen size       : 4.7 inch\n");
printf("Price             : Rs. 64000\n");
printf("Camera            : 12 Mp\n");
printf("\n\n");
printf("#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n");
printf(".....Enter.....\n1. To buy this product\n");
printf("Enter..0..to move to previous page ");
printf("and ..x.. to exit\n");
char choice3;
printf("Enter your choice:\n");
reenter:
    fflush(stdin);
scanf("%c",&choice3);
if(choice3=='0')
Iphone();
else if(choice3=='1')
{
int stock;
FILE *fin;
fin=fopen("iphone6s.txt","r");
stock=getw(fin);
stock--;
fclose(fin);
FILE *fout;
fout=fopen("iphone6s.txt","w");
putw(stock,fout);
fclose(fout);
bill(name,price);
}
else if(choice3=='x')
exit(0);
else
{
printf("!!...Wrong choice...!!\n");
printf("PLEASE!! Reenter your choice to continue:\n");
goto reenter;
}
}
void Iphone6splus()
{
system("cls");
char name[20];
float price;
strcpy(name,"Iphone 6s+");
price=76000.00;
printf("Features of Iphone 6s+\n ");
printf("#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n");
printf("Processor         : Dual core 1.84 Ghz\n");
printf("Screen resolution : 401 ppi\n");
printf("RAM               : 2 GB \n");
printf("Internal memory   : 32 GB\n");
printf("Screen size       : 5.5 inch\n");
printf("Price             : Rs. 76000\n");
printf("Camera            : 12 Mp\n");
printf("\n\n");
printf("#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n");
printf(".....Enter.....\n1. To buy this product\n");
printf("Enter..0..to move to previous page ");
printf("and ..x.. to exit\n");
char choice3;
printf("Enter your choice:\n");
reenter:
 fflush(stdin);
scanf("%c",&choice3);
if(choice3=='0')
Iphone();
else if(choice3=='1')
{
int stock;
FILE *fin;
fin=fopen("iphone6splus.txt","r");
stock=getw(fin);
stock--;
fclose(fin);
FILE *fout;
fout=fopen("iphone6splus.txt","w");
putw(stock,fout);
fclose(fout);
bill(name,price);
}
else if(choice3=='x')
exit(0);
else
{
printf("!!...Wrong choice...!!\n");
printf("PLEASE!! Reenter your choice to continue:\n");
goto reenter;
}
}
void bill(char NAME[],float PRICE)
{
system("cls");
printf("\n\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
printf("Your bill is:\n\n");
printf("Product Name :  ");puts(NAME);
printf("\nNet amount : %f ",PRICE);
int bank;
printf("\nTo buy this product enter 1\n");
fflush(stdin);
scanf("%d",&bank);
if(bank==1)
{
intbank(PRICE);
}
printf("\nENTER x to move to front page\n");
char e;
fflush(stdin);
reenter:
scanf("%c",&e);
if(e=='x')
front();
else
{
printf("Incorrect Input\n");
printf("Please!! reenter your choice:\n");
goto reenter;
}
}
void intbank(float p)
{
system("cls");
fflush(stdin);
char atm[50],pass[50],email[50];
printf("\n\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
printf("*********  WELCOME to Internet BanK  **********\n\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n\n");
printf("Enter your e-mail ID\n");
gets(email);
printf("Please enter your ATM number and OTP to purchase\n");
printf("ATM No. :  ");gets(atm);
printf("OTP     :  ");gets(pass);
printf("Amount  :  %f",p);
printf("\nEnter 1 to pay :  ");
int a=0;
fflush(stdin);
scanf("%d",&a);
if(a==1)
{
printf("\nThankyou for using Internet Bank!!!!\n\n");
printf("Reciept will be sent to your entered e-mail id\n\n");
}
}
void authentication()
{
system("cls");
char userid[50];
char password[50];
int k=3;
printf("\n\n");
printf("HELLO SIR!!! \n");
printf("PLEASE  ENTER :\n");
char ch;
reenter:
if(k<3)
system("cls");
fflush(stdin);
printf("UserID    :  ");gets(userid);
printf("Password  :  ");gets(password);
if(strcmp(userid,"applestore")==0)
{
if(strcmp(password,"applestore")==0)
{
showroom();
}
else
{
while(k>=0)
{
k--;
if(k==0)
{ system("cls");
printf("\n\n");
printf("!! @@ ## $$ %% ^^ && ** !! @@ ## $$ %% ^^ && ** !!\n\n");
printf("Your attempts are over your access is terminated\n\n");
printf("!! @@ ## $$ %% ^^ && ** !! @@ ## $$ %% ^^ && ** !!\n\n");
long i,j;
for(i=0;i<=100000000;i++);
printf("....Bye Bye!!!!....!");
for(j=0;j<=100000000;j++);
exit(0);
}
printf("Invalid userid or password \n\n");
printf("You have only...%d...attempts left to access private data\n\n",k);
printf("Enter & to enter userid and password again\n\n");
printf("Enter any other key to exit\n\n");
scanf("%c",&ch);
if(ch=='&')
goto reenter;
else
exit(0);
}
}
}
else
{
printf("Invalid userid or password\n\n");
while(k>=0)
{
k--;
if(k==0)
{
system("cls");
printf("\n\n");
printf("!! @@ ## $$ %% ^^ && ** !! @@ ## $$ %% ^^ && ** !!\n\n");
printf("Your attempts are over your access is terminated\n\n");
printf("!! @@ ## $$ %% ^^ && ** !! @@ ## $$ %% ^^ && ** !!\n\n");
long i,j;
for(i=0;i<=100000000;i++);
printf("....Bye Bye!!!!....");
for(j=0;j<=100000000;j++);
exit(0);
}
printf("You have only...%d...attempts left to access private data\n\n",k);
printf("Enter & to enter userid and password again\n\n");
printf("Enter any other key to exit\n\n");
scanf("%c",&ch);
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
system("cls");
printf("\nSir...\n");
printf("Enter......\n");
printf("1. To update stocks\n2. To see stocks\n");
char ch;
printf("Enter your choice:\n");
reenter:
    fflush(stdin);
scanf("%c",&ch);
if(ch=='1')
{
system("cls");
mno:
printf("Which products  stocks you want to update?\n");
int ch1;
printf("1 . Iphone4s\n");
printf("2 . Iphone5s\n");
printf("3 . Iphone6\n");
printf("4 . Iphone6plus\n");
printf("5 . Iphone6s\n");
printf("6 . Iphone6splus\n");
printf("0 . To move to front page\n");
xyz:
    fflush(stdin);
printf("Enter your choice:\n");
scanf("%d",&ch1);
switch(ch1)
{
case 1:
{printf("Enter stocks of Iphone4s:\n");
scanf("%d",&stock);
FILE *fout1;
fout1=fopen("iphone4s.txt","w");
putw(stock,fout1);
fclose(fout1);
break;}
case 2:
{printf("Enter stocks of Iphone5s:\n");
scanf("%d",&stock);
FILE *fout1;
fout1=fopen("iphone5s.txt","w");
putw(stock,fout1);
fclose(fout1);
break;}
case 3:
{printf("Enter stocks of Iphone6:\n");
scanf("%d",&stock);
FILE *fout1;
fout1=fopen("iphone6.txt","w");
putw(stock,fout1);
fclose(fout1);
break;}
case 4:
{printf("Enter stocks of Iphone6+:\n");
scanf("%d",&stock);
FILE *fout1;
fout1=fopen("iphone6plus.txt","w");
putw(stock,fout1);
fclose(fout1);
break;}
case 5:
{printf("Enter stocks of Iphone6s:\n");
scanf("%d",&stock);
FILE *fout1;
fout1=fopen("iphone6s.txt","w");
putw(stock,fout1);
fclose(fout1);
break;}
case 6:
{printf("Enter stocks of Iphone6splus:\n");
scanf("%d",&stock);
FILE *fout1;
fout1=fopen("iphone6splus.txt","w");
putw(stock,fout1);
fclose(fout1);
break;}
case 0:
{front();
break;}
default:
{printf("!!...Wrong choice...!!\n");
printf("PLEASE!! Reenter your choice to continue:\n");
goto xyz;}
}
abhi:
printf("\nWant to enter more stock enter 1 ??\n");
printf("else enter 0 to move to Front page\n");
int a;
fflush(stdin);
scanf("%d",&a);
if(a==1)
goto mno;
else if(a==0)
front();
else
{
printf("\nWrong Input:\n");
goto abhi;
}
}
else if(ch=='2')
{
system("cls");
mnoa:
printf("Which products  stocks you want to see?\n");
int ch1;
printf("1 . Iphone4s\n");
printf("2 . Iphone5s\n");
printf("3 . Iphone6\n");
printf("4 . Iphone6plus\n");
printf("5 . Iphone6s\n");
printf("6 . Iphone6splus\n");
printf("0 . To move to front page\n");
xyza:
    fflush(stdin);
printf("Enter your choice:\n");
scanf("%d",&ch1);
switch(ch1)
{
case 1:
{printf("The stocks of Iphone4s:\n");
FILE *fout1;
fout1=fopen("iphone4s.txt","r");
stock=getw(fout1);
printf("%d",stock);
fclose(fout1);
break;}
case 2:
{printf("The stocks of Iphone5s:\n");
FILE *fout1;
fout1=fopen("iphone5s.txt","r");
stock=getw(fout1);
printf("%d",stock);
fclose(fout1);
break;}
case 3:
{printf("The stocks of Iphone6:\n");
FILE *fout1;
fout1=fopen("iphone6.txt","r");
stock=getw(fout1);
printf("%d",stock);
fclose(fout1);
break;}
case 4:
{printf("The stocks of Iphone6+:\n");
FILE *fout1;
fout1=fopen("iphone6plus.txt","r");
stock=getw(fout1);
printf("%d",stock);
fclose(fout1);
break;}
case 5:
{printf("The stocks of Iphone6s:\n");
FILE *fout1;
fout1=fopen("iphone6s.txt","r");
stock=getw(fout1);
printf("%d",stock);
fclose(fout1);
break;}
case 6:
{printf("The stocks of Iphone6splus:\n");
FILE *fout1;
fout1=fopen("iphone6splus.txt","r");
stock=getw(fout1);
printf("%d",stock);
fclose(fout1);
break;}
case 0:
{front();
break;}
default:
{printf("!!...Wrong choice...!!\n");
printf("PLEASE!! Reenter your choice to continue:\n");
goto xyza;}
}
abhi1:
printf("\nWant to see more stock enter 1 ??\n");
printf("else enter 0 to front page\n");
int a;
fflush(stdin);
scanf("%d",&a);
if(a==1)
goto mnoa;
else if(a==0)
front();
else
{
printf("\nWrong Input:\n");
goto abhi1;
}
}
}
void view()
{
system("cls");
printf("\n\n\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("\n\n");
printf("        @        @ @ @ @    @ @ @ @    @          @ @ @ @ @\n");
printf("       @ @       @       @  @       @  @          @        \n");
printf("      @   @      @       @  @       @  @          @        \n");
printf("     @ @ @ @     @ @ @ @    @ @ @ @    @          @ @ @ @  \n");
printf("    @       @    @          @          @          @        \n");
printf("   @         @   @          @          @          @        \n");
printf("  @           @  @          @          @ @ @ @ @  @ @ @ @ @\n");
printf("\n\n");
printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");
printf("\n\n");
printf("        @@@@@@@@@@ WELCOME To APPLE Menu @@@@@@@@@@\n");
}
int main()
{
system("cls");
front();
return 0;
}


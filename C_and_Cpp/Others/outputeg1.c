#include<stdio.h>
void f(char**);
void main()
{
    char *argv[]={"ab","cd","ef","gh","ij","kl",};
    f(argv);
}
void f(char **p)
{
    char *t;
    t=(p+=sizeof(int))[-1];//doubt what is this -1
    printf("%s\n",t);

}


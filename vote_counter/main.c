#include <stdio.h>
#include <stdlib.h>
# include <string.h>
# include"dep.h"
void rapour ();
int security();
void admn ();
void register_v ();
void vnew();
void register_c ();
void cnew();
void sorting ();
void votee();
void decision ();
void cheak (char c[10],char depertment[10],int y);


 struct person
{   int id[15];
    char names[30];
    char gender[8];
}person;
 struct candidate
{   int c_id[15];
    char c_names[30];
    char c_gender[8];
    char position [30];
    char depertment[20];
}candidate;
char carid[7];


int main()
{
while(1)
{
rapour ();
}
    return 0;
}

void rapour ()
{system("cls");
    int op;
    printf("\t\t\t\t\t WELCOME TO L.1 VOTING SYSTEM\n");
    printf("\t\t\t\t\t------------------------------- \n");
    printf("chose operation to perform : \n1. Vote \n2. Admn controle. \nENTER YOUR CHOICE :");
    scanf("%d",&op);

    if(op==1)
    {
       votee();
    }else if (op==2)
    {
      security();
    }else
    {
        printf("Invalid choice \n");
        rapour ();
    }
}

int security()
 { int r=0;
    char usrnm[15];
    char pwrd[12];
    while(r<=3)
    {
    printf("Enter your username:\n");
    scanf("%s",&usrnm);
    printf("Enter your password:\n");
    scanf("%s",&pwrd);
    if((strcmp(usrnm,"tekla")==0))
    {if((strcmp(pwrd,"@mumbi1")==0))
        {
        printf("\nWelcome.Login Success!");
        system("color 2");
        system("pause");
        system("cls");
        system("color 7");
        admn ();
        r=4;
        }
    else{
            printf("\nwrong password\n");
            system("color 4");
        }
    }
    else{printf("\nUser doesn't exist\n");
    system("color 4");}
    r++;
    system("pause");
    system("cls");
    system("color 7");
    }
}

void admn ()
{   int ch;
    printf("Enter operation to perform :\n1. Register voters \n2. Register candidates \n3. Results\nENTER YOUR OPTION : ");
    scanf("%d",&ch);

    if(ch==1)
    {
       register_v ();
    }else if (ch==2)
    {
       register_c ();
    }else if (ch==3)
    {
      declare ();
    }else
    {
      printf("invalid choice \n");
      admn();
    }
}

void register_v ()
{

    printf("Enter your ID number : ");
    scanf("%s",&person.id);

        FILE*hoho;
    hoho=fopen(person.id,"r");
    if (hoho==NULL)
    {
        vnew();
    }else
    {
    printf("You are a registered voter\n \n");
    char s;
    while(s!=EOF)
    {
        s=fgetc(hoho);
        printf("%c",s);
    }
    }
    fclose(hoho);
}


void vnew()
{
   fflush(stdin);
   printf("for new registration enter the following:\n");
   printf("Enter your names :\n");
   gets(person.names);
   printf("Enter your gender :\n");
   gets(person.gender);



    printf("NAMES %s\n",person.names);
    printf("GENDER %s\n",person.gender);
    printf("IDNUMBER  %s\n",person.id);

         FILE*neww;
    neww=fopen(person.id,"w");
    fprintf(neww,"NAMES %s\n",person.names);
    fprintf(neww,"GENDER %s\n",person.gender);
    fprintf(neww,"IDNUMBER  %s\n",person.id);
    fclose(neww);

 printf("You are now a registered voter \n");
}



void register_c ()
{

    printf("Enter your candidate ID number : ");
    scanf("%s",&carid);

        FILE*oho;
    oho=fopen(carid,"r");
    if (oho==NULL)
    {
        cnew();
    }else
    {
    printf("You are a registered candidate\n\n");
    char d;
    while(d!=EOF)
    {
        d=fgetc(oho);
        printf("%c",d);
    }
    }
    fclose(oho);
}


void cnew()
{
     fflush(stdin);
    FILE*cid;
    cid=fopen("candidateidcounter","r");
    int p=0;
     while((carid[p]!=EOF)&&(p<=7))
     {
         carid[p]=fgetc(cid);
         p++;
     }
     fclose(cid);
     carid[7]++;
      printf("%s\n",carid);
     printf("Enter your ID\n");
     gets(candidate.c_id);
     printf("Enter your names\n");
     gets(candidate.c_names);
     printf("Enter your gender\n");
     gets(candidate.c_gender);
     printf("Enter your position\n");
     gets(candidate.position );
     printf("Enter your Depertment\n");
     gets(candidate.depertment);
      sorting ();
    FILE*cr;
    cr=fopen(carid,"w");
    fprintf(cr,"c_id %S\n",candidate.c_id);
    fprintf(cr,"c_names %S\n",candidate.c_names);
    fprintf(cr,"c_gender %S\n",candidate.c_gender);
    fprintf(cr,"Position %S\n",candidate.position);
    fprintf(cr,"Depertment %S\n",candidate.depertment);
    fclose(cr);
    printf("Your now a registered candidate ");
    printf("Your candidate ID id  %s\n",carid);

        FILE*ciid;
    ciid=fopen("candidateidcounter","w");
      fprintf(ciid,"%s",carid);
     fclose(ciid);
}


void  votee()
{

     printf("Enter your ID number : ");
     scanf("%s",&person.id);

        FILE*vtop;
    vtop=fopen(person.id,"r");
    if (vtop==NULL)
    {
      printf("You are not registered voter\n\n");

    system("color 4");
    system("pause");
    system("cls");
    system("color 7");
    }else
    {
    printf("You are a registered voter\n\n");
    system("color 2");
    system("pause");
    system("cls");
    system("color 7");
    char q;
    while(q!=EOF)
    {
        q=fgetc(vtop);
        printf("%c",q);
    }
    decision ();
    }
    fclose(vtop);
}


void decision ()
{
  fflush(stdin);
        char depertment[10];
    printf("\nenter your department : ");
    gets(depertment);

    FILE*st;
    st=fopen(depertment,"r");
    if(st==NULL)
    {
        printf("there are no candidates in this group \n");

    }else
    {
      printing (depertment);
    }

}

void sorting ()
{
    FILE*st;
    st=fopen(candidate.depertment,"r");
    if(st==NULL)
    {
        printf("Department doesn't exist \n");
        carid[7]--;
        cnew();
    }else
    {
       FILE*dt;
       dt=fopen(candidate.position,"r");
       if (dt==NULL)
        {
           printf("Position doesn't exist \n");
           carid[7]--;
           cnew();
        }else
        {
            fprintf(dt,"%s\n",candidate.c_names);
        }
    }

}


void cheak (char c[10],char depertment[10],int y)
{

     char g;
    for (int i=0;i<11;i++)
    { if(g<c[i])
        { g=c[i]; }
    }

    char r=0;
    int f=0;
    while(f!=1)
    {
        for (int i=0;i<11;i++)
          {  if(c[i]==g)
                 { r=i+1;
                     f++;
                 }
          }

    printf("The winner is candidate : ");
    finally (r,depertment,y);

    }



}




#ifndef DEP_H_INCLUDED
#define DEP_H_INCLUDED

 void printing (char depertment[10])
 {
     int choice=0,y=0;

    if (strcmp(depertment,"dee")==0)
    {

        FILE*fa;
        fa=fopen("dee congress","r");
        char a;
        while (a!=EOF)
        {
            a=fgetc(fa);
            printf("%c",a);
        }fclose(fa);
        printf("\nEnter number of candidate you want to elect for congress: \n");
        scanf("%d",&choice);
        y=1;
        vadder ( depertment, choice ,  y);

        FILE*fb;
        fb=fopen("dee female delegate","r");
        char b;
        while (b!=EOF)
        {
            b=fgetc(fb);
            printf("%c",b);
        }fclose(fb);
        printf("\nEnter number of candidate you want to elect as female delegate: \n");
        scanf("%d",&choice);
        y=2;
        vadder ( depertment, choice ,  y);

        FILE*fc;
        fc=fopen("dee male delegate","r");
        char c;
        while (c!=EOF)
        {
            c=fgetc(fc);
            printf("%c",c);
        }fclose(fc);
        printf("Enter number of candidate you want to elect for male delegate: \n");
        scanf("%d",&choice);
        y=3;
        vadder ( depertment, choice ,  y);

        FILE*fp;
        fp=fopen("dee general delegate","r");
        char d;
        while (d!=EOF)
        {
            d=fgetc(fp);
            printf("%c",d);
        }fclose(fp);
        printf("Enter number of candidate you want to elect as general delegate: \n");
        scanf("%d",&choice);
        y=4;
        vadder ( depertment, choice ,  y);


    }else if (strcmp(depertment,"dcit")==0)
    {
              FILE*fa;
        fa=fopen("dcit congress","r");
        char a;
        while (a!=EOF)
        {
            a=fgetc(fa);
            printf("%c",a);
        }fclose(fa);
        printf("\nEnter number of candidate you want to elect for congress: \n");
        scanf("%d",&choice);
        y=1;
        vadder ( depertment, choice ,  y);

        FILE*fb;
        fb=fopen("dcit female delegate","r");
        char b;
        while (b!=EOF)
        {
            b=fgetc(fb);
            printf("%c",b);
        }fclose(fb);
        printf("\nEnter number of candidate you want to elect as female delegate: \n");
        scanf("%d",&choice);
        y=2;
        vadder ( depertment, choice ,  y);

        FILE*fc;
        fc=fopen("dcit male delegate","r");
        char c;
        while (c!=EOF)
        {
            c=fgetc(fc);
            printf("%c",c);
        }fclose(fc);
        printf("Enter number of candidate you want to elect for male delegate: \n");
        scanf("%d",&choice);
        y=3;
        vadder ( depertment, choice ,  y);

        FILE*fp;
        fp=fopen("dcit general delegate","r");
        char d;
        while (d!=EOF)
        {
            d=fgetc(fp);
            printf("%c",d);
        }fclose(fp);
        printf("Enter number of candidate you want to elect as general delegate: \n");
        scanf("%d",&choice);
        y=4;
        vadder ( depertment, choice ,  y);

    }else if (strcmp(depertment,"dms")==0)
    {
                FILE*fa;
        fa=fopen("dms congress","r");
        char a;
        while (a!=EOF)
        {
            a=fgetc(fa);
            printf("%c",a);
        }fclose(fa);
        printf("\nEnter number of candidate you want to elect for congress: \n");
        scanf("%d",&choice);
        y=1;
        vadder ( depertment, choice ,  y);

        FILE*fb;
        fb=fopen("dms female delegate","r");
        char b;
        while ((b!=EOF) )
        {
            b=fgetc(fb);
            printf("%c",b);

        }fclose(fb);
        printf("\nEnter number of candidate you want to elect as female delegate: \n");
        scanf("%d",&choice);
        y=2;
        vadder ( depertment, choice ,  y);

        FILE*fc;
        fc=fopen("dms male delegate","r");
        char c;
        while (c!=EOF)
        {
            c=fgetc(fc);
            printf("%c",c);
        }fclose(fc);
        printf("Enter number of candidate you want to elect for male delegate: \n");
        scanf("%d",&choice);
        y=3;
        vadder ( depertment, choice ,  y);

        FILE*fp;
        fp=fopen("dms general delegate","r");
        char d;
        while (d!=EOF)
        {
            d=fgetc(fp);
            printf("%c",d);
        }fclose(fp);
        printf("Enter number of candidate you want to elect as general delegate: \n");
        scanf("%d",&choice);
        y=4;
        vadder ( depertment, choice ,  y);
    }
 }

///inaweza haiwezi

    void vadder (char depertment[10], int choice , int y)
 {
     struct cc{
    char deecong[10],deemd[10],deefd[10],deegd[10];
    char dcitcong[10],dcitmd[10],dcitfd[10],dcitgd[10];
    char dmscong[10],dmsmd[10],dmsfd[10],dmsgd[10];
     }d;
           if (strcmp(depertment,"dms")==0)
    {
        if(y==1)
      { FILE*fa;
        fa=fopen("dms congress counter","r");
        int p=0;
        while((d.dmscong[p]!=EOF)&&(p<=10))
        {  d.dmscong[p]=fgetc(fa);
            p++;
        }  fclose(fa);

        d.dmscong[choice]++;

        FILE*fd;
        fd=fopen("dms congress counter","w");
        fprintf(fd,"%s",d.dmscong);
        fclose(fd);
      }

        if (y==2)
      { FILE*fb;
        fb=fopen("dms female delegate counter","r");
        int p=0;
        while((d.dmsfd[p]!=EOF)&&(p<=10))
        {   d.dmsfd[p]=fgetc(fb);
            p++;
        }   fclose(fb);

        d.dmsfd[choice]++;

        FILE*fe;
        fe=fopen("dms female delegate counter","w");
        fprintf(fe,"%s",d.dmsfd);
        fclose(fe);
      }

         if (y==3)
      { FILE*fc;
        fc=fopen("dms male delegate counter","r");
        int p=0;
        while((d.dmsmd[p]!=EOF)&&(p<=10))
          {  d.dmsmd[p]=fgetc(fc);
             p++;
          }  fclose(fc);

          d.dmsmd[choice]++;

        FILE*ff;
        ff=fopen("dms male delegate counter","w");
        fprintf(ff,"%s",d.dmsmd);
        fclose(ff);
      }

        if(y==4)
      { FILE*fp;
        fp=fopen("dms general delegate counter","r");
        int p=0;
        while((d.dmsgd[p]!=EOF)&&(p<=10))
          { d.dmsgd[p]=fgetc(fp);
            p++;
          } fclose(fp);

          d.dmsgd[choice]++;

        FILE*fg;
        fg=fopen("dms general delegate counter","w");
        fprintf(fg,"%s",d.dmsgd);
        fclose(fg);
       }
    }

///dcit


           if (strcmp(depertment,"dcit")==0)
    {
        if(y==1)
      { FILE*fa;
        fa=fopen("dcit congress counter","r");
        int p=0;
        while((d.dcitcong[p]!=EOF)&&(p<=10))
        {
            d.dcitcong[p]=fgetc(fa);
            p++;
        }  fclose(fa);

        d.dcitcong[choice]++;

        FILE*fd;
        fd=fopen("dcit congress counter","w");
        fprintf(fd,"%s",d.dcitcong);
        fclose(fd);
      }

        if (y==2)
      { FILE*fb;
        fb=fopen("dcit female delegate counter","r");
        int p=0;
        while((d.dcitfd[p]!=EOF)&&(p<=10))
        {   d.dcitfd[p]=fgetc(fb);
            p++;
        }   fclose(fb);

        d.dcitfd[choice]++;

        FILE*fe;
        fe=fopen("dcit female delegate counter","w");
        fprintf(fe,"%s",d.dcitfd);
        fclose(fe);
      }

         if (y==3)
      { FILE*fc;
        fc=fopen("dcit male delegate counter","r");
        int p=0;
        while((d.dcitmd[p]!=EOF)&&(p<=10))
          {  d.dcitmd[p]=fgetc(fc);
             p++;
          }  fclose(fc);

          d.dcitmd[choice]++;

        FILE*ff;
        ff=fopen("dcit male delegate counter","w");
        fprintf(ff,"%s",d.dcitmd);
        fclose(ff);
      }

        if(y==4)
      { FILE*fp;
        fp=fopen("dcit general delegate counter","r");
        int p=0;
        while((d.dcitgd[p]!=EOF)&&(p<=10))
          { d.dcitgd[p]=fgetc(fp);
            p++;
          } fclose(fp);

          d.dcitgd[choice]++;

        FILE*fg;
        fg=fopen("dcit general delegate counter","w");
        fprintf(fg,"%s",d.dcitgd);
        fclose(fg);
       }
    }

///dee
         if (strcmp(depertment,"dee")==0)
    {
        if(y==1)
      { FILE*fa;
        fa=fopen("dee congress counter","r");
        int p=0;
        while((d.deecong[p]!=EOF)&&(p<=10))
        {  d.deecong[p]=fgetc(fa);
            p++;
        }  fclose(fa);

        d.deecong[choice]++;

        FILE*fd;
        fd=fopen("dee congress counter","w");
        fprintf(fd,"%s",d.deecong);
        fclose(fd);
      }

        if (y==2)
      { FILE*fb;
        fb=fopen("dee female delegate counter","r");
        int p=0;
        while((d.deefd[p]!=EOF)&&(p<=10))
        {  d. deefd[p]=fgetc(fb);
            p++;
        }   fclose(fb);

        d.deefd[choice]++;

        FILE*fe;
        fe=fopen("dee female delegate counter","w");
        fprintf(fe,"%s",d.deefd);
        fclose(fe);
      }

         if (y==3)
      { FILE*fc;
        fc=fopen("dee male delegate counter","r");
        int p=0;
        while((d.deemd[p]!=EOF)&&(p<=10))
          {  d.deemd[p]=fgetc(fc);
             p++;
          }  fclose(fc);

          d.deemd[choice]++;

        FILE*ff;
        ff=fopen("dee male delegate counter","w");
        fprintf(ff,"%s",d.deemd);
        fclose(ff);
      }

        if(y==4)
      { FILE*fp;
        fp=fopen("dee general delegate counter","r");
        int p=0;
        while((d.deegd[p]!=EOF)&&(p<=10))
          { d.deegd[p]=fgetc(fp);
            p++;
          } fclose(fp);

          d.deegd[choice]++;

        FILE*fg;
        fg=fopen("dee general delegate counter","w");
        fprintf(fg,"%s",d.deegd);
        fclose(fg);
       }
    }

    }


    void declare ()
    {
        fflush(stdin);

     int position=0;
     char depertment[10];
    printf("Enter department name to cheek ");
    gets(depertment);
    printf("Enter position name to cheek ");
    printf("\n1. Congress person\n2. Female delegate\n3. Male delegate\n4. General delegate");
    scanf("%d",&position);

fflush(stdin);
          struct cc{
    char deecong[10],deemd[10],deefd[10],deegd[10];
    char dcitcong[10],dcitmd[10],dcitfd[10],dcitgd[10];
    char dmscong[10],dmsmd[10],dmsfd[10],dmsgd[10];
     }d;
     int y=0;
           if (strcmp(depertment,"dms")==0)
    {
      if(position==1)
      {
        FILE*fa;
        fa=fopen("dms congress counter","r");
        int p=0;
        while((d.dmscong[p]!=EOF)&&(p<=10))
        {  d.dmscong[p]=fgetc(fa);
            p++;
        }  fclose(fa);
          y=1;
          cheak (d.dmscong,depertment,y);
      }
      if(position==2)
      {
        FILE*fb;
        fb=fopen("dms female delegate counter","r");
      int   p=0;
        while((d.dmsfd[p]!=EOF)&&(p<=10))
        {   d.dmsfd[p]=fgetc(fb);
            p++;
        }   fclose(fb);

          y=2;
          cheak (d.dmscong,depertment,y);
      }
      if(position==3)
      {
        FILE*fc;
        fc=fopen("dms male delegate counter","r");
      int   p=0;
        while((d.dmsmd[p]!=EOF)&&(p<=10))
          {  d.dmsmd[p]=fgetc(fc);
             p++;
          }  fclose(fc);
          y=3;
          cheak (d.dmscong,depertment,y);

      }
      if(position==4)
      {
        FILE*fp;
        fp=fopen("dms general delegate counter","r");
      int p=0;
        while((d.dmsgd[p]!=EOF)&&(p<=10))
          { d.dmsgd[p]=fgetc(fp);
            p++;
          } fclose(fp);

          y=4;
          cheak (d.dmscong,depertment,y);
      }
    }

///dcit


           if (strcmp(depertment,"dcit")==0)
    {

      if(position==1)
      {
        FILE*fa;
        fa=fopen("dcit congress counter","r");
        int p=0;
        while((d.dcitcong[p]!=EOF)&&(p<=10))
        {
            d.dcitcong[p]=fgetc(fa);
            p++;
        }  fclose(fa);

          y=1;
          cheak (d.dmscong,depertment,y);
      }
      if(position==2)
      {
        FILE*fb;
        fb=fopen("dcit female delegate counter","r");
       int  p=0;
        while((d.dcitfd[p]!=EOF)&&(p<=10))
        {   d.dcitfd[p]=fgetc(fb);
            p++;
        }   fclose(fb);

          y=2;
          cheak (d.dmscong,depertment,y);
                }
      if(position==3)
      {
        FILE*fc;
        fc=fopen("dcit male delegate counter","r");
     int  p=0;
        while((d.dcitmd[p]!=EOF)&&(p<=10))
          {  d.dcitmd[p]=fgetc(fc);
             p++;
          }  fclose(fc);

          y=3;
          cheak (d.dmscong,depertment,y);
      }
      if(position==4)
      {
        FILE*fp;
        fp=fopen("dcit general delegate counter","r");
      int  p=0;
        while((d.dcitgd[p]!=EOF)&&(p<=10))
          { d.dcitgd[p]=fgetc(fp);
            p++;
          } fclose(fp);

          y=4;
          cheak (d.dmscong,depertment,y);
      }
    }

///dee
         if (strcmp(depertment,"dee")==0)
    {
      if(position==1)
      {
        FILE*fa;
        fa=fopen("dee congress counter","r");
        int p=0;
        while((d.deecong[p]!=EOF)&&(p<=10))
        {  d.deecong[p]=fgetc(fa);
            p++;
        }  fclose(fa);

          y=1;
          cheak (d.dmscong,depertment,y);
      }
      if(position==2)
      {
        FILE*fb;
        fb=fopen("dee female delegate counter","r");
      int  p=0;
        while((d.deefd[p]!=EOF)&&(p<=10))
        {  d. deefd[p]=fgetc(fb);
            p++;
        }   fclose(fb);

          y=2;
          cheak (d.dmscong,depertment,y);
      }
      if(position==3)
      {
        FILE*fc;
        fc=fopen("dee male delegate counter","r");
       int  p=0;
        while((d.deemd[p]!=EOF)&&(p<=10))
          {  d.deemd[p]=fgetc(fc);
             p++;
          }  fclose(fc);


          y=3;
          cheak (d.dmscong,depertment,y);
                }
      if(position==4)
      {
        FILE*fp;
        fp=fopen("dee general delegate counter","r");
       int p=0;
        while((d.deegd[p]!=EOF)&&(p<=10))
          { d.deegd[p]=fgetc(fp);
            p++;
          } fclose(fp);

          y=4;
          cheak (d.dmscong,depertment,y);
      }
    }



    }


      void finally (char r,char depertment[10],int y)
    {  printf("%d",r);


    if(r==1)
    {

         if (strcmp(depertment,"dee")==0)
    {

       if(y==1)
        { FILE*fa;
        fa=fopen("dee congress","r");
        char a;
        while (a!=EOF)
        {    a=fgetc(fa);
             if (a=='1')
           { for (int i=0;i<20;i++)
             { if(a!='2')
             {
                printf("%c",a);
               a=fgetc(fa);
             }
             }
           }

        }fclose(fa);
        }

        if(y==2)
          {
        FILE*fb;
        fb=fopen("dee female delegate","r");
        char b;
        while (b!=EOF)
        {    b=fgetc(fb);
             if (b=='1')
           { for (int i=0;i<20;i++)
             { if(b!='2')
             {
                printf("%c",b);
               b=fgetc(fb);
             }
             }
           }

        }fclose(fb);
          }

          if(y==3)
          {
        FILE*fc;
        fc=fopen("dee male delegate","r");
        char c;
        while (c!=EOF)
        {    c=fgetc(fc);
             if (c=='1')
           { for (int i=0;i<20;i++)
             { if(c!='2')
             {
                printf("%c",c);
               c=fgetc(fc);
             }
             }
           }

        }fclose(fc);
          }

          if(y==4)
          {
        FILE*fp;
        fp=fopen("dee general delegate","r");
        char d;
        while (d!=EOF)
        {    d=fgetc(fp);
             if (d=='1')
           { for (int i=0;i<20;i++)
             { if(d!='2')
             {
                printf("%c",d);
               d=fgetc(fp);
             }
             }
           }

        }fclose(fp);
          }

    }else if (strcmp(depertment,"dcit")==0)
    {
            if(y==1)
          {
              FILE*fa;
        fa=fopen("dcit congress","r");
        char a;
        while (a!=EOF)
        {    a=fgetc(fa);
             if (a=='1')
           { for (int i=0;i<20;i++)
             { if(a!='2')
             {
                printf("%c",a);
               a=fgetc(fa);
             }
             }
           }

        }fclose(fa);
          }
        if(y==2)
          {
        FILE*fb;
        fb=fopen("dcit female delegate","r");
        char b;
                while (b!=EOF)
        {    b=fgetc(fb);
             if (b=='1')
           { for (int i=0;i<20;i++)
             { if(b!='2')
             {
                printf("%c",b);
               b=fgetc(fb);
             }
             }
           }

        }fclose(fb);
          }
        if(y==3)
          {
        FILE*fc;
        fc=fopen("dcit male delegate","r");
        char c;
        while (c!=EOF)
        {    c=fgetc(fc);
             if (c=='1')
           { for (int i=0;i<20;i++)
             { if(c!='2')
             {
                printf("%c",c);
               c=fgetc(fc);
             }
             }
           }

        }fclose(fc);
          }
        if(y==4)
          {
        FILE*fp;
        fp=fopen("dcit general delegate","r");
        char d;
        while (d!=EOF)
        {    d=fgetc(fp);
             if (d=='1')
           { for (int i=0;i<20;i++)
             { if(d!='2')
             {
                printf("%c",d);
               d=fgetc(fp);
             }
             }
           }

        }fclose(fp);
          }
    }else if (strcmp(depertment,"dms")==0)
    {int k[1];

    if(y==1)
          {
        FILE*fa;
        fa=fopen("dms congress","r");
        char a;
        while (a!=EOF)
        {    a=fgetc(fa);
             if (a=='1')
           {
               for (int i=0;i<20;i++)
             { if(a!='2')
             {
                printf("%c",a);
               a=fgetc(fa);
             }
             }
           }k[1] =a;
        }fclose(fa);
          }
        if(y==2)
          {
        FILE*fb;
        fb=fopen("dms female delegate","r");
        char b;
                while (b!=EOF)
        {    b=fgetc(fb);
             if (b=='1')
           { for (int i=0;i<20;i++)
             { if(b!='2')
             {
                printf("%c",b);
               b=fgetc(fb);
             }
             }
           }

        }fclose(fb);
          }
        if(y==3)
          {
        FILE*fc;
        fc=fopen("dms male delegate","r");
        char c;
        while (c!=EOF)
        {    c=fgetc(fc);
             if (c=='1')
           { for (int i=0;i<20;i++)
             { if(c!='2')
             {
                printf("%c",c);
               c=fgetc(fc);
             }
             }
           }

        }fclose(fc);
          }
        if(y==4)
          {
        FILE*fp;
        fp=fopen("dms general delegate","r");
        char d;
        while (d!=EOF)
        {    d=fgetc(fp);
             if (d=='1')
           { for (int i=0;i<20;i++)
             { if(d!='2')
             {
                printf("%c",d);
               d=fgetc(fp);
             }
             }
           }

        }fclose(fp);
          }
        }
 }


     if(r==2)
    {

         if (strcmp(depertment,"dee")==0)
    {

     if(y==1)
          {
                 FILE*fa;
        fa=fopen("dee congress","r");
        char a;
        while (a!=EOF)
        {    a=fgetc(fa);
             if (a=='2')
           { for (int i=0;i<20;i++)
             { if(a!='3')
             {
                printf("%c",a);
               a=fgetc(fa);
             }
             }
           }

        }fclose(fa);
          }
        if(y==2)
          {
        FILE*fb;
        fb=fopen("dee female delegate","r");
        char b;
        while (b!=EOF)
        {    b=fgetc(fb);
             if (b=='2')
           { for (int i=0;i<20;i++)
             { if(b!='3')
             {
                printf("%c",b);
               b=fgetc(fb);
             }
             }
           }

        }fclose(fb);
          }
        if(y==3)
          {
        FILE*fc;
        fc=fopen("dee male delegate","r");
        char c;
        while (c!=EOF)
        {    c=fgetc(fc);
             if (c=='2')
           { for (int i=0;i<20;i++)
             { if(c!='3')
             {
                printf("%c",c);
               c=fgetc(fc);
             }
             }
           }

        }fclose(fc);
          }
        if(y==4)
          {
        FILE*fp;
        fp=fopen("dee general delegate","r");
        char d;
        while (d!=EOF)
        {    d=fgetc(fp);
             if (d=='2')
           { for (int i=0;i<20;i++)
             { if(d!='3')
             {
                printf("%c",d);
               d=fgetc(fp);
             }
             }
           }

        }fclose(fp);

          }
    }else if (strcmp(depertment,"dcit")==0)
    {
       if(y==1)
          {       FILE*fa;
        fa=fopen("dcit congress","r");
        char a;
        while (a!=EOF)
        {    a=fgetc(fa);
             if (a=='2')
           { for (int i=0;i<20;i++)
             { if(a!='3')
             {
                printf("%c",a);
               a=fgetc(fa);
             }
             }
           }

        }fclose(fa);
          }
        if(y==2)
          {
        FILE*fb;
        fb=fopen("dcit female delegate","r");
        char b;
                while (b!=EOF)
        {    b=fgetc(fb);
             if (b=='2')
           { for (int i=0;i<20;i++)
             { if(b!='3')
             {
                printf("%c",b);
               b=fgetc(fb);
             }
             }
           }

        }fclose(fb);
          }
        if(y==3)
          {
        FILE*fc;
        fc=fopen("dcit male delegate","r");
        char c;
        while (c!=EOF)
        {    c=fgetc(fc);
             if (c=='2')
           { for (int i=0;i<20;i++)
             { if(c!='3')
             {
                printf("%c",c);
               c=fgetc(fc);
             }
             }
           }

        }fclose(fc);
          }
        if(y==4)
          {
        FILE*fp;
        fp=fopen("dcit general delegate","r");
        char d;
        while (d!=EOF)
        {    d=fgetc(fp);
             if (d=='2')
           { for (int i=0;i<20;i++)
             { if(d!='3')
             {
                printf("%c",d);
               d=fgetc(fp);
             }
             }
           }

        }fclose(fp);
          }
    }else if (strcmp(depertment,"dms")==0)
    {int k[1];
if(y==1)
          {
        FILE*fa;
        fa=fopen("dms congress","r");
        char a;
        while (a!=EOF)
        {    a=fgetc(fa);
             if (a=='2')
           {
               for (int i=0;i<20;i++)
             { if(a!='3')
             {
                printf("%c",a);
               a=fgetc(fa);
             }
             }
           }k[1] =a;
        }fclose(fa);
          }
        if(y==2)
          {
        FILE*fb;
        fb=fopen("dms female delegate","r");
        char b;
                while (b!=EOF)
        {    b=fgetc(fb);
             if (b=='2')
           { for (int i=0;i<20;i++)
             { if(b!='3')
             {
                printf("%c",b);
               b=fgetc(fb);
             }
             }
           }

        }fclose(fb);
          }
        if(y==3)
          {
        FILE*fc;
        fc=fopen("dms male delegate","r");
        char c;
        while (c!=EOF)
        {    c=fgetc(fc);
             if (c=='2')
           { for (int i=0;i<20;i++)
             { if(c!='3')
             {
                printf("%c",c);
               c=fgetc(fc);
             }
             }
           }

        }fclose(fc);
          }
        if(y==4)
          {
        FILE*fp;
        fp=fopen("dms general delegate","r");
        char d;
        while (d!=EOF)
        {    d=fgetc(fp);
             if (d=='2')
           { for (int i=0;i<20;i++)
             { if(d!='3')
             {
                printf("%c",d);
               d=fgetc(fp);
             }
             }
           }

        }fclose(fp);
          }
        }
 }


    if(r==3)
    {

         if (strcmp(depertment,"dee")==0)
    {

        if(y==1)
          {FILE*fa;
        fa=fopen("dee congress","r");
        char a;
        while (a!=EOF)
        {    a=fgetc(fa);
             if (a=='3')
           { for (int i=0;i<20;i++)
             { if(a!='4')
             {
                printf("%c",a);
               a=fgetc(fa);
             }
             }
           }

        }fclose(fa);
          }
        if(y==2)
          {
        FILE*fb;
        fb=fopen("dee female delegate","r");
        char b;
        while (b!=EOF)
        {    b=fgetc(fb);
             if (b=='3')
           { for (int i=0;i<20;i++)
             { if(b!='4')
             {
                printf("%c",b);
               b=fgetc(fb);
             }
             }
           }

        }fclose(fb);
          }
        if(y==3)
          {
        FILE*fc;
        fc=fopen("dee male delegate","r");
        char c;
        while (c!=EOF)
        {    c=fgetc(fc);
             if (c=='3')
           { for (int i=0;i<20;i++)
             { if(c!='4')
             {
                printf("%c",c);
               c=fgetc(fc);
             }
             }
           }

        }fclose(fc);
          }
        if(y==4)
          {
        FILE*fp;
        fp=fopen("dee general delegate","r");
        char d;
        while (d!=EOF)
        {    d=fgetc(fp);
             if (d=='3')
           { for (int i=0;i<20;i++)
             { if(d!='4')
             {
                printf("%c",d);
               d=fgetc(fp);
             }
             }
           }

        }fclose(fp);

          }
    }else if (strcmp(depertment,"dcit")==0)
    {
       if(y==1)
          {       FILE*fa;
        fa=fopen("dcit congress","r");
        char a;
        while (a!=EOF)
        {    a=fgetc(fa);
             if (a=='3')
           { for (int i=0;i<20;i++)
             { if(a!='4')
             {
                printf("%c",a);
               a=fgetc(fa);
             }
             }
           }

        }fclose(fa);
          }
        if(y==2)
          {
        FILE*fb;
        fb=fopen("dcit female delegate","r");
        char b;
                while (b!=EOF)
        {    b=fgetc(fb);
             if (b=='3')
           { for (int i=0;i<20;i++)
             { if(b!='4')
             {
                printf("%c",b);
               b=fgetc(fb);
             }
             }
           }

        }fclose(fb);
          }
        if(y==3)
          {
        FILE*fc;
        fc=fopen("dcit male delegate","r");
        char c;
        while (c!=EOF)
        {    c=fgetc(fc);
             if (c=='3')
           { for (int i=0;i<20;i++)
             { if(c!='4')
             {
                printf("%c",c);
               c=fgetc(fc);
             }
             }
           }

        }fclose(fc);
          }
        if(y==4)
          {
        FILE*fp;
        fp=fopen("dcit general delegate","r");
        char d;
        while (d!=EOF)
        {    d=fgetc(fp);
             if (d=='3')
           { for (int i=0;i<20;i++)
             { if(d!='4')
             {
                printf("%c",d);
               d=fgetc(fp);
             }
             }
           }

        }fclose(fp);
          }
    }else if (strcmp(depertment,"dms")==0)
    {int k[1];

        if(y==1)
          {FILE*fa;
        fa=fopen("dms congress","r");
        char a;
        while (a!=EOF)
        {    a=fgetc(fa);
             if (a=='3')
           {
               for (int i=0;i<20;i++)
             { if(a!='4')
             {
                printf("%c",a);
               a=fgetc(fa);
             }
             }
           }k[1] =a;
        }fclose(fa);
          }
        if(y==2)
          {
        FILE*fb;
        fb=fopen("dms female delegate","r");
        char b;
                while (b!=EOF)
        {    b=fgetc(fb);
             if (b=='3')
           { for (int i=0;i<20;i++)
             { if(b!='4')
             {
                printf("%c",b);
               b=fgetc(fb);
             }
             }
           }

        }fclose(fb);
          }
        if(y==3)
          {
        FILE*fc;
        fc=fopen("dms male delegate","r");
        char c;
        while (c!=EOF)
        {    c=fgetc(fc);
             if (c=='3')
           { for (int i=0;i<20;i++)
             { if(c!='4')
             {
                printf("%c",c);
               c=fgetc(fc);
             }
             }
           }

        }fclose(fc);
          }
        if(y==4)
          {
        FILE*fp;
        fp=fopen("dms general delegate","r");
        char d;
        while (d!=EOF)
        {    d=fgetc(fp);
             if (d=='3')
           { for (int i=0;i<20;i++)
             { if(d!='4')
             {
                printf("%c",d);
               d=fgetc(fp);
             }
             }
           }

        }fclose(fp);
          }
        }
 }
    }

#endif // DEP_H_INCLUDED

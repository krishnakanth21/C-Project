#include<fstream.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>
#include<ctype.h>
#include<stdio.h>
int count=0;
class periodic
{
private:
  int i,j,k,a,c;
public:
  void showtable();
  void sblock();
  void pblock();
  void dblock();
  void fblock();
};

struct quiz
{
char ques[100],ans[100];
}a,b;
//function for generating the quiz
void quizgen()
{
ofstream f("d:quiz.dat",ios::binary);//apply a suitable path
if(!f)
{
cout<<"\nFile not found";
return;
}
f.write((char*)&a,sizeof(a));
}
void quizdisp()
{
char ch[100];
ifstream f("d:quiz.dat",ios::binary);
if (!f)
{
cout<<"\nFile not found";
return;
}
f.read((char*)&b,sizeof(b));
while(!f.eof())
{
puts(b.ques);
gets(ch);
if(strcmpi(ch,b.ans)==0)
{cout<<"\nCorrect answer\n\n";
 ++count;}
else
cout<<"\nIncorrect answer,correct answer is "<<b.ans<<"\n\n";
f.read((char*)&b,sizeof(b));
}
f.close();
}

void periodic::showtable()
{
cleardevice();
setcolor(YELLOW);
settextstyle(3,0,7);
settextstyle(3,0,5);
setcolor(YELLOW);
line(0,30,30,30);
line(30,30,30,275);
line(0,135,625,135);
line(65,65,65,275);
line(100,135,100,275);
line(135,135,135,275);
line(170,135,170,275);
line(205,135,205,275);
line(240,135,240,275);
line(275,135,275,275);
line(310,135,310,275);
line(345,135,345,275);
line(380,135,380,275);
line(415,65,415,275);
line(450,65,450,275);
line(485,65,485,275);
line(520,65,520,275);
line(555,65,555,275);
line(590,30,590,275);
line(625,30,625,275);
line(0,30,0,275);
line(0,170,625,170);
line(0,205,625,205);
line(0,240,625,240);
line(0,275,625,275);
line(0,65,65,65);
line(0,100,65,100);
line(415,65,625,65);
line(415,100,625,100);
line(590,30,625,30);
line(590,30,625,30);
line(135,420,625,420);
line(135,350,135,420);
line(135,350,625,350);
line(135,385,625,385);
line(170,350,170,420);
line(205,350,205,420);
line(240,350,240,420);
line(275,350,275,420);
line(310,350,310,420);
line(345,350,345,420);
line(380,350,380,420);
line(415,350,415,420);
line(450,350,450,420);
line(485,350,485,420);
line(520,350,520,420);
line(555,350,555,420);
line(590,350,590,420);
line(625,350,625,420);
settextstyle(0,0,0);
outtextxy(10,50,"H");
outtextxy(10,85,"Li");
outtextxy(10,120,"Na");
outtextxy(10,155,"k");
outtextxy(10,190,"Rb");
outtextxy(10,225,"Cs");
outtextxy(10,260,"Fr");
outtextxy(40,85,"Be");
outtextxy(40,120,"Mg");
outtextxy(40,155,"Ca");
outtextxy(40,190,"Sr");
outtextxy(40,225,"Ba");
outtextxy(40,260,"Ra");
outtextxy(75,155,"Sc");
outtextxy(75,190,"Y");
outtextxy(75,225,"La");
outtextxy(75,260,"Ac");
outtextxy(110,155,"Ti");
outtextxy(110,190,"Zr");
outtextxy(110,225,"Hf");
outtextxy(110,260,"Rf");
outtextxy(145,155,"V");
outtextxy(145,190,"Nb");
outtextxy(145,225,"Ta");
outtextxy(145,260,"Db");
outtextxy(180,155,"Cr");
outtextxy(180,190,"Mo");
outtextxy(180,225,"W");
outtextxy(180,260,"Sg");
outtextxy(215,155,"Mn");
outtextxy(215,190,"Tc");
outtextxy(215,225,"Re");
outtextxy(215,260,"Bh");
outtextxy(250,155,"Fe");
outtextxy(250,190,"Ru");
outtextxy(250,225,"Os");
outtextxy(250,260,"Hs");
outtextxy(285,155,"Co");
outtextxy(285,190,"Rh");
outtextxy(285,225,"Ir");
outtextxy(285,260,"Mt");
outtextxy(320,155,"Ni");
outtextxy(320,190,"Pd");
outtextxy(320,225,"Pt");
outtextxy(315,260,"Uun");
outtextxy(355,155,"Cu");
outtextxy(355,190,"Ag");
outtextxy(355,225,"Au");
outtextxy(350,260,"Uuu");
outtextxy(390,155,"Zn");
outtextxy(390,190,"Cd");
outtextxy(390,225,"Hg");
outtextxy(385,260,"Uub");
outtextxy(425,155,"Ga");
outtextxy(425,190,"In");
outtextxy(425,225,"Ti");
outtextxy(420,260,"Uut");
outtextxy(425,120,"Al");
outtextxy(425,85,"B");
outtextxy(460,85,"C");
outtextxy(460,120,"Si");
outtextxy(460,155,"Ge");
outtextxy(460,190,"Sn");
outtextxy(460,225,"Pb");
outtextxy(455,260,"Uuq");
outtextxy(495,85,"N");
outtextxy(495,120,"P");
outtextxy(495,155,"As");
outtextxy(495,190,"Sb");
outtextxy(495,225,"Bi");
outtextxy(490,260,"Uup");
outtextxy(530,85,"O");
outtextxy(530,120,"S");
outtextxy(530,155,"Se");
outtextxy(530,190,"Te");
outtextxy(530,225,"Po");
outtextxy(525,260,"Uuh");
outtextxy(565,85,"F");
outtextxy(565,120,"Cl");
outtextxy(565,155,"Br");
outtextxy(565,190,"I");
outtextxy(565,225,"At");
outtextxy(560,260,"Uus");
outtextxy(600,50,"He");
outtextxy(600,85,"Ne");
outtextxy(600,120,"Ar");
outtextxy(600,155,"Kr");
outtextxy(600,190,"Xe");
outtextxy(600,225,"Rn");
outtextxy(600,260,"Uuo");
settextstyle(0,0,2);
outtextxy(165,15,"PERIODIC TABLE");
outtextxy(163,18,"______________");
settextstyle(0,0,0);
outtextxy(145,375,"Ce");
outtextxy(145,410,"Th");
outtextxy(180,375,"Pr");
outtextxy(180,410,"Pa");
outtextxy(215,375,"Nd");
outtextxy(215,410,"U");
outtextxy(250,375,"Pm");
outtextxy(250,410,"Np");
outtextxy(285,375,"Sm");
outtextxy(285,410,"Pu");
outtextxy(320,375,"Eu");
outtextxy(320,410,"Am");
outtextxy(355,375,"Gd");
outtextxy(355,410,"Cm");
outtextxy(390,375,"Tb");
outtextxy(390,410,"Bk");
outtextxy(425,375,"Dy");
outtextxy(425,410,"Cf");
outtextxy(460,375,"Ho");
outtextxy(460,410,"Es");
outtextxy(495,375,"Er");
outtextxy(495,410,"Fm");
outtextxy(530,375,"Tm");
outtextxy(530,410,"Md");
outtextxy(565,375,"Yb");
outtextxy(565,410,"No");
outtextxy(600,375,"Lu");
outtextxy(600,410,"Lr");
outtextxy(20,365,"Lanthanides--");
outtextxy(20,400,"Actinides----");
outtextxy(135,330,"|----------------------f-block Elements----------------------|");
outtextxy(65,120,"|-------------d-block Elements-------------|");
outtextxy(412,15,"|-----p-block Elements----|");
outtextxy(0,15,"|--------|");
outtextxy(0,0,"s-blocks Elements");
outtextxy(10,35,"1");
outtextxy(10,70,"3");
outtextxy(10,105,"11");
outtextxy(10,140,"19");
outtextxy(10,175,"37");
outtextxy(10,210,"55");
outtextxy(10,245,"87");
outtextxy(40,70,"4");
outtextxy(40,105,"12");
outtextxy(40,140,"20");
outtextxy(40,175,"38");
outtextxy(40,210,"56");
outtextxy(40,245,"88");
outtextxy(75,140,"21");
outtextxy(75,175,"39");
outtextxy(75,210,"57");
outtextxy(75,245,"89");
outtextxy(110,140,"22");
outtextxy(110,175,"40");
outtextxy(110,210,"72");
outtextxy(110,245,"104");
outtextxy(145,140,"23");
outtextxy(145,175,"41");
outtextxy(145,210,"73");
outtextxy(145,245,"105");
outtextxy(180,140,"24");
outtextxy(180,175,"42");
outtextxy(180,210,"74");
outtextxy(180,245,"106");
outtextxy(215,140,"25");
outtextxy(215,175,"43");
outtextxy(215,210,"75");
outtextxy(215,245,"107");
outtextxy(250,140,"26");
outtextxy(250,175,"44");
outtextxy(250,210,"76");
outtextxy(250,245,"108");
outtextxy(285,140,"27");
outtextxy(285,175,"45");
outtextxy(285,210,"77");
outtextxy(285,245,"109");
outtextxy(320,140,"28");
outtextxy(320,175,"46");
outtextxy(320,210,"78");
outtextxy(315,245,"110");
outtextxy(355,140,"29");
outtextxy(355,175,"47");
outtextxy(355,210,"79");
outtextxy(350,245,"111");
outtextxy(390,140,"30");
outtextxy(390,175,"46");
outtextxy(390,210,"80");
outtextxy(385,245,"112");
outtextxy(425,140,"31");
outtextxy(425,175,"49");
outtextxy(425,210,"81");
outtextxy(420,245,"113");
outtextxy(425,105,"13");
outtextxy(425,70,"5");
outtextxy(460,70,"6");
outtextxy(460,105,"14");
outtextxy(460,140,"32");
outtextxy(460,175,"50");
outtextxy(460,210,"82");
outtextxy(455,245,"114");
outtextxy(495,70,"7");
outtextxy(495,105,"15");
outtextxy(495,140,"33");
outtextxy(495,175,"51");
outtextxy(495,210,"83");
outtextxy(490,245,"115");
outtextxy(530,70,"8");
outtextxy(530,105,"16");
outtextxy(530,140,"34");
outtextxy(530,175,"52");
outtextxy(530,210,"84");
outtextxy(525,245,"116");
outtextxy(565,70,"9");
outtextxy(565,105,"17");
outtextxy(565,140,"35");
outtextxy(565,175,"53");
outtextxy(565,210,"85");
outtextxy(560,245,"117");
outtextxy(600,35,"2");
outtextxy(600,70,"10");
outtextxy(600,105,"18");
outtextxy(600,140,"36");
outtextxy(600,175,"54");
outtextxy(600,210,"86");
outtextxy(600,245,"118");
outtextxy(145,360,"58");
outtextxy(145,395,"90");
outtextxy(180,360,"59");
outtextxy(180,395,"91");
outtextxy(215,360,"60");
outtextxy(215,395,"92");
outtextxy(250,360,"61");
outtextxy(250,395,"93");
outtextxy(285,360,"62");
outtextxy(285,395,"94");
outtextxy(320,360,"63");
outtextxy(320,395,"95");
outtextxy(355,360,"64");
outtextxy(355,395,"96");
outtextxy(390,360,"65");
outtextxy(390,395,"97");
outtextxy(425,360,"66");
outtextxy(425,395,"98");
outtextxy(460,360,"67");
outtextxy(460,395,"99");
outtextxy(495,360,"68");
outtextxy(495,395,"100");
outtextxy(530,360,"69");
outtextxy(530,395,"101");
outtextxy(565,360,"70");
outtextxy(565,395,"102");
outtextxy(600,360,"71");
outtextxy(600,395,"103");
getch();

}


void periodic::sblock()
{
cleardevice();
setcolor(4);
outtextxy(0,0,"S block");
setcolor(11);
settextstyle(0,0,0);
rectangle(1,20,60,300);
outtextxy(2,50,"H");
outtextxy(2,85,"Li");
outtextxy(2,120,"Na");
outtextxy(2,155,"k");
outtextxy(2,190,"Rb");
outtextxy(2,225,"Cs");
outtextxy(2,260,"Fr");
outtextxy(40,85,"Be");
outtextxy(40,120,"Mg");
outtextxy(40,155,"Ca");
outtextxy(40,190,"Sr");
outtextxy(40,225,"Ba");
outtextxy(40,260,"Ra");
}
void periodic::pblock()
{
cleardevice();
setcolor(4);
outtextxy(20,20,"P block");
setcolor(11);
settextstyle(0,0,0);
rectangle(400,20,625,300);
outtextxy(425,155,"Ga");
outtextxy(425,190,"In");
outtextxy(425,225,"Ti");
outtextxy(420,260,"Uut");
outtextxy(425,120,"Al");
outtextxy(425,85,"B");
outtextxy(460,85,"C");
outtextxy(460,120,"Si");
outtextxy(460,155,"Ge");
outtextxy(460,190,"Sn");
outtextxy(460,225,"Pb");
outtextxy(455,260,"Uuq");
outtextxy(495,85,"N");
outtextxy(495,120,"P");
outtextxy(495,155,"As");
outtextxy(495,190,"Sb");
outtextxy(495,225,"Bi");
outtextxy(490,260,"Uup");
outtextxy(530,85,"O");
outtextxy(530,120,"S");
outtextxy(530,155,"Se");
outtextxy(530,190,"Te");
outtextxy(530,225,"Po");
outtextxy(525,260,"Uuh");
outtextxy(565,85,"F");
outtextxy(565,120,"Cl");
outtextxy(565,155,"Br");
outtextxy(565,190,"I");
outtextxy(565,225,"At");
outtextxy(560,260,"Uus");
outtextxy(600,50,"He");
outtextxy(600,85,"Ne");
outtextxy(600,120,"Ar");
outtextxy(600,155,"Kr");
outtextxy(600,190,"Xe");
outtextxy(600,225,"Rn");
outtextxy(600,260,"Uuo");
}

void periodic::dblock()
{
cleardevice();
setcolor(4);
outtextxy(20,20,"D block");
setcolor(11);
settextstyle(0,0,0);
rectangle(40,120,450,280);
outtextxy(75,155,"Sc");
outtextxy(75,190,"Y");
outtextxy(75,225,"La");
outtextxy(75,260,"Ac");
outtextxy(110,155,"Ti");
outtextxy(110,190,"Zr");
outtextxy(110,225,"Hf");
outtextxy(110,260,"Rf");
outtextxy(145,155,"V");
outtextxy(145,190,"Nb");
outtextxy(145,225,"Ta");
outtextxy(145,260,"Db");
outtextxy(180,155,"Cr");
outtextxy(180,190,"Mo");
outtextxy(180,225,"W");
outtextxy(180,260,"Sg");
outtextxy(215,155,"Mn");
outtextxy(215,190,"Tc");
outtextxy(215,225,"Re");
outtextxy(215,260,"Bh");
outtextxy(250,155,"Fe");
outtextxy(250,190,"Ru");
outtextxy(250,225,"Os");
outtextxy(250,260,"Hs");
outtextxy(285,155,"Co");
outtextxy(285,190,"Rh");
outtextxy(285,225,"Ir");
outtextxy(285,260,"Mt");
outtextxy(320,155,"Ni");
outtextxy(320,190,"Pd");
outtextxy(320,225,"Pt");
outtextxy(315,260,"Uun");
outtextxy(355,155,"Cu");
outtextxy(355,190,"Ag");
outtextxy(355,225,"Au");
outtextxy(350,260,"Uuu");
outtextxy(390,155,"Zn");
outtextxy(390,190,"Cd");
outtextxy(390,225,"Hg");
outtextxy(385,260,"Uub");
}


void periodic::fblock()
{
cleardevice();
setcolor(4);
outtextxy(20,20,"F block");
setcolor(11);
settextstyle(0,0,0);
rectangle(15,350,620,440);
outtextxy(145,375,"Ce");
outtextxy(145,410,"Th");
outtextxy(180,375,"Pr");
outtextxy(180,410,"Pa");
outtextxy(215,375,"Nd");
outtextxy(215,410,"U");
outtextxy(250,375,"Pm");
outtextxy(250,410,"Np");
outtextxy(285,375,"Sm");
outtextxy(285,410,"Pu");
outtextxy(320,375,"Eu");
outtextxy(320,410,"Am");
outtextxy(355,375,"Gd");
outtextxy(355,410,"Cm");
outtextxy(390,375,"Tb");
outtextxy(390,410,"Bk");
outtextxy(425,375,"Dy");
outtextxy(425,410,"Cf");
outtextxy(460,375,"Ho");
outtextxy(460,410,"Es");
outtextxy(495,375,"Er");
outtextxy(495,410,"Fm");
outtextxy(530,375,"Tm");
outtextxy(530,410,"Md");
outtextxy(565,375,"Yb");
outtextxy(565,410,"No");
outtextxy(600,375,"Lu");
outtextxy(600,410,"Lr");
outtextxy(20,365,"Lanthanides--");
outtextxy(20,400,"Actinides----");
}


void fn2()
{int ct;
int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "E:\\TC\\BGI");
periodic p;


setcolor(6);
outtextxy(20,20, "The options are :1)S block 2)P block 3)D block 4)F block: ");
cout<<endl;
outtextxy(10,10, "Enter your choice :");
cin>>ct;
if(ct==1)
p.sblock();
else if(ct==2)
p.pblock();
else if(ct==3)
p.dblock();
else if(ct==4)
p.fblock();
else
outtextxy(20,20,"Invalid Choice");
getch();
closegraph();
getch();
}

char fn3(char a[])
{ clrscr();
  int gdriver = DETECT, gmode, errorcode;

initgraph(&gdriver, &gmode, "");
errorcode = graphresult();
   setbkcolor(BLUE);
  ifstream f("d:/periodic.txt");
  if(!f)
  {cout<<"Error!"<<endl;}
  char q[400],s[100]="";


  char r[50]="\nName: ";
  strcat(r,a);


  char ch;


   while(f.getline(q,375,'*'))
  {
   for(int i=0;q[i]!='.';i++)
   {s[i]=q[i];}
   s[i]='\0';
   if(strcmpi(s,r)==0)
   { settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
   setcolor(RED);
    outtextxy(40,20,"DETAILS");
    cout<<"\n\n";
    cout<<q<<endl;
    break; }

  }



 return(0);
}


char fn4a(char a[],char b[],char c[])
{
  clrscr();
  int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "");
errorcode = graphresult();
   setbkcolor(BLUE);
  ifstream f("d:/periodic.txt");
  if(!f)
  {cout<<"Error!"<<endl;}
  char q[400],s[100]="";
  char r[50]="\nName: ";
  strcat(r,a);
  int t=0;
  int ct=0;
  char a1[10],b1[10],c1[10];
  while(f.getline(q,375,'*'))
  {
    for(int i=0;q[i]!='.';i++)
       {s[i]=q[i];}
   s[i]='\0';
   if(strcmpi(s,r)==0)
   {
     for(int k=0;q[k]!='\0';k++)
     { if(q[k]=='a'&&q[k+1]=='m'&&q[k+2]=='u')
       {
       for(int j=k-1;q[j]!=':';j--)
       { ++t;
	}
       }
     }
     cout<<endl<<endl;
     for(k=0;q[k]!='\0';k++)
     { if(q[k]=='M'&&q[k+1]=='a'&&q[k+2]=='s'&&q[k+3]=='s')
       {
       for(int j=k+5,i=0;q[j]!='a';j++,i++)
       { a1[i]=q[j];}
	a1[i]='\0';
	gotoxy(2,8);
	cout<<a<<":"<<a1<<"u"<<endl<<endl;

       }
     }
    break;
    }
  }

  strcpy(r,"");
  strcpy(r,"\nName: ");
  strcat(r,b);

  f.seekg(0);
  while(f.getline(q,375,'*'))
  {
    for(int i=0;q[i]!='.';i++)
       {s[i]=q[i];}
   s[i]='\0';

   if(strcmpi(s,r)==0)
   {
     for(int k=0;q[k]!='\0';k++)
     { if(q[k]=='a'&&q[k+1]=='m'&&q[k+2]=='u')
       {
       for(int j=k-1;q[j]!=':';j--)
       { ++t;}

       }

     }
     for(k=0;q[k]!='\0';k++)
     { if(q[k]=='M'&&q[k+1]=='a'&&q[k+2]=='s'&&q[k+3]=='s')
       {
       for(int j=k+5,i=0;q[j]!='a';j++,i++)
       { b1[i]=q[j];}
	b1[i]='\0';
	gotoxy(2,9);
	cout<<b<<":"<<b1<<"u"<<endl<<endl;
	}

     }

    break;}

    }
  strcpy(r,"");
  strcpy(r,"\nName: ");
  strcat(r,c);

  f.seekg(0);
  while(f.getline(q,375,'*'))
  {
    for(int i=0;q[i]!='.';i++)
       {s[i]=q[i];}
   s[i]='\0';

   if(strcmpi(s,r)==0)
   {
     for(int k=0;q[k]!='\0';k++)
     { if(q[k]=='a'&&q[k+1]=='m'&&q[k+2]=='u')
       {
       for(int j=k-1;q[j]!=':';j--)
       { ++t;}

       }

     }
     for(k=0;q[k]!='\0';k++)
     { if(q[k]=='M'&&q[k+1]=='a'&&q[k+2]=='s'&&q[k+3]=='s')
       {
       for(int j=k+5,i=0;q[j]!='a';j++,i++)
       { c1[i]=q[j];}
	c1[i]='\0';
	gotoxy(2,10);
	cout<<c<<":"<<c1<<"u"<<endl<<endl<<endl;
	}

     }

    break;}

    }

     int h=0;
     double l=0,m=0,n=0;
     setcolor(RED);
     settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);

     outtextxy(0,0,"Orders!");


    for(int d=1;a1[d]!='.';d++)
     { h++; }
     //cout<<"h"<<h<<endl;

     if(h==1)
     {l=(a1[1]-48)*1;}
     if(h==2)
     {l=(a1[1]-48)*10 + (a1[2]-48)*1;}
     if(h==3)
     {l=(a1[1]-48)*100 + (a1[2]-48)*10 + (a1[3]-48)*1;}

      h=0;
      for(d=1;b1[d]!='.';d++)
     { h++; }
     //cout<<"h"<<h<<endl;
     if(h==1)
     {m=(b1[1]-48)*1;}
     if(h==2)
     {m=(b1[1]-48)*10 + (b1[2]-48)*1;}
     if(h==3)
     {m=(b1[1]-48)*100 + (b1[2]-48)*10 + (b1[3]-48)*1;}

      h=0;
      for(d=1;c1[d]!='.';d++)
     { h++; }
      //cout<<"h"<<h<<endl;
     if(h==1)
     {n=(c1[1]-48)*1;}
     if(h==2)
     {n=(c1[1]-48)*10 + (c1[2]-48)*1;}
     if(h==3)
     {n=(c1[1]-48)*100 + (c1[2]-48)*10 + (c1[3]-48)*1;}

      // cout<<l<<endl<<m<<endl<<n<<endl;
  if(l>m&&l>n&&m>n)
  {
  cout<<"\nOrder of Atomic Masses\n"<<endl;

  cout<<a<<" > "<<b<<" > "<<c<<endl;
   }
  if(l>m&&l>n&&n>m)
  {
  cout<<"Order of atomic masses"<<endl;
  cout<<a<<">"<<c<<">"<<b<<endl;
   }
  if(m>l&&m>n&&n>l)
  {
  cout<<"Order of atomic masses"<<endl;
  cout<<b<<">"<<c<<">"<<a<<endl;
   }
  if(m>l&&m>n&&l>n)
  {
  cout<<"Order of atomic masses"<<endl;
  cout<<b<<">"<<a<<">"<<c<<endl;
   }
  if(n>m&&n>l&&m>l)
  {
  cout<<"Order of atomic masses"<<endl;
  cout<<c<<">"<<b<<">"<<a<<endl;
   }
  if(n>m&&n>l&&l>m)
  {
  cout<<"Order of atomic masses"<<endl;
  cout<<c<<">"<<a<<">"<<b<<endl;
   }

    f.close();

}

char fn4b(char a[],char b[],char c[])
{  clrscr();
  int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "");
errorcode = graphresult();
   setbkcolor(BLUE);
   setcolor(RED);
     settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);

     {outtextxy(0,0,"Orders!");
      }

  ifstream f("d:/periodic.txt");
  if(!f)
  {cout<<"Error!"<<endl;}
  char q[400],s[100]="";
  char r[50]="\nName: ";
  strcat(r,a);

  int t=0;
  int ct=0;
  char a1[10],b1[10],c1[10];

  while(f.getline(q,375,'*'))
  {
    for(int i=0;q[i]!='.';i++)
       {s[i]=q[i];}
   s[i]='\0';
	cout<<endl<<endl;
     if(strcmpi(s,r)==0)
   {
     for(int k=0;q[k]!='\0';k++)
     { if(q[k]=='B'&&q[k+1]=='o'&&q[k+2]=='i'&&q[k+3]=='l'&&q[k+4]=='i'&&q[k+5]=='n'&&q[k+6]=='g')
       {
       k=k+15;
       for(int j=k,p=0;q[j]!='.';j++,p++)
       { ++t;
	 a1[p]=q[j];

	}
	a1[p]='\0';
	cout<<a<<":"<<a1<<" degeree celcius"<<endl<<endl;
       }
     }

       break;
       }

    }

    strcpy(r,"");
    strcpy(r,"\nName: ");
    strcat(r,b);
    strcpy(s,"");
    f.seekg(0);
   while(f.getline(q,375,'*'))
  {
    for(int i=0;q[i]!='.';i++)
       {s[i]=q[i];}
       s[i]='\0';

     if(strcmpi(s,r)==0)
   {
     for(int k=0;q[k]!='\0';k++)
     { if(q[k]=='B'&&q[k+1]=='o'&&q[k+2]=='i'&&q[k+3]=='l'&&q[k+4]=='i'&&q[k+5]=='n'&&q[k+6]=='g')
       {
       k=k+15;
       for(int j=k,p=0;q[j]!='.';j++,p++)
       { ++t;
	 b1[p]=q[j];

	}
	b1[p]='\0';
	cout<<b<<":"<<b1<<" degeree celcius"<<endl<<endl;
       }
     }

       break;
       }
      }


    strcpy(r,"");
    strcpy(r,"\nName: ");
    strcat(r,c);
    strcpy(s,"");
    f.seekg(0);
   while(f.getline(q,375,'*'))
  {
    for(int i=0;q[i]!='.';i++)
       {s[i]=q[i];}
   s[i]='\0';

     if(strcmpi(s,r)==0)
   {
     for(int k=0;q[k]!='\0';k++)
     { if(q[k]=='B'&&q[k+1]=='o'&&q[k+2]=='i'&&q[k+3]=='l'&&q[k+4]=='i'&&q[k+5]=='n'&&q[k+6]=='g')
       {
       k=k+15;
       for(int j=k,p=0;q[j]!='.';j++,p++)
       { ++t;
	 c1[p]=q[j];

	}
	c1[p]='\0';
	cout<<c<<":"<<c1<<" degeree celcius"<<endl<<endl;
       }
     }

       break;
       }


    }

   double l=0,m=0,n=0;
    int e,f1,g;
    e=strlen(a1);
    f1=strlen(b1);
    g=strlen(c1);

    if(a1[0]=='-')
    {
      if(e==4)
      { l=((a1[1]-48)*100+(a1[2]-48)*10+(a1[3]-48)*1);
      l=l-2*l;
      }
      if(e==3)
      {l=((a1[1]-48)*10+(a1[2]-48)*1);
      l=l-2*l;
      }
      if(e==2)
      {l=((a1[1]-48)*1);
       l=l-2*l;
       }
    }


    if(b1[0]=='-')
    {
      if(f1==4)
      { m=((b1[1]-48)*100+(b1[2]-48)*10+(b1[3]-48)*1);
      m=m-2*m;
      }
      if(f1==3)
      {m=((b1[1]-48)*10+(b1[2]-48)*1);
      m=m-2*m;
      }
      if(f1==2)
      {m=((b1[1]-48)*1);
       m=m-2*m;
       }
    }
    if(c1[0]=='-')
    {
      if(g==4)
      { n=((c1[1]-48)*100+(c1[2]-48)*10+(c1[3]-48)*1);
      n=n-2*n;
      }
      if(g==3)
      {n=((c1[1]-48)*10+(c1[2]-48)*1);
      n=n-2*n;
      }
      if(g==2)
      {n=((c1[1]-48)*1);
       n=n-2*n;
       }
    }


    if(a1[0]!='-')
    { if(e==4)
      {l=((a1[0]-48)*1000+(a1[1]-48)*100+(a1[2]-48)*10+(a1[3]-48)*1);}

      if(e==3)
      { l=((a1[0]-48)*100+(a1[1]-48)*10+(a1[2]-48)*1);

      }
      if(e==2)
      {l=((a1[0]-48)*10+(a1[1]-48)*1);

      }
      if(e==1)
      {l=((a1[0]-48)*1);

       }
    }


    if(b1[0]!='-')
    {  if(f1==4)
      {m=((b1[0]-48)*1000+(b1[1]-48)*100+(b1[2]-48)*10+(b1[3]-48)*1);}


      if(f1==3)
      { m=((b1[0]-48)*100+(b1[1]-48)*10+(b1[2]-48)*1);

      }
      if(f1==2)
      {m=((b1[0]-48)*10+(b1[1]-48)*1);

      }
      if(f1==1)
      {m=((b1[0]-48)*1);

       }
    }
    if(c1[0]!='-')
    {  if(g==4)
      {n=((c1[0]-48)*1000+(c1[1]-48)*100+(c1[2]-48)*10+(c1[3]-48)*1);}


      if(g==3)
      { n=((c1[0]-48)*100+(c1[1]-48)*10+(c1[2]-48)*1);

      }
      if(g==2)
      {n=((c1[0]-48)*10+(c1[1]-48)*1);

      }
      if(g==1)
      {n=((c1[0]-48)*1);

       }
    }

    if(l>m&&l>n&&m>n)
  {
  cout<<"\nOrder of Boiling Point\n"<<endl;

  cout<<a<<" > "<<b<<" > "<<c<<endl;
   }
  if(l>m&&l>n&&n>m)
  {
  cout<<"Order of Boiling Point"<<endl;
  cout<<a<<">"<<c<<">"<<b<<endl;
   }
  if(m>l&&m>n&&n>l)
  {
  cout<<"Order of Boiling Point"<<endl;
  cout<<b<<">"<<c<<">"<<a<<endl;
   }
  if(m>l&&m>n&&l>n)
  {
  cout<<"Order of Boiling Point"<<endl;
  cout<<b<<">"<<a<<">"<<c<<endl;
   }
  if(n>m&&n>l&&m>l)
  {
  cout<<"Order of Boiling Point"<<endl;
  cout<<c<<">"<<b<<">"<<a<<endl;
   }
  if(n>m&&n>l&&l>m)
  {
  cout<<"Order of Boiling Point"<<endl;
  cout<<c<<">"<<a<<">"<<b<<endl;
   }
     f.close();
  }



char fn4c(char a[],char b[],char c[])
{  clrscr();
  int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "");
errorcode = graphresult();
   setbkcolor(BLUE);
   setcolor(RED);
     settextstyle(DEFAULT_FONT, HORIZ_DIR,3);

     {outtextxy(0,0,"Orders!");
      ;}

  ifstream f("d:/periodic.txt");
  if(!f)
  {cout<<"Error!"<<endl;}
  char q[400],s[100]="";
  char r[50]="\nName: ";
  strcat(r,a);

  int t=0;
  int ct=0;
  char a1[10],b1[10],c1[10];

  while(f.getline(q,375,'*'))
  {
    for(int i=0;q[i]!='.';i++)
       {s[i]=q[i];}
   s[i]='\0';
    cout<<endl<<endl;
     if(strcmpi(s,r)==0)
   {
     for(int k=0;q[k]!='\0';k++)
     { if(q[k]=='M'&&q[k+1]=='e'&&q[k+2]=='l'&&q[k+3]=='t'&&q[k+4]=='i'&&q[k+5]=='n'&&q[k+6]=='g')
       {
       k=k+15;
       for(int j=k,p=0;q[j]!='.';j++,p++)
       { ++t;
	 a1[p]=q[j];

	}
	a1[p]='\0';
	cout<<a<<":"<<a1<<" degeree celcius"<<endl<<endl;
       }
     }

       break;
       }

    }

    strcpy(r,"");
    strcpy(r,"\nName: ");
    strcat(r,b);
    strcpy(s,"");
    f.seekg(0);
   while(f.getline(q,375,'*'))
  {
    for(int i=0;q[i]!='.';i++)
       {s[i]=q[i];}
       s[i]='\0';

     if(strcmpi(s,r)==0)
   {
     for(int k=0;q[k]!='\0';k++)
     { if(q[k]=='M'&&q[k+1]=='e'&&q[k+2]=='l'&&q[k+3]=='t'&&q[k+4]=='i'&&q[k+5]=='n'&&q[k+6]=='g')
       {
       k=k+15;
       for(int j=k,p=0;q[j]!='.';j++,p++)
       { ++t;
	 b1[p]=q[j];

	}
	b1[p]='\0';
	cout<<b<<":"<<b1<<" degeree celcius"<<endl<<endl;
       }
     }

       break;
       }
      }


    strcpy(r,"");
    strcpy(r,"\nName: ");
    strcat(r,c);
    strcpy(s,"");
    f.seekg(0);
   while(f.getline(q,375,'*'))
  {
    for(int i=0;q[i]!='.';i++)
       {s[i]=q[i];}
   s[i]='\0';

     if(strcmpi(s,r)==0)
   {
     for(int k=0;q[k]!='\0';k++)
     { if(q[k]=='M'&&q[k+1]=='e'&&q[k+2]=='l'&&q[k+3]=='t'&&q[k+4]=='i'&&q[k+5]=='n'&&q[k+6]=='g')
       {
       k=k+15;
       for(int j=k,p=0;q[j]!='.';j++,p++)
       { ++t;
	 c1[p]=q[j];

	}
	c1[p]='\0';
	cout<<c<<":"<<c1<<" degeree celcius"<<endl<<endl;
       }
     }

       break;
       }


    }

   double l=0,m=0,n=0;
    int e,f1,g;
    e=strlen(a1);
    f1=strlen(b1);
    g=strlen(c1);

    if(a1[0]=='-')
    {
      if(e==4)
      { l=((a1[1]-48)*100+(a1[2]-48)*10+(a1[3]-48)*1);
      l=l-2*l;
      }
      if(e==3)
      {l=((a1[1]-48)*10+(a1[2]-48)*1);
      l=l-2*l;
      }
      if(e==2)
      {l=((a1[1]-48)*1);
       l=l-2*l;
       }
    }


    if(b1[0]=='-')
    {
      if(f1==4)
      { m=((b1[1]-48)*100+(b1[2]-48)*10+(b1[3]-48)*1);
      m=m-2*m;
      }
      if(f1==3)
      {m=((b1[1]-48)*10+(b1[2]-48)*1);
      m=m-2*m;
      }
      if(f1==2)
      {m=((b1[1]-48)*1);
       m=m-2*m;
       }
    }
    if(c1[0]=='-')
    {
      if(g==4)
      { n=((c1[1]-48)*100+(c1[2]-48)*10+(c1[3]-48)*1);
      n=n-2*n;
      }
      if(g==3)
      {n=((c1[1]-48)*10+(c1[2]-48)*1);
      n=n-2*n;
      }
      if(g==2)
      {n=((c1[1]-48)*1);
       n=n-2*n;
       }
    }


    if(a1[0]!='-')
    { if(e==4)
      {l=((a1[0]-48)*1000+(a1[1]-48)*100+(a1[2]-48)*10+(a1[3]-48)*1);}

      if(e==3)
      { l=((a1[0]-48)*100+(a1[1]-48)*10+(a1[2]-48)*1);

      }
      if(e==2)
      {l=((a1[0]-48)*10+(a1[1]-48)*1);

      }
      if(e==1)
      {l=((a1[0]-48)*1);

       }
    }


    if(b1[0]!='-')
    {  if(f1==4)
      {m=((b1[0]-48)*1000+(b1[1]-48)*100+(b1[2]-48)*10+(b1[3]-48)*1);}


      if(f1==3)
      { m=((b1[0]-48)*100+(b1[1]-48)*10+(b1[2]-48)*1);

      }
      if(f1==2)
      {m=((b1[0]-48)*10+(b1[1]-48)*1);

      }
      if(f1==1)
      {m=((b1[0]-48)*1);

       }
    }
    if(c1[0]!='-')
    {  if(g==4)
      {n=((c1[0]-48)*1000+(c1[1]-48)*100+(c1[2]-48)*10+(c1[3]-48)*1);}


      if(g==3)
      { n=((c1[0]-48)*100+(c1[1]-48)*10+(c1[2]-48)*1);

      }
      if(g==2)
      {n=((c1[0]-48)*10+(c1[1]-48)*1);

      }
      if(g==1)
      {n=((c1[0]-48)*1);

       }
    }

    if(l>m&&l>n&&m>n)
  {
  cout<<"\nOrder of Melting Point\n"<<endl;
  cout<<a<<" > "<<b<<" > "<<c<<endl;
   }
  if(l>m&&l>n&&n>m)
  {
  cout<<"\nOrder of Melting Point\n"<<endl;
  cout<<a<<">"<<c<<">"<<b<<endl;
   }
  if(m>l&&m>n&&n>l)
  {
  cout<<"\nOrder of Melting Point\n"<<endl;
  cout<<b<<">"<<c<<">"<<a<<endl;
   }
  if(m>l&&m>n&&l>n)
  {
  cout<<"\nOrder of Melting Point\n"<<endl;
  cout<<b<<">"<<a<<">"<<c<<endl;
   }
  if(n>m&&n>l&&m>l)
  {
  cout<<"\nOrder of Melting Point\n"<<endl;
  cout<<c<<">"<<b<<">"<<a<<endl;
   }
  if(n>m&&n>l&&l>m)
  {
  cout<<"\nOrder of Melting Point\n"<<endl;
  cout<<c<<">"<<a<<">"<<b<<endl;
   }
   f.close();
  }

 void fn4d(char a[],char b[],char c[])
{  clrscr();
  double p,q,r;
  int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "");
errorcode = graphresult();
   setbkcolor(BLUE);
   setcolor(RED);
     settextstyle(DEFAULT_FONT, HORIZ_DIR,3);

     {outtextxy(0,0,"Orders!");
      ;}

  ifstream f("d:/elec.txt");
  if(!f)
  {cout<<"Error!"<<endl;}

   char s[500]="";
   char A[100]="";
   strcat(A,"\n");
   strcat(A,a);
   char a1[20];

   cout<<endl<<endl;
   while(f.getline(s,100,'*'))
   {
     if(strcmpi(A,s)==0)
      {
       f.getline(a1,10,'*');
	break;}

   }

   int k=strlen(a1);

   if(a1[0]!='N')
   {
   p=(a1[0]-48);

   int ct=1;
   if(k==3)
   {
    p=p+((a1[2]-48)/10.0);

   }
   if(k==4)
   { p=p+((a1[2]-48)/10.0);
     p=p+((a1[3]-48)/100.0);
       }
  }
  else
  {p=0;}

  {
    char A[100]="";
   strcat(A,"\n");
   strcat(A,b);
   char a1[20];

   f.seekg(0);
   while(f.getline(s,100,'*'))
   {
     if(strcmpi(A,s)==0)
      {
       f.getline(a1,10,'*');
	break;}

   }

   int k=strlen(a1);
   if(a1[0]!='N')
  {
   q=(a1[0]-48);

   int ct=1;
   if(k==3)
   {
    q=q+((a1[2]-48)/10.0);

   }
   if(k==4)
   { q=q+((a1[2]-48)/10.0);
     q=q+((a1[3]-48)/100.0);
   }
  }
  else
  {q=0;}
 }


  {
    char A[100]="";
   strcat(A,"\n");
   strcat(A,c);
   char a1[20];

   f.seekg(0);
   while(f.getline(s,100,'*'))
   {
     if(strcmpi(A,s)==0)
      {
       f.getline(a1,10,'*');
	break;}

   }

   int k=strlen(a1);
   if(a1[0]!='N')
   {
   r=(a1[0]-48);

   int ct=1;
   if(k==3)
   {
    r=r+((a1[2]-48)/10.0);

   }
   if(k==4)
   { r=r+((a1[2]-48)/10.0);
     r=r+((a1[3]-48)/100.0);
       }

  }
  else
  {r=0;}
 }
  cout<<a<<": "<<p<<endl;
  cout<<b<<": "<<q<<endl;
  cout<<c<<": "<<r<<endl;
  double l,m,n;
  l=p; m=q; n=r;
  if(l>m&&l>n&&m>n)
  {
  cout<<"\nOrder of Electronegativity\n"<<endl;
  cout<<a<<" > "<<b<<" > "<<c<<endl;
   }
  if(l>m&&l>n&&n>m)
  {
  cout<<"\nOrder of Electronegativity\n"<<endl;
  cout<<a<<" > "<<c<<" > "<<b<<endl;
   }
  if(m>l&&m>n&&n>l)
  {
  cout<<"\nOrder of Electronegativity\n"<<endl;
  cout<<b<<" > "<<c<<" > "<<a<<endl;
   }
  if(m>l&&m>n&&l>n)
  {
  cout<<"\nOrder of Electronegativity\n"<<endl;
  cout<<b<<" > "<<a<<" > "<<c<<endl;
   }
  if(n>m&&n>l&&m>l)
  {
  cout<<"\nOrder of Electronegativity\n"<<endl;
  cout<<c<<" > "<<b<<" > "<<a<<endl;
   }
  if(n>m&&n>l&&l>m)
  {
  cout<<"\nOrder of Electronegativity\n"<<endl;
  cout<<c<<" > "<<a<<" > "<<b<<endl;
   }

  f.close();
}


void fn4e(char a[],char b[],char c[])
{  clrscr();
  int gdriver = DETECT, gmode, errorcode;
initgraph(&gdriver, &gmode, "");
errorcode = graphresult();
   setbkcolor(BLUE);
    setcolor(RED);
     settextstyle(DEFAULT_FONT, HORIZ_DIR,3);

     {outtextxy(0,0,"Orders!");
      }

  ifstream f("d:/ion.txt");
  if(!f)
  {cout<<"Error!"<<endl;}
   double p,q,r;
   char s[500]="";
   char A[100]="";
   strcat(A,"\n");
   strcat(A,a);
   char a1[20];

   cout<<endl<<endl;
   while(f.getline(s,100,'*'))
   {
     if(strcmpi(A,s)==0)
      {
       f.getline(a1,10,'*');

	break;}

   }

   int k=strlen(a1);
   if(a1[0]!='N')
   {

   int ct=0;
   for(int i=0;a1[i]!='.';i++)
   { ++ct; }

   if(ct==1)
   {p=(a1[0]-48);}
    if(ct==2)
   {p=(a1[0]-48)*10 +(a1[1]-48); }


    int ct1=0;
   for(i=ct+1;a1[i]!='\0';i++)
   { ++ct1; }

   if(ct1==4&&ct==1)
   {p=p+((a1[2]-48)/10.0) + ((a1[3]-48)/100.0) + ((a1[4]-48)/1000.0) + ((a1[5]-48)/10000.0); }
   if(ct1==4&&ct==2)
   {p=p+((a1[3]-48)/10.0) + ((a1[4]-48)/100.0) + ((a1[5]-48)/1000.0) + ((a1[6]-48)/10000.0); }
   if(ct1==3&&ct==1)
   {p=p+((a1[2]-48)/10.0) + ((a1[3]-48)/100.0) + ((a1[4]-48)/1000.0); }
   if(ct1==3&&ct==2)
   {p=p+((a1[3]-48)/10.0) + ((a1[4]-48)/100.0) + ((a1[5]-48)/1000.0); }
   if(ct1==2&&ct==1)
   {p=p+((a1[2]-48)/10.0) + ((a1[3]-48)/100.0); }
   if(ct1==2&&ct==2)
   {p=p+((a1[3]-48)/10.0) + ((a1[4]-48)/100.0); }
   if(ct1==1&&ct==1)
   {p=p+((a1[2]-48)/10.0); }
   if(ct1==1&&ct==2)
   {p=p+((a1[3]-48)/10.0); }

   }
   else
   {p=0;}


   { char s[500]="";
   char A[100]="";
   strcat(A,"\n");
   strcat(A,b);
   char a1[20];

    f.seekg(0);
   while(f.getline(s,100,'*'))
   {
     if(strcmpi(A,s)==0)
      {
       f.getline(a1,10,'*');

	break;}

   }

   int k=strlen(a1);
   if(a1[0]!='N')
   {
   int ct=0;
   for(int i=0;a1[i]!='.';i++)
   { ++ct; }

   if(ct==1)
   {q=(a1[0]-48);}
    if(ct==2)
   {q=(a1[0]-48)*10 +(a1[1]-48); }
    int ct1=0;
   for(i=ct+1;a1[i]!='\0';i++)
   { ++ct1; }

   if(ct1==4&&ct==1)
   {q=q+((a1[2]-48)/10.0) + ((a1[3]-48)/100.0) + ((a1[4]-48)/1000.0) + ((a1[5]-48)/10000.0); }
   if(ct1==4&&ct==2)
   {q=q+((a1[3]-48)/10.0) + ((a1[4]-48)/100.0) + ((a1[5]-48)/1000.0) + ((a1[6]-48)/10000.0); }
   if(ct1==3&&ct==1)
   {q=q+((a1[2]-48)/10.0) + ((a1[3]-48)/100.0) + ((a1[4]-48)/1000.0); }
   if(ct1==3&&ct==2)
   {q=q+((a1[3]-48)/10.0) + ((a1[4]-48)/100.0) + ((a1[5]-48)/1000.0); }
   if(ct1==2&&ct==1)
   {q=q+((a1[2]-48)/10.0) + ((a1[3]-48)/100.0); }
   if(ct1==2&&ct==2)
   {q=q+((a1[3]-48)/10.0) + ((a1[4]-48)/100.0); }
   if(ct1==1&&ct==1)
   {q=q+((a1[2]-48)/10.0); }
   if(ct1==1&&ct==2)
   {q=q+((a1[3]-48)/10.0); }

   }
   else
   {q=0;}
   }

  {
   char s[500]="";
   char A[100]="";
   strcat(A,"\n");
   strcat(A,c);
   char a1[20];

   f.seekg(0);
   while(f.getline(s,100,'*'))
   {
     if(strcmpi(A,s)==0)
      {
       f.getline(a1,10,'*');

	break;}

   }

   int k=strlen(a1);
   if(a1[0]!='N')
   {
   int ct=0;
   for(int i=0;a1[i]!='.';i++)
   { ++ct; }

   if(ct==1)
   {r=(a1[0]-48);}
    if(ct==2)
   {r=(a1[0]-48)*10 +(a1[1]-48); }


    int ct1=0;
   for(i=ct+1;a1[i]!='\0';i++)
   { ++ct1; }

   if(ct1==4&&ct==1)
   {r=r+((a1[2]-48)/10.0) + ((a1[3]-48)/100.0) + ((a1[4]-48)/1000.0) + ((a1[5]-48)/10000.0); }
   if(ct1==4&&ct==2)
   {r=r+((a1[3]-48)/10.0) + ((a1[4]-48)/100.0) + ((a1[5]-48)/1000.0) + ((a1[6]-48)/10000.0); }
   if(ct1==3&&ct==1)
   {r=r+((a1[2]-48)/10.0) + ((a1[3]-48)/100.0) + ((a1[4]-48)/1000.0); }
   if(ct1==3&&ct==2)
   {r=r+((a1[3]-48)/10.0) + ((a1[4]-48)/100.0) + ((a1[5]-48)/1000.0); }
   if(ct1==2&&ct==1)
   {r=r+((a1[2]-48)/10.0) + ((a1[3]-48)/100.0); }
   if(ct1==2&&ct==2)
   {r=r+((a1[3]-48)/10.0) + ((a1[4]-48)/100.0); }
   if(ct1==1&&ct==1)
   {r=r+((a1[2]-48)/10.0); }
   if(ct1==1&&ct==2)
   {r=r+((a1[3]-48)/10.0); }
  }
  else
  {r=0;}

  }

  cout<<a<<": "<<p<<"eV"<<endl;
  cout<<b<<": "<<q<<"eV"<<endl;
  cout<<c<<": "<<r<<"eV"<<endl;
  double l,m,n;
  l=p; m=q; n=r;
  if(l>m&&l>n&&m>n)
  {
  cout<<"\nOrder of Ionization enthalpy \n"<<endl;
  cout<<a<<" > "<<b<<" > "<<c<<endl;
   }
  if(l>m&&l>n&&n>m)
  {
  cout<<"\nOrder of Ionization enthalpy\n"<<endl;
  cout<<a<<" > "<<c<<" > "<<b<<endl;
   }
  if(m>l&&m>n&&n>l)
  {
  cout<<"\nOrder of Ionization enthalpy\n"<<endl;
  cout<<b<<" > "<<c<<" > "<<a<<endl;
   }
  if(m>l&&m>n&&l>n)
  {
  cout<<"\nOrder of Ionization enthalpy\n"<<endl;
  cout<<b<<" > "<<a<<" > "<<c<<endl;
   }
  if(n>m&&n>l&&m>l)
  {
  cout<<"\nOrder of Ionization enthalpy\n"<<endl;
  cout<<c<<" > "<<b<<" > "<<a<<endl;
   }
  if(n>m&&n>l&&l>m)
  {
  cout<<"\nOrder of Ionization enthalpy\n"<<endl;
  cout<<c<<" > "<<a<<" > "<<b<<endl;
   }

  f.close();

}

void fn5()
{
 clrscr();
int gdriver = DETECT, gmode, errorcode;

initgraph(&gdriver, &gmode, "");
errorcode = graphresult();
/*int y=1;
char s[]="4";
outtextxy(1,y,s);

moveto(20,20);
outtextxy(20,20,s);
*/

setbkcolor(RED);
settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
setcolor(BLUE);
outtextxy(10,20,"Quiz!!");

int i;

strcpy(a.ques,"\n\n\n1) Who is the discoverer of the modern periodic table?");
strcpy(a.ans,"Henry Moseley");

quizgen();

quizdisp();
strcpy(a.ques,"2) What is the number of groups in  the modern periodic table?");
strcpy(a.ans,"18");
quizgen();
quizdisp();
strcpy(a.ques,"3) Which block consists of radioactive elements in the modern periodic table?");
strcpy(a.ans,"f block");
quizgen();
quizdisp();
strcpy(a.ques,"4) W is the symbol for which element in  the modern periodic table?");
strcpy(a.ans,"Tungsten");
quizgen();
quizdisp();
strcpy(a.ques,"5) Which is the densest element of the modern periodic table?");
strcpy(a.ans,"Osmium");
quizgen();
quizdisp();
strcpy(a.ques,"6) Who discovered the element Neon?");
strcpy(a.ans,"Ramsay");
quizgen();
quizdisp();
strcpy(a.ques,"7) What is the most commonly used bleaching reagent?");
strcpy(a.ans,"Chlorine");
quizgen();
quizdisp();
strcpy(a.ques,"8) What are the nuclear particles which are assumed to hold the nucleons together?");
strcpy(a.ans,"Mesons");
quizgen();
quizdisp();
strcpy(a.ques,"9) What ore is found in abundance in India?");
strcpy(a.ans,"Monazite");
quizgen();
quizdisp();
strcpy(a.ques,"10) What is the main chemical constituent of clay?");
strcpy(a.ans,"Aluminium silicate");
quizgen();
quizdisp();

clrscr();
cleardevice();

setbkcolor(YELLOW);

settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
outtextxy(50,50," Your Score is");
int p=count;
count=count+48;
char ch[3];
ch[0]=' ';
ch[1]=count;
ch[2]='\0';

if(p>=6)
{
setcolor(GREEN);
outtextxy(100,100,ch);
outtextxy(160,100,"/10");
outtextxy(180,150,"Good job!");
}

if(p<=5)
{
setcolor(RED);
outtextxy(100,100,ch);
outtextxy(160,100,"/10");
settextstyle(DEFAULT_FONT, HORIZ_DIR, 3.5);
outtextxy(20,150,"Better luck next time!");
}


getch();
closegraph();

}

void main()
{   clrscr();
int gdriver = DETECT, gmode, errorcode;

initgraph(&gdriver, &gmode,"");
errorcode = graphresult();
/*int y=1;
char s[]="4";
outtextxy(1,y,s);

moveto(20,20);
outtextxy(20,20,s);
*/

setbkcolor(GREEN);
settextstyle(7, HORIZ_DIR, 8);
for(int u=1;u<10;u++)
{setcolor(u);
outtextxy(150,100,"PERIODIC");
outtextxy(200,200,"TABLE");
delay(200);
}
getch();
clrscr();
cleardevice();
setbkcolor(BLACK);
settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
setcolor(BLUE);
char ch;

do
{

outtextxy(0,40,"Options");
settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
outtextxy(0,80," 1) Display the Table");
outtextxy(0,120," 2) Display one block");
outtextxy(0,160," 3) View more details");
outtextxy(0,200," 4) Choose 3 elements");
outtextxy(0,240," 5) Quiz?");
outtextxy(0,280," 6) Exit");


    periodic p;
gotoxy(100,100);

cin>>ch;
char ch1;
if(ch=='1')
{p.showtable();
getch();
 clrscr();}
if(ch=='2')
{fn2();
getch();
 clrscr();
}

if(ch=='3')
{  char s[30];
  outtextxy(0,370,"Choose an element");
  gotoxy(18,27);
 {cout<<"\n";
 gets(s);
 }
 fn3(s);
 getch();
 clrscr();
}

if(ch=='4')
{ char s1[50],s2[50],s3[50];
 outtextxy(0,370,"Type out the elements");
  gotoxy(18,25);
 {cout<<"\n";
 gets(s1);
 gets(s2);
 gets(s3);
 cleardevice();
 setbkcolor(LIGHTRED);
 char ch1;
 outtextxy(20,100,"Which order do you want ");
 outtextxy(20,130," them arranged in?");
 settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
 outtextxy(100,170,"1)Atomic mass");
 outtextxy(100,190,"2)Boiling piont");
 outtextxy(100,210,"3)Melting point");
 outtextxy(100,230,"4)Electronegativity");
 outtextxy(100,250,"5)Ionization enthalpy");
 gotoxy(2,2);
 cin>>ch1;
  if(ch1=='1')
 {fn4a(s1,s2,s3);}
  if(ch1=='2')
 {fn4b(s1,s2,s3);}
  if(ch1=='3')
 {fn4c(s1,s2,s3);}
  if(ch1=='4')
 {fn4d(s1,s2,s3);}
 if(ch1=='5')
 {fn4e(s1,s2,s3);}
 }
 getch();
 clrscr();
}

if(ch=='5')
{fn5();
getch();
 clrscr();}
}while(ch!='6');

getch();
closegraph();
}
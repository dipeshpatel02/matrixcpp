#include<iostream>
#include<conio>

class matrix
{
int x[10][10],y[10][10];
int add[10][10],mult[10][10],trans[10][10],subtr[10][10];
int join[10][10], meet[10][10];
int m,n,i,j,p,q,k;
//int d,rs,cs,ds,inv[10][10];
public:
void getmat1();
void getmat2();
//void showmat();
void showmat1();
void showmat2();
void addmat();
void subtrmat();
void multmat();
void transmat();
void rscsdsmat();
void invmat();
void determat();
void joinmat();
void meetmat();
};

void matrix::getmat1()   //accept value for matrix X
{
cout<<"\n enter numbr of rows and columns respectively for first matrix X ";
cin>>m>>n;
cout<<"\n enter elements of first matrix X "<<endl;
for(i=1;i<=m;i++)
  {
  for(j=1;j<=n;j++)
   {
   cin>>x[i][j];
   }
  }
}

void matrix::getmat2()   //accept value for matrix Y
{
cout<<"\n enter numbr of rows and columns respectively for second matrix Y ";
cin>>p>>q;
cout<<"\n enter elements of second matrix Y "<<endl;
for(i=1;i<=p;i++)
  {
  for(j=1;j<=q;j++)
   {
   cin>>y[i][j];
   }
  }
}

void matrix::showmat1()     //display matrix X
{
cout<<"\n the matrix X is "<<endl;
for(i=1;i<=m;i++)
  {
  for(j=1;j<=n;j++)
   {
   cout<<"\t"<<x[i][j];
   }
  cout<<"\n";
  }
}

void matrix::showmat2()     //display matrix Y
{
cout<<"\n the matrix Y is "<<endl;
for(i=1;i<=p;i++)
 {
 for(j=1;j<=q;j++)
  {
  cout<<"\t"<<y[i][j];
  }
 cout<<"\n";
 }
}

void matrix::addmat()    //for addition
{
 if((m==p)&&(n==q))
 {
 for(i=1;i<=m;i++)
  {
  for(j=1;j<=n;j++)
   {
   add[i][j]=x[i][j]+y[i][j];
   }
  }
 cout<<"\n X + Y= "<<endl;
 for(i=1;i<=m;i++)
  {
  for(j=1;j<=n;j++)
   {
   cout<<"\t"<<add[i][j];
   }
  cout<<"\n";
  }
 }
 else
 {
 cout<<"\n matrix can't be added";
 }
}

void matrix::subtrmat()    //For subtraction
{
 if((m==p)&&(n==q))
 {
 for(i=1;i<=m;i++)
  {
  for(j=1;j<=n;j++)
   {
   add[i][j]=x[i][j]-y[i][j];
   }
  }
 cout<<"\n X - Y= "<<endl;
 for(i=1;i<=m;i++)
  {
  for(j=1;j<=n;j++)
   {
   cout<<"\t"<<subtr[i][j];
   }
  cout<<"\n";
  }
 }
 else
 {
 cout<<"\n matrix can't be subtracted";
 }
}

void matrix::multmat()   //For multiplication
{
 if(n==p)
 {
 for(i=1;i<=m;i++)
  {
  for(j=1;j<=q;j++)
  {
   for(k=1;k<=n;k++)
    {
    mult[i][j]=0;
    mult[i][j]+=x[i][k]*y[k][j];
    }
   }
  }
 cout<<"\n X x Y= "<<endl;
 for(i=1;i<=m;i++)
  {
  for(j=1;j<=q;j++)
   {
   cout<<"\t"<<mult[i][j];
   }
  cout<<"\n";
  }
 }
 else
 {
 cout<<"\n matrix can't be multiplied";
 }
}

void matrix::transmat()   //for transpose of matrix
{
 if(m==n)
 {
 for(i=1;i<=m;i++)
  {
  for(j=1;j<=n;j++)
   {
   trans[i][j]=x[j][i];
   }
  }
 cout<<"\n transpose of X "<<endl;
 for(i=1;i<=m;i++)
  {
  for(j=1;j<=n;j++)
   {
   cout<<"\t"<<trans[i][j];
   }
  cout<<"\n";
  }
  if(trans[i][j]==x[i][j])
   {
   cout<<"\n matrix X is symmetric";
   }
   else if(trans[i][j]==-x[i][j])
   {
   cout<<"\n matrix X is skew symmetric";
   }
   else
   {
   cout<<"\n matrix X is neither symmetric nor skew summetric";
   }
 }

 else
 {
 cout<<"\n the matrix can't be transposed";
 }
}

void matrix::rscsdsmat()
{
//rs,cs,ds;
 cout<<"\n not availaible right now";
}

void matrix::determat()
{
//d;
 cout<<"\n not availaible right now";
}

void matrix::invmat()
{
//inv[10][10];
 cout<<"\n not available right now";
}

void matrix::joinmat()
{
 if (m==p && n==q)
 {
 for(i=1;i<=m;i++)
   {
   for(j=1;j<=n;j++)
    {
     if((x[i][j]==1 || x[i][j]==0) && (y[i][j]==1 || y[i][j]==0))
     {
      join[i][j]=x[i][j]+y[i][j];
	  if (join[i][j]!=0)
		  join[i][j]=1;
     }
     else
	 {
     goto invalid;
	 }
    }
   }
 cout<<"\n join of X and Y is:"<<endl;
 for(i=1;i<=m;i++)
  {
   for(j=1;j<=n;j++)
   {
    cout<<"\t"<<join[i][j];
   }
   cout<<"\n";
  }
 }
 else
 {
 invalid:
 cout<<"\n the matrix can't be joined";
 }
}

void matrix::meetmat()
{
 if (m==p && n==q)
 {
 for(i=1;i<=m;i++)
   {
   for(j=1;j<=n;j++)
    {
     if((x[i][j]==1 || x[i][j]==0) && (y[i][j]==1 || y[i][j]==0))
     {
      meet[i][j]=x[i][j]*y[i][j];
	   if (meet[i][j]!=0)
		  meet[i][j]=1;
     }
     else
	 {
     goto invalid;
	 }
    }
   }
 cout<<"\n meet of X and Y is:"<<endl;
 for(i=1;i<=m;i++)
  {
   for(j=1;j<=n;j++)
   {
    cout<<"\t"<<meet[i][j];
   }
   cout<<"\n";
  }
 }
 else
 {
 invalid:
 cout<<"\n the matrix can't be joined";
 }
}

void main()
{
int z;
char q;
matrix w;
start:
clrscr();
cout<<"\n which matrix operation do you want to perform? \n press";
cout<<"\n 1 for ADDITION \n 2 for SUBTRACTION \n 3 for MULTIPLICATOION";
cout<<"\n 4 for TRANSPOSE \n 5 for DETERMINANT \n 6 for INVERSE";
cout<<"\n 7 for ROW,COLUMN,DIAGONAL SUM \n 8 for JOIN \n 9 for MEET ---";
cin>>z;
switch(z)
{
case 1:
	   w.getmat1();
	   w.getmat2();
	   w.showmat1();
	   w.showmat2();
	   w.addmat();
	   break;
case 2:
	   w.getmat1();
	   w.getmat2();
	   w.showmat1();
	   w.showmat2();
	   w.subtrmat();
	   break;
case 3:
	   w.getmat1();
	   w.getmat2();
	   w.showmat1();
	   w.showmat2();
	   w.multmat();
	   break;
case 4:
	   w.getmat1();
	   w.showmat1();
	   w.transmat();
	   break;
case 5:
       w.getmat1();
       w.showmat1();
       w.determat();
       break;
case 6:
       w.getmat1();
       w.showmat1();
       w.invmat();
       break;
case 7:
       w.getmat1();
       w.showmat1();
       w.rscsdsmat();
       break;
case 8:
       w.getmat1();
	   w.getmat2();
	   w.showmat1();
	   w.showmat2();
	   w.joinmat();
	   break;

case 9:
       w.getmat1();
	   w.getmat2();
	   w.showmat1();
	   w.showmat2();
	   w.meetmat();
	   break;
default:
       cout<<"\n invalid, try again ";
}
cout<<"\n do you want to continue? enter y for yes ";
cin>>q;
while(q=='y')
{
goto start;
}
cout<<"\n thank you ";
return 0;
}

//Universal Set is {1,2,3,4,5,6,7,8,9}
#include <stdio.h>
void input();
void output();
void setunion();
void intersection();
void difference();
int a[]={0,0,0,0,0,0,0,0,0},b[]={0,0,0,0,0,0,0,0,0};
int c[]={0,0,0,0,0,0,0,0,0};
int main()
 {
  int ch,wish;
  do
   {
  printf("\n___MENU_\n");
  printf("1.INPUT\n2.UNION\n3.INTERSECTION\n4.DIFFERENCE\n");
  printf("ENTER CHOICE : ");
  scanf("%d",&ch);
  switch(ch)
   {
     case 1:input();
	    break;
     case 2:setunion();
	    break;
     case 3:intersection();
	    break;
     case 4:difference();
	    break;
   }
   printf("\nDO YOU WANT TO CONTINUE?(1/0) : ");
  scanf("%d",&wish);
   }while(wish==1);
 }
void input()
{
  int n,x,i;
  printf("\nENTER SIZE OF FIRST SET : ");
  scanf("%d",&n);
  printf("\nENTER ELEMENTS : \t");
  for(i=1;i<=n;i++)
  {
      scanf("%d",&x);
      a[x]=1;
  }
  printf("\nENTER SIZE OF SECOND SET : ");
  scanf("%d",&n);
  printf("\nENTER ELEMENTS : \t");
  for(i=1;i<=n;i++)
  {
      scanf("%d",&x);
      b[x]=1;
  }
  printf("\nFIRST SET : \t");
  for(i=1;i<=9;i++)
   {
    printf("%d",a[i]);
   }
   printf("\nSECOND SET : \t");
   for(i=1;i<=9;i++)
   {
   printf("%d",b[i]);
   }
}
void output(int c[])
{
    int i;
    printf("\nSET IS : \t");
    for(i=1;i<=9;i++)
    {
       if (c[i]!=0)
       printf("%d\t",i);
    }
   
}
void setunion()
{
  int i,c[10];
  for(i=1;i<=9;i++) 
    {
    if(a[i]!=b[i])
         c[i]=1;
    else
      c[i]=a[i];
    }
  for(i=1;i<=9;i++)  
   {
   printf("%d",c[i]);
   }
   output(c);
}
void intersection()
{
  int i,c[10];
  for(i=1;i<=9;i++)
    {
    if (a[i]==b[i])
	 c[i]=a[i];
    else
	 c[i]=0;
    }
  for(i=1;i<=9;i++)
   {
   printf("%d",c[i]);
   }
   output(c);
}
void difference()
{
  int i,c[10];
  for(i=1;i<=9;i++)
    {
    if (a[i]==1 && b[i]==0)
	 c[i]=1;
    else
      c[i]=0;
    }
  for(i=1;i<=9;i++)
   {
   printf("%d",c[i]);
   }
   output(c);

}

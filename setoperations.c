//universal set is{1,2,3,4,5,6,7,8,9}
#include<stdio.h>
void input ();
void output();
void setunion();
void intersection();
void diffrence();
int a[]={ 0,0,0,0,0,0,0,0,0} , b[]= {0,0,0,0,0,0,0,0,0} , c[]= {0,0,0,0,0,0,0,0,0};
int main()
{
    int ch,wish;
    clrscr();
    do{
        printf("\n__MENU__");
        printf("\n1.Input\n2.Union\n3.Intersection\n4.Difference");
        printf("Enter the choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: input();
                    break;
            case 2: setunion();
                    break;
            case 3: intersection();
                    break;
            case 4: difference();
                    break;
        }
        printf("Do you wish to continue...? (1/0)\n");
        scanf("%d",&wish);
    }
    while(wish==1);
    return(0);
}
void input()
{
    int x,n,i;
    printf("Enter the size of the 1st set...\n");
    scanf("%d",&n);
    printf("\n Enter the elements:\t");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        a[x]=1;
    }
    printf("Enter the size of the 2nd aray...\n");
    scanf("%d",&n);
    printf("Enter the elements:\t");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        b[x]=1;
    }
    printf("\n 1st set...\t");
    for(i=1;i<=9;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n 2nd set...");
    for(i=1;i<=9;i++)
    {
        printf("%d",b[i]);
    }
}
void output(int c[])
{
    int i;
    printf("\n Set is...\t");
    for(i=1;i<=9;i++)
    {
        if(c[i]!=0)
        printf("%d\t",i);
    }
}
void setunion()
{
    int i , c[10];
    for(i=1;i<=9;i++)
    {
        if(a[i]!=b[i])
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

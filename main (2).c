#include <stdio.h>

int rec (int n)
{
    int d=n; 
    if (n!=0)
       d= d+rec(n-1);// h anadromi
    return d;   
}

int iter (int n)
{
    int i, s;
    for (i=0;i<=n;i++)
    {
        s=s+i;
    }
    return s;
}

int powerThroughRecursion (int n, int x)// i sinatrisi gia ton ipologismo n^n
{
    if(n==0)
        return 1;
    
    if(n==1)
        return x;
    
    return x*powerThroughRecursion(n-1,x);
}

int main()
{
    int  a,n,x;//a gia epilogi sinrtisis, n gia akeraio, x gia ton ipologismo n^n
    do//elegxos gia n=-1
    {
        printf("an thelere anadromi patiste 1, an  thelete epanalipsi patiste 2, an thelete  kai ta 2 patiste 3, an thelete tin dinami patiste 4\n");
        scanf("%d",&a);//apantisi xristi 
        do//elegxos gia n>=0
        {   printf("dwse enan akeraio\n");
            scanf("%d",&n);
        }while(n<0&&n!=-1);
        if (a==1&&n!=-1)
        {
            rec(n);
            printf("%d\n", rec(n));
        }
        else if(a==2&&n!=-1)
        {
            iter(n);
            printf("%d\n", iter(n));
        }
        else if(a==3&&n!=-1)
        {
            rec(n);
            iter(n);
            printf("anadromika= %d\nepanalipsi= %d\n",rec(n), iter(n));
        }
        else if(a==4&&n!=-1)
        {
            x=n;
            powerThroughRecursion(n,x);
            printf("%d\n", powerThroughRecursion(n,x));
        }
    }while(n!=-1);
    return 0;    
}



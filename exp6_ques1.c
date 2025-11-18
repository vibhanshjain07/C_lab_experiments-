#include <stdio.h>

int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int nonrec(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}

int main()
{
    int n,r;
    printf("Enter n and r: ");
    scanf("%d%d",&n,&r);
    int ncr = fact(n)/(fact(r)*fact(n-r));
    int nncr = nonrec(n)/(nonrec(r)*nonrec(n-r));  
    printf("Using Recursive: %d\n",ncr);
    printf("Using Non-Recursive: %d\n", nncr);
    return 0;
}
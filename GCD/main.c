#include <stdio.h>
#include <stdlib.h>

int find_gcd(int m,int n) {
    int res,i,min;
    min = m<n?m:n;
    for(i=1;i<=min;i++) {
        if(m%i==0 && n%i==0)
            res = i;
    }
    return res;
}

int main()
{
    int m,n,res;
    printf("Enter any two values: \n");
    scanf("%d%d",&m,&n);
    res = find_gcd(m,n);
    printf("GCD result is: %d",res);
}

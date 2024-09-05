#include <stdio.h>

int main() {
    char str[1000];
    int i, j, n, k,f=-1,l=-1,r=-1;

    printf("Enter a string: ");
    gets(str);
    for(n=0;str[n]!='\0';n++);
    int m=n;
    while(m>1)
    {
    	for(i=0;(i<=n-m);i++)
    	{
    		for(k=i,j=m+i-1;k<j;k++,j--)
    		{
    			if(str[k]!=str[j]){
    				break;
				}
			}
			if(k>=j)
			{
				l=i;
				r=i+m;
				f=0;
				break;
			}
		}
		if(f==0)
		{
			break;
		}
		m--;
	}
	if(l!=-1&&r!=-1)
	{
		for(i=l;i<r;i++)
		{
			printf("%c",str[i]);
		}
	}
	else
	{
		printf("No palindromic substring is present.");
	}
    return 0;
}
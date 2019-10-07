#include<stdio.h>
#define max 1000
int main()
{
	int i,j,n,a[max][2],b[max][2],k=0,temp,count,sum=0,count1=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i][0]);
		a[i][1]=0;
	}
	for(i=0;i<n;i++)
	{
		if(a[i][1])
		   continue;
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i][0]==a[j][0])
			{
				a[j][1]=1;
				count++;
			}
		}
		b[k][0]=a[i][0];
		b[k][1]=count;
		k++;
	}
	
	n=k;
	for(i=0;i<n;i++)
	{
		temp=b[i][1];
		for(j=i+1;j<n;j++)
		{
		   if(b[j][1]>temp)
		   {
		   	temp=b[j][1];
		   	b[j][1]=b[i][1];
		   	b[i][1]=temp;
		   	
		   	temp=b[j][0];
		   	b[j][0]=b[i][0];
		   	b[i][0]=temp;
		   	
		   }
		}
	}
	for(i=0;i<n;i++)
	{
		sum=sum+b[i][1];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<b[i][1];j++)
		{
			printf("%d",b[i][0]);
			count1++;
			if(count1<sum)
			{
				printf(",");
			}
		}
	}
	
}

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,k,max=0;
	scanf("%d",&t);
	int a[t],h[1000];
       for(i=0;i<1000;i++){
h[i]=0;
}
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
		k=a[i];
		h[k]++;
         if(max<a[i])
            max=a[i];
}
 
/*for(i=0;i<max;i++)
	{
printf("%d",h[i]);
}*/
	for(i=0;i<=max;i++)
	{
		if(h[i]==1)
		{
		 printf("%d ",i);
               h[i]=0;	
	        }
	}
	return 0;
}

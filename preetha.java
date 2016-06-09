/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner in=new Scanner(System.in);
		int t,i;
	//	t=in.nextInt();
		int a[]=new int[t];
		System.out.println(t);
		for(i=0;i<t;i++)
		{
			a[i]=in.nextInt();
		}
	int k=in.nextInt();
			Arrays.sort(a);
			
		
	//	Arrays.sort(a);
	//	int k=in.nextInt();
	//	int n=t-k;
		for(i=0;i<t-k;i++)
		{
			System.out.println(a[i]);
		}
	}
}

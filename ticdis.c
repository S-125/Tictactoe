#include <stdio.h>
int input(int,int,char,char,char[]);
void display(int x,char a[]);
int check(int,char,char,char[]);
void main()
{
   int n=3;
   char o,t;
   printf("Enter the symbol chosen by Player   1\n");
   scanf("%c",&o);
   printf("Enter the symbol chosen by Player   2\n");getchar();
   scanf("%c",&t);
    char a[n];
    int x=n;
   int i,j;
    char k='1';
   for(i=0;i<x*x;i++)
   {
   		a[i]=k;
   		k++;
   		
   	}
   
   display(n,a);
  int l=0;
   input(n,l,o,t,a);
  
}
int input(int x,int g,char p1,char p2,char a[])
{
    
  int win=0,i;
  char f,s;
    if(g%2==0)
    {
        printf("\nEnter the position number for player 1\n");getchar();
    	scanf("%c",&f);
    	 for(i=0;i<x*x;i++)
    {
   		if(a[i]==f)
   		{
   			a[i]=p1;
   			break;
   		}
    	
    }
   
   }
    	else
    	{
    		printf("\nEnter the position for player 2\n");getchar();
    		scanf("%c",&s);
    		 for(i=0;i<x*x;i++)
  		  {
   				if(a[i]==s)
   				{
   					a[i]=p2;
   					break;
   				}
   		 }
   	}
   	display(x,a);
   	win=check(x,p1,p2,a);
    	if(g<8)
    	{
    	g++;
    	if(win==0)
    	{
    	return(input(3,g,p1,p2,a));
    	}
    	}
    	if(win==1)
    	printf("Player 1 wins");
    	else if(win==2)
    	printf("Player 2 wins");
    	else
    	printf("Tie");
    		
    return 0;
    }
    void display(int x,char a[])
    {
    	char b[x][x];
    int k=0,i,j;
         for(i=0;i<x;i++)
   {
   	for(j=0;j<x;j++)
   	{
   		b[i][j]=a[k++];
   		}
   	}
  
    	 for(i=0;i<x;i++)
   {
       printf("			");
   	for(j=0;j<x;j++)
   	{
   		if(j==x-1)
   		printf("	%c",b[i][j]);
   		else
   		printf("	%c  |",b[i][j]);
   	}
   	if(i!=x-1)
   	printf("\n			     -----------------------\n");
   	else
   	printf("\n");
  }
  }
   int check(int x,char p1,char p2,char a[])
   {
   	char b[x][x];
    int k=0,i,j;
         for(i=0;i<x;i++)
   {
   	for(j=0;j<x;j++)
   	{
   		b[i][j]=a[k++];
   		}
   	}
   	if(b[0][0]==b[1][1]&&b[1][1]==b[2][2])
   	{
   		if(b[1][1]==p1)
   		return 1;
   		else
   		return 2;
   	}
   	else if(b[0][2]==b[1][1]&&b[1][1]==b[2][0])
   	{
   		if(b[0][2]==p1)
   		return 1;
   		else
   		return 2;
   	}
   	for(i=0;i<x;i++)
   	{
   	   if(b[i][0]==b[i][1]&&b[i][1]==b[i][2])
   	   {
   	   	if(b[i][1]==p1)
   		return 1;
   		else
   		return 2;
   	   }
   	 }
   	 for(j=0;j<x;j++)
   	{
   	   if(b[0][j]==b[1][j]&&b[1][j]==b[2][j])
   	   {
   	   	if(b[1][j]==p1)
   		return 1;
   		else
   		return 2;
   	   }
   	 }
   	 return 0;
   	 }
   	 
   	   
   	
   	
   	
   	
   	
   	
   	
   	

#include <stdio.h>

  
  

int main(void)
 {

	
	
	
      int i,a,b,len,postionget;

      int first,second,thrid,four;
	
      int result;
	
     char split;
	
	
	
	
char x[]="1024";
	
	char  y[] ="1234";
	int positionone=1;
	int postiontwo=2;
	int postionthree=3;
	int positionfour=4;
	int positionfive=5;

	a=atoi(x);
	printf("%d\n",a);
	len=strlen(y);
					for(i=len-1;i>=0;i--)
					{
						
						split =y[i];
						b=split-'0';
						postionget=i+1;
						if(positionfour==postionget)
						{
							first=a*b;
						   
						}
					 
						 if(postionthree==postionget)
						{
							
							second=a*b*10;
						   
							
						}
						
						if(postiontwo==postionget)
						{
							
							 thrid=a*b*100;
						   
							
							
							
						}
						
							if(positionone==postionget)
							{
							
							 four=a*b*1000;
						  
							
						   }
						
					
					}
	  
	     result=first+second+thrid+four;
	     
	    printf(" total = %d",result);
	     
	    
	return 0;
}


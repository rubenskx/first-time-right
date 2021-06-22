#include <iostream>
#include <cmath>
using namespace std;

int main() 

{
   int n;
int a,b,c,d;
int i,j,k;
char ch[100];
cin>>n;
int l;
int ct;
for(i=0;i<n;++i)
{
cin>>a>>b;
for(j=0;j<a;++j)
{cin>>ch[j];
}
ct=0;
   for(j=0;j<a;++j)
    {
       if(ch[j]=='*')
          { ct=1;
		  
           l=j+b;
		   
           for(k=j;k<l;++k)
                  { 
                     if(ch[k]!='*')
                    { ct=-1;
                     break;
					}
                  }    
         if(ct==1)
		{ break;
		}
		  }
       
    }   
 
 if(ct==1)
 cout<<"yes";
 else
 cout<<"no";
}


 

	return 0;
}
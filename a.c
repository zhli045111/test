#include <stdio.h>
int main(void)
{
    int m,yushu;
    int numb=0;
    scanf("%d",&m);
    for (int n=0;n<m-1;n++){
    for (int i=0;i<n-2;i++)
    {  yushu=n%(n-(i+1));
      if (yushu>0) //余数为0，说明是非质数
      {numb=numb+1;
    
      }
    }
      
    if (numb==n-2)//余数不为0，说明是质数
      {
      printf("%d是质数\n",n);  
      
    }
    }

}
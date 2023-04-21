
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculate_no_of_que(int combination[500][500],int total_que,int k,int l);
int main()
{
int N=0,M=0;

scanf("%d %d",&N,&M);
int combination[500][500];
int i=0,j=0;
for(i=0;i<N;i++)
{
    for(j=0;j<M;j++)
    {

        combination[i][j]=0;
    }
}
char question[501];
for(i=0;i<N;i++)
{
    scanf("%s",question);

    for(j=0;j<M;j++)
        {
        combination[i][j]= (int)question[j]-48;
        }
}

/*for(i=0;i<N;i++)
{
    for(j=0;j<M;j++)
    {
        printf("%d",combination[i][j]);
    }
    printf("\n");
}*/
int max_que=0,count=0,k=0,l=0,temp=0;
for(k=0;k<N-1;k++)
{
    temp=0;
    for(l=k+1;l<N;l++)
    {
        /*printf("comparing betn %d %d.... ",k,l);*/
      temp= calculate_no_of_que(combination,M,k,l);
      if(temp==max_que)
      {
          count++;
      }
      else if(temp>max_que)
      {
          max_que=temp;
          count=1;
      }
    }
}
printf("%d\n%d",max_que,count);










    return 0;
}

int calculate_no_of_que(int combination[500][500],int total_que,int k,int l)
{
    int no_of_que=0,i=0;
    /*printf("Initially no of que is   %d ",no_of_que);*/
for( i=0;i<total_que;i++)
{

    /*printf("participants are   %d and  %d\n ",combination[k][i],combination[l][i]);*/
    if(combination[k][i]+combination[l][i]>0)
    {
        no_of_que++;
    }

}
     /* printf("The it becomes   %d\n",no_of_que);*/
    return no_of_que;
}


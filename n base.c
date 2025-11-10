#include<stdio.h>
#include<string.h>
void n_base(int num,int n) {
    int rem;
    char res[100];
    int ind;
    while(num!=0)
{   rem=num%n;
   if(rem>=10){
    res[ind++]='A'+(rem-10);
   }
    else{
    res[ind++]='0'+rem;
    num=num/n;
    }
}
    printf("%s\n",res);
    printf("\n");
    char r[10];
    int resi=0;
    for(int j=ind++-1;j>=0;j--)
    {
        r[resi++]=res[j];
    }
    printf("%s",r);
}
void main(){
    int num=718,n=12;
    n_base(num,n);
}

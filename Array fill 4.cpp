#include<stdio.h>
int main(){
  int arr,i,m,p,even[5],j=0;
  int odd[5],k=0;
  for(i=0;i<15;i++){
    scanf("%d",&arr);
    if(arr%2==0){
      even[j]=arr;
      j++;
      if(j==5){
        for(m=0;m<5;m++){
          printf("par[%d] = %d\n",m,even[m]);
          even[m]=0;
          j=0;
        }
      }
    }
    else{
      odd[k]=arr;
      k++;
      if(k==5){
        for(p=0;p<5;p++){
          printf("impar[%d] = %d\n",p,odd[p]);
          odd[p]=0;
          k=0;
        }
      }
    }
  }
  for(i=0;i<5;i++){
    if(odd[i]==0)
    break;
    printf("impar[%d] = %d\n",i,odd[i]);
    }
  for(i=0;i<5;i++){
    if(even[i]==0)
    break;
    printf("par[%d] = %d\n",i,even[i]);
  }

  return 0;
}

#include<stdio.h>
struct shop{
   int profit;
   int loss;
};
void collectinfo(struct shop* ptr);
void viewinfo(struct shop* ptr,int);

int main(){
    struct shop data[30]={};
    struct shop *ptr;
    ptr = data;
    collection(ptr);

    return 0;
}
void collectinfo(struct shop* ptr){

    int itm;
    struct shop *ptr2;
    ptr2 = ptr;
    int m_rev=0;
    int buy=0,sell=0,profit=0,loss=0;
    for(int i=1;i<=30;i++){
        printf("Entry for day: %d\n",i);
        printf("Total items are sold:");
        scanf("%d", &itm);

            for(int j=1;j<=itm ;j++){
                printf("Real price of item %d:",j);
                scanf("%d",&buy);
                printf("Sold price :");
                scanf("%d",&sell);
                if(buy<sell){
                    profit=sell-buy;
                    ptr2->profit=profit;
                    m_rev+=profit;
                    profit=0;
                }
                if(buy>sell){
                    loss=buy-sell;
                    ptr2->loss=loss;
                    loss=0;
                }
            }
            ptr2++;
    }
    viewinfo(ptr,m_rev);
}

void viewinfo(struct shop* ptr,int m_rev){
    for(int i=1;i<=30;i++){
        printf("Info of day : %d\n",i);
        printf("Total profit : %d\n",ptr->profit);
        printf("Total loss : %d\n",ptr->loss);
        ptr++;
        }
    printf("Total revenue : %d\n",m_rev);
}


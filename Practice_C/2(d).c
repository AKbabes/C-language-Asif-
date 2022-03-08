int main()
{
    int n,pNum,price[100],g,sumPrice=0,j,i;
    scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        scanf("%d",&pNum);
        for(i=0; i<pNum; i++)
        {
            scanf("%d",&price[i]);
        }
        scanf(" %c",&g);
        if(g=='M')
        {
            for(i=0; i<pNum; i++)
            {
                sumPrice=sumPrice+price[i];
            }
        }
        else if(g=='F'){
            for(i=1; i<pNum; i++)
            {
                sumPrice=sumPrice+price[i];
            }
            sumPrice=price[0]-sumPrice;
        }
        else{
            printf("wrong input\n");
        }
        printf("%d\n",sumPrice);
        sumPrice=0;

    }

    return 0;
}

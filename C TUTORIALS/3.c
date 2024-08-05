#include<stdio.h>
int main()
{
    float profit, loss,cp, sp,profit_percentage,loss_percentage,cp_in_loss,sp_in_loss;
    printf("Enter the Cost Price :");
    scanf("%f",&cp);
    printf("Enter the Sell Price :");
    scanf("%f",&sp);
        if(sp>0 && cp>0){
        if(sp>cp){
        printf("The profit will be : %f \n",(sp-cp));
        profit_percentage = ((sp-cp)/cp)*100;
        printf("The percentage profit will be : %f \n",profit_percentage);}
        else if(sp<cp) {
            printf("The loss will be : %f \n", (cp-sp));
            loss_percentage = ((cp-sp)/cp)*100;
        printf("The percentage loss will be : %f \n", loss_percentage);}
        else{
        printf("Neither profit Nor Loss");
        }}
    else if(cp==0 && sp!=0){
        printf("Enter the profit :");
        scanf("%f",& profit);
        cp = (sp-profit);
        printf("The cost price will be : %f \n",cp);
        profit_percentage = (profit/cp)*100;
        printf("Percentage profit: %f \n",profit_percentage);}
        else if(sp==0 && cp!=0){
        printf("Enter the profit :");
        scanf("%f",&profit);
        sp = (profit+cp);
        printf("The sell price will be : %f \n",sp);
        profit_percentage = (profit/cp)*100;
        printf("Percentage profit : %f \n",profit_percentage);} 
        else if(cp==0 && sp==0){
        printf("Enter the Cost Price in loss :");
        scanf("%f",&cp_in_loss);
        printf("Enter the Sell Price in loss :");
        scanf("%f",&sp_in_loss);}
    if(cp==0 && sp==0 &&cp_in_loss==0){
            printf("Enter The Loss :");
            scanf("%f",& loss);
            cp_in_loss = loss+sp_in_loss;
            printf("The cost price will in loss : %f \n",cp_in_loss);
            loss_percentage = (loss/cp_in_loss)*100;
            printf("percentage loss: %f ", loss_percentage);}
        else if(cp==0 && sp==0 &&sp_in_loss==0){
          printf("Enter The Loss :");
            scanf("%f",& loss);
            sp_in_loss = cp_in_loss-loss;
            printf("The sell price will in loss : %f \n",sp_in_loss);
            loss_percentage = (loss/cp_in_loss)*100;
            printf("percentage loss: %f ", loss_percentage);}
    
return 0;
}
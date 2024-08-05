// 1.Rahul bought a bike for 24,000 and sold it for 28,000. What is his profit %?

#include<stdio.h>
int main()
{
    float a = 24000, b = 28000; //a = cost price , b = selling price , x = percentage profit// 
    float x;
    //percentage profit = ((selling price - cost price)/cost price)*100//
    x = ((b -a)/a)*100; 
    printf("The percentage of profit will be : %f",x);
    return 0;
}
//2. If the selling price of 16 watches is equal to the cost price of 24 watches, then what is the profit %?//

#include<stdio.h>
int main()
{
    float sp , cp ,x;
    sp = (24 * cp)/16;
    x = ((sp - cp)/cp)*100;
    printf("The percentage profit will be : %f", x);
    return 0;
}
//3. By selling 40 cricket bats, Sreesanth makes a profit equal to the selling price of 10 cricket bats. What was the profit % made?
#include<stdio.h>
int main()
{
    float sp = 40, cp,profit = 10, x;
    cp = 40 - profit;
    x = (profit/cp)*100;
    printf("The percentage of profit will be : %f", x);
    return 0;
}
//4.In the above case if the profit made was equal to the cost price of 10 cricket bats, then what was the profit Sreesanth made?
#include<stdio.h>
int main()
{
    float sp= 40, cp =40, profit = 10, x;
    x = ((profit)/cp)*100;
    printf("The percentage of profit will be : %f",x);
    return 0;
}
//5. Mr Sidhu sells 25 cricket bats and makes a loss equal to selling price of 5 Cricket bats? What was the loss %

#include<stdio.h>
int main()
{
    float sp=25, cp,loss = 5, x;
    cp = loss + sp;
    x = (loss/cp)*100;
    printf("The percentsge loss will be : %f",x);
    return 0;
}
//6. In the above case, if the loss is equal to the cost price of 5 bats, then what is the loss %
#include<stdio.h>
int main()
{
    float sp=25, cp=25,loss = 5, x;
    x = (loss/cp)*100;
    printf("The percentsge loss will be : %f",x);
    return 0;
}
//Rahman sold a book for Rs 133 and made a profit of 10% on the transaction. What is his cost price?
#include<stdio.h>
int main()
{
    float sp = 133, persentage_profit = 10,cp;
    cp = 133/1.10;
    printf("The cost price will be: %f \n",cp);
    return 0;
}
//By selling a bicycle at Rs 900, Abdul made a loss of 25%. If he had sold it for Rs 1440, what would be his profit %?
#include<stdio.h>
int main()
{
    float sp_old = 900,sp_new = 1440,cp,profit_percentage,loss_percentage = 25;
    cp = (-900/(0.25-1));
    profit_percentage = ((1440-cp)/cp)*100; 
    printf("The profit percentage will be: %f ",profit_percentage);
    return 0;
}

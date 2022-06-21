#include <stdio.h>
int madal=0, kangres=0, maubadi=0, balen=0;
void electionResult()
{
    int wonByVote;
    if (madal > kangres && madal > maubadi && madal > balen)
    {
        printf("\n**Madal won the election**\n\n");
        printf("Total vote of Madal: %d\n", madal);
        wonByVote= madal-kangres;
        printf("Madal won by: %d votes against Kangres\n", wonByVote);
        wonByVote=madal - maubadi;
        printf("Madal won by: %d votes against Maubadi\n", wonByVote);
        wonByVote= madal - balen;
        printf("Madal won by: %d votes against Balen\n", wonByVote);
    }
    else if (kangres > maubadi && kangres > balen)
    {
        printf("\n**Kangres won the election**\n\n");
        printf("Total votes of Kangres: %d\n", kangres);
        wonByVote= kangres-madal;
        printf("Kangres won by: %d votes against Madal\n", wonByVote);
        wonByVote = kangres - maubadi;
        printf("Kangres won by: %d votes against Maubadi\n", wonByVote);
        wonByVote = kangres - balen;
        printf("Kangres won by: %d votes against Balen\n", wonByVote);
    }
    else if (maubadi > balen)
    {
        printf("\n**Maubadi won the election**\n\n");
        printf("Total votes of Maubadi: %d\n", maubadi);
        wonByVote= maubadi-kangres;
        printf("Maubadi won by:%d votes against Kangres\n", wonByVote);
        wonByVote= maubadi-madal;
        printf("Maubadi won by: %d votes against Madal\n", wonByVote);
        wonByVote= maubadi-balen;
        printf("Maubadi won by:%d votes against Balen\n", wonByVote);
    }
    else if (madal == kangres && madal == maubadi && madal == balen)
    {
        printf("\nNo one won the election\n\n");
        printf("        Madal---Kangres---Maubadi---Balen\n");
        printf("Total Vote   %d       %d        %d     %d\n",madal,kangres,maubadi,balen);
    }
    else{
        printf("\n**Balen won the election**\n\n");
        printf("Total votes of Balen: %d\n", balen);
        wonByVote= balen-kangres;
        printf("Balen won by: %d votes against Kangres\n", wonByVote);
        wonByVote= balen-maubadi;
        printf("Balen won by: %d votes against Maubadi\n",wonByVote);
        wonByVote= balen- madal;
        printf("Balen won by: %d votes against Madal\n", wonByVote);
    }
}


void calculationOfVote(int vote)
{
    switch (vote)
    {
    case 1:
        madal+=1;
        break;
    case 2:
        kangres+=1;
        break;
    case 3:
        maubadi+=1;
        break;
    case 4:
        balen+=1;
        break;
}
}


void main()
{
    int choose;


        printf("\n*********Welcome to Voting*********\n\n");
        printf("                         Prime minister election                        \n\n");
        printf("*************************************************************\n");
        printf("|           1.Madal            |          2.Kangres         |\n");
        printf("*************************************************************\n");
        printf("|           3.Maubadi          |          4.Balen              |\n");
        printf("*************************************************************\n\n");
    do
    {
        printf("Press 1 to vote Madal\n");
        printf("Press 2 to vote Kangres\n");
        printf("Press 3 to vote Maubadi\n");
        printf("Press 4 to vote Balen\n");
        printf("Press 5 to show election result\n");
        printf("Please choose : ");
        scanf("%d", &choose);
        if (choose==5)
        {
            electionResult();
        }else
        {
            calculationOfVote(choose);
        }
        printf("\n");
    }while (choose != 5);
} 
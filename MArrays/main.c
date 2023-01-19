#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int player[11]= {1,31,4,66,26,14,6,8,11,20,10};
    int goals[11]={1,3,5,10,5,7,3,4,31,20,29};
    int gamesplayed[11]={38,30,36,30,35,38,29,22,34,30,35};
    float ppg[11], bestPPG = 0.0;
    int bestPlayer;

    printf("PLAYER \t GOALS \t PLAYED \t PPG\n");
    for (i=0; i<11; i++)
    {
        ppg[i] = (float)goals[i] / (float)gamesplayed[i];

        printf("%d \t %d \t %d \t \t %.2f\n",player[i], goals[i], gamesplayed[i], ppg[i]);

        if (ppg[i]>bestPPG)
            {
            bestPPG = ppg[i];
            bestPlayer = player[i];
        }
    }
    printf("\nThe best player is %d", bestPlayer);
    return 0;
}

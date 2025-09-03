#include <stdio.h>

int main()
{
    int matchsticks = 21;
    int user, computer;
    while (matchsticks > 1)
        {
        printf("Matchsticks left: %d\n", matchsticks);
        printf("Pick 1 to 4 matchsticks: ");
        scanf("%d", &user);
        matchsticks -= user;
        if (matchsticks == 1)
        {
            printf("Only 1 matchstick left. You have to pick it.\n");
            printf("You lose! Computer wins.\n");
            break;
        }
        computer = 5 - user;
        printf("Computer pick: %d\n", computer);
        matchsticks -= computer;
    }
    return 0;
}


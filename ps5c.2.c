#include <stdio.h>
int main()
{
    char c;
    do
    {
        int n, i, key[10], correct = 0, ans;
        float percent;
        printf("Enter no of questions: ");
        scanf("%d", &n);
        printf("Enter the correct answers (key): ");
        for (i = 0; i < n; i++)
            scanf("%d", &key[i]);
        for (i = 0; i < n; i++)
        {
            printf("Enter answer for Q %d: ", i + 1);
            scanf("%d", &ans);
            if (ans == key[i])
                correct++;
        }
        percent = (correct * 100.0) / n;
        printf("\nNo.of correct answers = %d\n", correct);
        printf("Percentage correct = %.2f%%\n", percent);
        printf("\nDo you wish to grade another quiz? [y/n]: ");
        scanf(" %c", &c);
    } while (c == 'Y' || c == 'y');

    return 0;
}

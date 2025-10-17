#include <stdio.h>

int main()
{
    int n;
    printf("Enter no.of days: ");
    scanf("%d", &n);
    int at[n];
    printf("Enter attendance for each day:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &at[i]);
    }

    int maxAt = at[0];
    int minAt = at[0];
    int minDay = 1;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (at[i] > maxAt)
        {
            maxAt = at[i];
        }
        if (at[i] < minAt)
        {
            minAt= at[i];
            minDay = i + 1;
        }
        sum += at[i];
    }

    float avgAt=(float)sum/n;
    printf("Maximum Attendance: %d\n", maxAt);
    printf("Minimum Attendance: %d (Day %d)\n", minAt, minDay);
    printf("Average Attendance: %.2f\n", avgAt);

    return 0;
}

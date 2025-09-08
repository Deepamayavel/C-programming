#include <stdio.h>
#include <stdlib.h>

int main() {
int N;
printf("Enter the value of N: ");
scanf("%d", &N);

int arr[N];
int i;
printf("Enter %d numbers:\n", N, N);
for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

  int duplicate = -1;
  for (i = 0; i < N; i++)
    {
        int val = abs(arr[i]);
  if (arr[val - 1] < 0)
    {
        duplicate = val;
        break;
    }
  else
    {
        arr[val - 1] = -arr[val - 1];
    }
}

if (duplicate != -1)
    {
        printf("Duplicated number is: %d\n", duplicate);
    }
else
    {
        printf("No duplicate found.\n");
    }

return 0;
}

#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of processes: ");     scanf("%d", &n);

    int arrival[n], burst[n], waiting[n], turnaround[n], completion = 0;

    printf("Enter arrival time and burst time for each process:\n");
    for (i = 0; i < n; i++) {         printf("Process %d: ", i + 1);         scanf("%d %d", &arrival[i], &burst[i]);
    }

    // Sorting processes based on arrival time (Bubble Sort)
    for (i = 0; i < n - 1; i++) {         for (int j = 0; j < n - i - 1; j++) {             if (arrival[j] > arrival[j + 1]) {                 // Swap arrival time                 int temp = arrival[j];                 arrival[j] = arrival[j + 1];                 arrival[j + 1] = temp;

                // Swap burst time                 temp = burst[j];                 burst[j] = burst[j + 1];                 burst[j + 1] = temp;
            }
        }
    }

    // Calculating waiting time and turnaround time
    for (i = 0; i < n; i++) {         if (completion < arrival[i])             completion = arrival[i];

        waiting[i] = completion - arrival[i];         turnaround[i] = waiting[i] + burst[i];         completion += burst[i];
    }

    // Display the result     printf("\nPID\tArrival\tBurst\tWaiting\tTurnaround\n");
    for (i = 0; i < n; i++) {         printf("%d\t%d\t%d\t%d\t%d\n", i + 1, arrival[i], burst[i], waiting[i], turnaround[i]);
    }

    return 0;
}

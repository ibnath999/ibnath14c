#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of processes: ");     scanf("%d", &n);

    int arrival[n], burst[n], completion[n], waiting[n], turnaround[n];

    printf("Enter arrival time and burst time for each process:\n");
    for ( int i = 0; i < n; i++) { 
        for( int j=0; j<n-i-1;j++){
            if(arrival[j]>arrival[j+1]{
                //swap arrival time
                int temp=arrival[j];
                arrival[j]=arrival[j+1];
                arrival[j+1]=temp;
               
    // Swap burst time                
                temp = burst[j];               
                burst[j] = burst[j + 1];                
                burst[j + 1] = temp;
            }
        }
    }
int time=0;
    // Calculating waiting time and turnaround time, completion time
    for (int i = 0; i < n; i++) { 
        if(time< arrival[i]{
            time=arrival[i];
            completion[i]=time+brust[i];
            turnaround[i]=completion[i]-arrival[i];
            waiting[i]=turnaround[i]-burst[i];
            time=completion[i];
    }

    // output process table    
    printf("\nPID\tArrival\tBurst\tcompletion\tWaiting\tTurnaround\n");
    for ( int i = 0; i < n; i++) {        
        printf("%d\t%d\t%d\t%d\t%d\t%d\n", i + 1, arrival[i], burst[i],  completion[i], waiting[i], turnaround[i]);
    }

    return 0;
}

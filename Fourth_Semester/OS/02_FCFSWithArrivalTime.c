#include <stdio.h>

// Function to calculate waiting time for each process
void calculate_waiting_time(int arrival_time[], int burst_time[], int n, int waiting_time[]) {
    waiting_time[0] = 0;

    // Calculate waiting time
    for (int i = 1; i < n; i++) {
        // Calculate service time for current process
        int service_time = 0;
        for (int j = 0; j < i; j++) {
            service_time += burst_time[j];
        }

        // Calculate waiting time for current process
        waiting_time[i] = service_time - arrival_time[i];

        // If waiting time is negative, it means the process arrived after CPU was idle
        if (waiting_time[i] < 0)
            waiting_time[i] = 0;
    }
}

// Function to calculate turnaround time for each process
void calculate_turnaround_time(int burst_time[], int n, int waiting_time[], int turnaround_time[]) {
    // Calculate turnaround time
    for (int i = 0; i < n; i++) {
        turnaround_time[i] = burst_time[i] + waiting_time[i];
    }
}

// Function to calculate average waiting time and turnaround time
void calculate_average_time(int burst_time[], int n) {
    int arrival_time[n], waiting_time[n], turnaround_time[n];

    // Initialize arrival time array
    for (int i = 0; i < n; i++) {
        arrival_time[i] = i; // Assume arrival times are in increasing order
    }

    // Calculate waiting time for each process
    calculate_waiting_time(arrival_time, burst_time, n, waiting_time);

    // Calculate turnaround time for each process
    calculate_turnaround_time(burst_time, n, waiting_time, turnaround_time);

    // Calculate total waiting time and total turnaround time
    int total_waiting_time = 0, total_turnaround_time = 0;
    for (int i = 0; i < n; i++) {
        total_waiting_time += waiting_time[i];
        total_turnaround_time += turnaround_time[i];
    }

    // Calculate average waiting time and average turnaround time
    float avg_waiting_time = (float)total_waiting_time / n;
    float avg_turnaround_time = (float)total_turnaround_time / n;

    // Print average waiting time and average turnaround time
    printf("Average Waiting Time: %.2f\n", avg_waiting_time);
    printf("Average Turnaround Time: %.2f\n", avg_turnaround_time);
}

// Function to implement FCFS scheduling algorithm
void fcfs(int arrival_time[], int burst_time[], int n) {
    printf("Process\t Arrival Time\t Burst Time\t Waiting Time\t Turnaround Time\n");

    // Calculate waiting time and turnaround time for each process
    int waiting_time[n], turnaround_time[n];
    calculate_waiting_time(arrival_time, burst_time, n, waiting_time);
    calculate_turnaround_time(burst_time, n, waiting_time, turnaround_time);

    // Print details of each process
    for (int i = 0; i < n; i++) {
        printf("%d\t %d\t\t %d\t\t %d\t\t %d\n",
               i+1, arrival_time[i], burst_time[i], waiting_time[i], turnaround_time[i]);
    }

    // Calculate and print average waiting time and average turnaround time
    calculate_average_time(burst_time, n);
}

int main() {
    // Example processes
    int arrival_time[] = {0, 3, 4, 6, 7};
    int burst_time[] = {6, 8, 7, 3, 4};
    int n = sizeof(arrival_time) / sizeof(arrival_time[0]);

    // Perform FCFS scheduling
    fcfs(arrival_time, burst_time, n);

    return 0;
}

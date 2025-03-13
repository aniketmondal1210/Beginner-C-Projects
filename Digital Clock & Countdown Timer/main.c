#include <stdio.h>
#include <time.h>
#include <unistd.h> // For sleep function

// Function declarations
void userChoice(int choice);
void digital_clock();
void countdown_timer(int seconds);

void userChoice(int choice) {
    if (choice == 1) {
        digital_clock();
    } else if (choice == 2) {
        int seconds;
        printf("Enter the number of seconds to countdown: ");
        scanf("%d", &seconds);
        countdown_timer(seconds);
    } else {
        printf("Invalid choice!\n");
    }
}

void digital_clock() {
    // Displays a digital clock
    while (1) {
        // Get the current time
        time_t now = time(NULL);
        struct tm* local_time = localtime(&now);

        // Print the current time
        printf("\rCurrent Time: %02d:%02d",
               local_time->tm_hour,
               local_time->tm_min);
        fflush(stdout);

        // Pause for 1 second
        sleep(1);
    }
}

void countdown_timer(int seconds) {
    printf("Countdown Timer started!\n");
    while (seconds > 0) {
        printf("\rTime remaining: %d seconds", seconds);
        fflush(stdout);
        sleep(1);
        seconds--;
    }
    printf("\nTime's up!\n");
}

int main() {
    while (1) {
        int choice;
        printf("Choose an option (1: Digital Clock, 2: Countdown Timer): ");
        scanf("%d", &choice);
        userChoice(choice);
    }

    return 0;
}

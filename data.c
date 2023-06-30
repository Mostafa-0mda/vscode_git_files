#include <stdio.h>
#include <time.h>

int main(void) {
    // Get the current time
    time_t currentTime = time(NULL);

    // Convert the current time to a struct representing local time
    struct tm* currentDate = localtime(&currentTime);

    // Set your birth date
    struct tm birthDate;
    birthDate.tm_year = 1990 - 1900;  // Year minus 1900
    birthDate.tm_mon = 0;  // Month (0-11, where 0 represents January)
    birthDate.tm_mday = 1;  // Day of the month (1-31)

    // Convert both dates to time_t format
    time_t currentTimestamp = mktime(currentDate);
    time_t birthTimestamp = mktime(&birthDate);

    // Calculate the difference in seconds
    double seconds = difftime(currentTimestamp, birthTimestamp);

    // Convert seconds to days
    int days = seconds / (60 * 60 * 24);

    printf("You have lived for %d days.\n", days);

    return 0;
}
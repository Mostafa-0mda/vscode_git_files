#include <stdio.h>

const int N = 5;
float average(int length, int array[]);

int main(void) {
    int scores[N];
    for (int i = 0; i < N; i++) {
        printf("scores[%i]: ", i);
        scanf("%d", &scores[i]);
    }
    printf("Average: %.2f\n", average(N, scores));
    return 0;
}

float average(int length, int array[]) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += array[i];
    }
    return (float) sum / length;
}
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int cost_green, cost_purple, n;
        scanf("%d %d", &cost_green, &cost_purple);
        scanf("%d", &n);

        int problem1 = 0, problem2 = 0;

        for (int i = 0; i < n; i++) {
            int x, y;
            scanf("%d %d", &x, &y);
            problem1 += x;
            problem2 += y;
        }
        int cost1 = problem1 * cost_green + problem2 * cost_purple;

        int cost2 = problem1 * cost_purple + problem2 * cost_green;

        if (cost1 < cost2)
            printf("%d\n", cost1);
        else
            printf("%d\n", cost2);
    }

    return 0;
}
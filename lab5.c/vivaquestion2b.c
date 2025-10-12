#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int cost_green, cost_purple;
        scanf("%d %d", &cost_green, &cost_purple);

        int n; 
        scanf("%d", &n);

        int c1 = 0, c2 = 0;

        for (int i = 0; i < n; i++) {
            int a, b;
            scanf("%d %d", &a, &b);

            c1 += a; 
            c2 += b; 
        }

        int optionA = c1 * cost_green + c2 * cost_purple;

        int optionB = c1 * cost_purple + c2 * cost_green;

    
        int minCost = (optionA < optionB) ? optionA : optionB;

        printf("%d\n", minCost);
    }
    
    return 0;
}

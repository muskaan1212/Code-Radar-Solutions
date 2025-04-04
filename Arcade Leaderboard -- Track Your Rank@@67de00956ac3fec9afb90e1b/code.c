#include <stdio.h>

int removeDuplicates(int scores[], int n, int unique[]) {
    int j = 0;
    unique[j++] = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] != scores[i - 1]) {
            unique[j++] = scores[i];
        }
    }
    return j; 
}

void getRanks(int leaderboard[], int n, int player[], int m) {
    int unique[1000];
    int size = removeDuplicates(leaderboard, n, unique);

    int i = size - 1; 
    for (int j = 0; j < m; j++) {
        while (i >= 0 && player[j] >= unique[i]) {
            i--;
        }
        printf("After score %d: Rank %d\n", player[j], i + 2);
    }
}

int main() {
    int leaderboard[] = {100, 90, 90, 80, 75, 60};
    int player[] = {50, 65, 77, 90, 102};
    
    int n = sizeof(leaderboard) / sizeof(leaderboard[0]);
    int m = sizeof(player) / sizeof(player[0]);

    getRanks(leaderboard, n, player, m);

    return 0;
}

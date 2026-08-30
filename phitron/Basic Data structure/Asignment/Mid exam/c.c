#include <stdio.h>
#define MAXN 200005
int pos[MAXN];

int main() {
    int n, val;
    if(scanf("%d", &n) != 1) {
        return 0;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        pos[val] = i;
    }
    int rounds = 1;
    for (int i = 1; i < n; i++) {
        if (pos[i + 1] < pos[i]) {
            rounds++;
        }
    }

    printf("%d\n", rounds);

    return 0;
}
#include <stdio.h>
#include <time.h>

void hanoi(int n, char A, char B, char C, FILE *fp) {
    int count = 1; 
    if (n == 2) {
        time_t now = time(NULL);
        fprintf(fp, "%d (%s) : 1P from %c to %c\n", count++, ctime(&now), A, B);
        return;
    }
    hanoi(n - 1, A, C, B, fp);
    time_t now = time(NULL);
    fprintf(fp, "%d (%s) : %dP from %c to %c\n", count++, ctime(&now), n, A, B);
    hanoi(n - 1, C, B, A, fp);
}

int main() {
    int n = 21;
    FILE *fp = fopen("hanoi.txt", "w");
    time_t start = time(NULL);
    fprintf(fp, "Start time (%s)\n", ctime(&start));
    hanoi(n, 'A', 'C', 'B', fp);
    time_t end = time(NULL);
    fprintf(fp, "End time (%s)\n", ctime(&end));
    fclose(fp);
    
    return 0;
}

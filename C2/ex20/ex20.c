#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ft_rand(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
        srand(time(NULL));
        const char *days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
        printf("%s", days[ft_rand(0, 6)]);
        return 0;
}

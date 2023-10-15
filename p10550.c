#include <stdio.h>

int main() {
    while (1) {
        int dial_pos, first_num, second_num, third_num;
        scanf("%d %d %d %d", &dial_pos, &first_num, &second_num, &third_num);
        if (dial_pos == 0 && first_num == 0 && second_num == 0 && third_num == 0) {
            break;
        }

        int total_degrees = 720;

        total_degrees += (dial_pos - first_num + 40) % 40 * 9;
        total_degrees += 360;
        total_degrees += (second_num - first_num + 40) % 40 * 9;
        total_degrees += (second_num - third_num + 40) % 40 * 9;

        printf("%d\n", total_degrees);
    }

    return 0;
}

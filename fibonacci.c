#include <stdio.h>

void fibonacci(int num_digits) {
    int current_num = 1;
    int previous_num = 1;
    for (int i = 1; i <= num_digits; i++) {
        if (i == 1)
            printf("%i ", previous_num);
        else if (i == 2) 
            printf("%i ", current_num);
        else {
            int this_num = current_num + previous_num;
            printf("%i ", this_num);
            previous_num = current_num;
            current_num = this_num;
        }    
    }
}

main() {
    fibonacci(6);
}

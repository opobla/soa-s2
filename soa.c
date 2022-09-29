

#include <stdio.h>
#include "add.h"

int main() {
    int a;

    printf("Hello SOA\n");
    printf("New version 2.0\n");
    printf("---------------------------------\n");

    a = add(3, 4);
    printf("The result is %d \n", a);

    a = mul(8, 2);
    printf("The result is %d \n", a);
}


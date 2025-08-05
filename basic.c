/* #include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}

*/

/*


#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum = %d\n", sum);
    return 0;
}

*/

/*
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        printf("%d + %d = %d\n", n, i, n + i);
    }

    return 0;
}

*/


/*

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter first numbers: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b)
        printf("Max = %d\n", a);
    else
        printf("Max = %d\n", b);

    return 0;
}

*/

#include <stdio.h>

int main() {
    int age;
    printf("How old are you? ");
    scanf("%d", &age);
    if (age < 18)
        printf("You are a minor.\n");
    else if (age < 65)
        printf("You are an adult.\n");
    else
        printf("You are a senior citizen.\n");
    return 0;
}


#include <stdio.h>

int main()
{
    int age;
    printf("Please enter your Age");
    scanf("%d", &age);
    printf("Dein Alter ist: %d \n", age);
    printf("Youre living already %d days \n", age*365);
    printf("You are living already %d hours\n", age*365*24);
    printf("you are living already %d minutes\n", age*365*24*60);
    printf("you are living already %d seconds\n", age*365*24*60*60);





    return 0;
}

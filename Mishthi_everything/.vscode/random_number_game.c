#include<stdio.h>
#include<stdlib.h>
int main()
{
    int guess;
    int attempt=0;
    int random_number=rand();
    do 
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempt++;

        if (guess > random_number) 
        {
            printf("Lower number, please.\n");
        } 
        else if (guess < random_number) 
        {
            printf("Higher number, please.\n");
        } 
        else 
        {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempt);
        }
    } 
    while (guess != random_number);

    return 0;
}
    



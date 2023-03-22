#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char options[3][10] = {"Rock", "Paper", "Scissors"};
    int player_choice, computer_choice, result;
    srand(time(NULL));
    
    printf("Welcome to Rock, Paper, Scissors!\n\n");
    printf("Enter 1 for Rock, 2 for Paper, 3 for Scissors: ");
    scanf("%d", &player_choice);
    
    computer_choice = rand() % 3;
    printf("You chose %s, computer chose %s.\n", options[player_choice-1], options[computer_choice]);
    
    result = (player_choice - computer_choice + 3) % 3;
    if (result == 1) {
        printf("You win!\n");
    } else if (result == 2) {
        printf("Computer wins!\n");
    } else {
        printf("It's a tie!\n");
    }
    
    return 0;
}

/*
PROJECT 1
We will write a program that generates a random number and asks the player to guess
it. If the player’s guess is higher than the actual number, the program displays “Lower
number please”. Similarly, if the user’s guess is too low, the program prints “Higher
number please”.
When the user guesses the correct number, the program displays the number of
guesses the player used to arrive at the number.
*/
#include<stdio.h>
int main(){
int n=18;
int g;
cc:
printf("\nHint : number is between 10 and 20");
printf("\nGUESS THE NUMBER : ");
scanf("%d",&g);
if(g==n){
    printf("\nCongrats..You guessed correct!!\n");
}
else if(g>n){
    printf("\nLower number please!!\n");
    goto cc;
}
else{
    printf("\nHigher number please!!\n");
    goto cc;
}
}

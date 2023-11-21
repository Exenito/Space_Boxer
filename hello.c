#include <stdio.h>

int main(void) {

float weight;  // declare variables
int numberOfPlanets = 0;
float gravity;

printf("Mac what is your weight?\nEnter here: ");
scanf("%f", &weight); // input for weight

printf("Please enter a number for the planet you want to fight on: ");
scanf("%d", &numberOfPlanets); // input for the number of planet

switch (numberOfPlanets) { // switch statement for planets
  case 1:
  printf("Mercury\n");
  gravity = 0.38;
  if (numberOfPlanets == 1) {
      printf("Your weight will be on Mercury %.2fkg", weight = weight * gravity, weight);
  }
  break;
  case 2:
  printf("Venus\n");
  gravity = 0.91;
  if (numberOfPlanets == 2) {
      printf("Your weight will be on Venus %.2fkg", weight = weight * gravity, weight);
  }
  break;
  case 3:
  printf("Mars\n");
  gravity = 0.38;
  if (numberOfPlanets == 3) {
      printf("Your weight will be on Mars %.2fkg", weight = weight * gravity, weight);
  }
  break;
  case 4:
  printf("Jupiter\n");
  gravity = 2.34;
  if (numberOfPlanets == 4) {
      printf("Your weight will be on Jupiter %.2fkg", weight = weight * gravity, weight);
  }
  break;
  case 5:
  printf("Saturn\n");
  gravity = 1.06;
  if (numberOfPlanets == 5) {
      printf("Your weight will be on Saturn %.2fkg", weight = weight * gravity, weight);
  }
  break;
  case 6:
  printf("Uranus\n");
  gravity = 0.92;
  if (numberOfPlanets == 6) {
      printf("Your weight will be on Uranus %.2fkg", weight = weight * gravity, weight);
  }
  break;
  case 7:
  printf("Neptune\n");
  gravity = 1.19;
  if (numberOfPlanets == 7) {
      printf("Your weight will be on Neptune %.2fkg", weight = weight * gravity, weight);
  }
  break;
  default:
  printf("Numbers must be between 1 - 7.");
}
return 0;
}
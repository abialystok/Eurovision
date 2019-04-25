#include "eurovision.h"
#include <stdio.h>
//This is the main function for testing. make sure you're on 
//testing-branch before you work on it, and make sure you go
//back to master when you're done.
int main() {
	Eurovision eurovision = eurovisionCreate();
	int results[10] = { 101, 102, 103, 104, 105 };
	if (eurovisionAddJudge(eurovision, 55, "john", results) == EUROVISION_STATE_NOT_EXIST) {
		printf("an error has occured\n");
		return 1;
	}
	else printf("number of judges is %d\n", getAmountOfJudges(eurovision));
	eurovisionRemoveJudge(eurovision, 55);
	printf("number of judges is %d", getAmountOfJudges(eurovision));
	return 0;
}
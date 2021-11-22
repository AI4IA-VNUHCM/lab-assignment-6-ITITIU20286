/*
2. Receive n strings from the input and sort them ascendingly.
Ex:
 _________________________________________
| Input: one two three                    |
| Output: one three two                   |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex2(int n, char *str[]){
	//Your codes here
	int sapxep[n];

    for(int i = 0; i < n; i++)
        sapxep[i] = i;

    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
        {
            int m = 0;

            while(str[sapxep[i]][m] != '\0')
            {
                if(str[sapxep[i]][m] > str[sapxep[j]][m])
                {
                    int temp = sapxep[i];
                    sapxep[i] = sapxep[j];
                    sapxep[j] = temp;
                    break;
                }
                else if(str[sapxep[i]][m] == str[sapxep[j]][m])
                    m++;
                else
                    break;
            }
        }

    for(int i = 0; i < n; i++)
        printf("%s ", str[sapxep[i]]);
}


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	char *testcase[100];
	int i;
	for(i=0; i<argc; i++){
		testcase[i] = argv[i+1];
	}
	
	Ex2(argc, testcase);
	
	return 0;
}
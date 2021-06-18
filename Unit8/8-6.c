#include <stdio.h>
int main(void){
  int i,j,k;

  printf("  |");
  for(i = 1; i < 10; i++){
    printf(" %2d", i);
  }
  printf("\n");
  puts("------------------------------");


  for(k = 1; k <= 9; k++){
    printf("%d |", k);
    
		for(j = 1; j <= 9; j++){
			printf(" %2d", j*k);
		}

		printf("\n");
	}

	return 0;
}

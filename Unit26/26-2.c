#include <stdio.h>
#define NUM 3
typedef struct Member {    /*Member は省略できる*/
	double avg;
	int hr;
    struct Member *next;
} MEMBER;

// int show_member(MEMBER *pT, char *str);
int show_list(MEMBER *start, char*str);

int main(void){
  MEMBER team[NUM], *pT;

  team[0].avg = 0.275;	team[0].hr = 14;
  team[1].avg = 0.288;	team[1].hr = 21;
  team[2].avg = 0.305;	team[2].hr = 29;

  team[0].next = &team[1];
  team[1].next = &team[2];
  team[2].next = NULL;
  pT = team; pT -> next = pT -> next -> next;
  show_list(team,"list");

  
   
  return 0;
}

/*
int show_member(MEMBER *pM, char *str){
  int i=0;
  printf("--- %s ---\n", str);
  for(i=0; i<NUM; i++){
    printf("[%d] avg %5.3f : HR %d\n", i, (pM+i)->avg, (*(pM+i)).hr);
  }

  return 0;
}
*/

int show_list(MEMBER *start, char *str){
    MEMBER *pT;
    printf("--- %s ---\n", str);
    for(pT = start; pT -> next != NULL; pT = pT -> next){
        printf("avg: %5.3f, HR: %d \n", pT -> avg, pT -> hr);
    }
    printf("avg: %5.3f, HR: %d \n", pT -> avg, pT -> hr);
    return 0;
}
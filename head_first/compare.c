#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare_scores( const void* score_a, const void* score_b ){
  int a = *(int*)score_a;
  int b = *(int*)score_b;
  return a - b;
}

int compare_scores_desc( const void* score_a, const void* score_b) {
  int a = *(int*)score_a;
  int b = *(int*)score_b;
  return b - a;
}

typedef struct {
  int width;
  int height;
} rectangle;

int compare_areas(const void* a, const void* b){
  rectangle *r_a = (rectangle *)a;
  rectangle *r_b = (rectangle *)b;
  return (r_a->width * r_a->height) - (r_b->width * r_b->height);
}

int compare_names(const void* a, const void* b){
  char** s_a = (char**)a;
  char** s_b = (char**)b;
  return strcmp(*s_a, *s_b);
}

int compare_areas_desc( const void* a, const void* b){
  return compare_areas(b,a);
}

int compare_names_desc(const void* a, const void* b){
  return compare_names(b, a);
}


int main(){
  int scores[] = {543,323,32,554,11,3,112};
  int i;
 
  qsort(scores, 7, sizeof(int), compare_scores_desc);
  puts("These are the Scores in order:");
  for (i=0; i<7; i++)
    printf("Score = %d\n", scores[i]);

  char *names[] = {"Karen", "Mark", "Brett", "Molly"};
  qsort(names, 4, sizeof(char*), compare_names);
  puts("Nombres en orden:");
  for(i=0; i<4; i++)
    printf("%s\n", names[i]);

  return 0;
}

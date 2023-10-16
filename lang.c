#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  char name[30];
  char enter[4];
  printf("Enter your name:");
  scanf("%s", name);

  printf("Hello %s. Would you like to play a quiz game ?\n >>",name);
  scanf("%s",enter);
  if(strcmp(enter, "yes") == 0){
    char q1[7];

    printf("Thats Nice %s. let's start game...\n",name);
    printf("1. Who is the most powerful person in the world?\n >>");
    scanf("%s", q1);
    if(strcmp(q1, "putin") == 0){
      printf("Yes we consider Putin as powerful person. Next question..\n");
    }else{
      printf("%s is the wrong answer dear %s", q1,name);
    }
  }else if(strcmp(enter, "no") == 0 ){
    printf("Thats nice of you .");
  }else{
    printf("Ok bitch");
  }
return 0;

}
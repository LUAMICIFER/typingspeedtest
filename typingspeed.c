#include <stdio.h>
#include <string.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
int main() {
  
  float speed;
      time_t seconds;
      time_t seconds1;
  char name[35][10],real[][10]={"Did","you","know","that","winds","are","generally","silent?","No","matter","how","fast","they","go,","if","nothing","is","blocking","them,","they","will","not","make","a","sound.","They","only","start","making","noises","when","they","blow","against","something."};
  int i, x;
  float f=0;
  printf("Did you know that winds are generally silent? No natter how fast they go, if nothing is blocking them, they will not make a sound. They only start making noises when they blow against something.\n");
  printf("get started:");
  getchar();
  printf("start typing:\n");
    seconds = time(NULL);
  for (i = 0; i < 35; i++)
    scanf("%s", &name[i][0]);
   for (i = 0; i < 35; i++) {
    x = strcmp(&name[i][0],&real[i][0]);
    if (x == 0){
      f++;
    }
  }
  seconds1 = time(NULL);
speed=f*60/(seconds1-seconds);
  printf("\n \n Number Of Words Typed Right: %f \n",f);
  printf("\n speed= %f wpm\n",speed);
  printf("\n accuracy %f percent\n",f*100/35);
  printf("\n wrong words %f\n",35-f);
  printf("\n time taken %ld seconds\n",(seconds1-seconds));
  return 0;
}

#include <stdio.h>
#include <string.h>
#include<time.h>
#include<unistd.h>
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
  printf("number of words typed right: %f \n",f);
  printf("%f",speed);
  return 0;
}

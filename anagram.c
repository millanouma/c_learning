#include <stdio.h>
#include <string.h>

int main() {
  int counter1[] = {0, 0, 0, 0};
  int counter2[] = {0, 0, 0, 0};
  int flag = 0;
  char s1[] = "code";

  char s2[] = "deco";
  
  int size_s1 = strlen(s1);
 for(int i = 0; i < size_s1; i++){
   if(s1[i] == 'a'){
     counter1[0]++;
   } else if(s1[i] == 'b'){
     counter1[1]++;
   } else if(s1[i] == 'c'){
     counter1[2]++;
   }else if(s1[i] == 'd'){
     counter1[3]++;
   }else{
     continue;
   }
int size_s2 = strlen(s2);
  for(int x = 0; x  < size_s2; x++){
    if(s2[x] == 'a'){
      counter2[0]++;
    } else if(s2[x] == 'b'){
      counter2[1]++;
    } else if(s2[x]  == 'c'){
      counter2[2]++;
    } else if(s2[x] == 'd'){
      counter2[3]++;
    } else{
      continue;
    }
  }

 }
 //int flag = 0;

  for(int y = 0; y <= 4; y++){
    if(counter1[y] == counter2[y]){
      flag = 0;
      break;
    }
  }if (flag == 0){
    printf("Anagram!\n");
  }else{
    printf("Not Anagram!\n");
  }
  

}

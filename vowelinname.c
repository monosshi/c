#include<stdio.h>
#include<string.h>
   int i,vowel,consonant;
int main(){
    char str[100],ch;
    scanf("%s",&str);
    i=vowel=consonant=0;
     
     while((ch=str[i] )!='\0'){
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
            vowel++;
        }else{
            consonant++;
        }
        i++;
     }
    
     printf("Number of vowels = %d\n",vowel);
      printf("Number of consonants = %d\n",consonant);
    return 0;
}
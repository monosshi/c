#include<stdio.h>
int main(){
    char alpha;
    printf("Enter an alphapet : ");
    scanf("%c",&alpha);
    switch(alpha){
        case 'A': 
        case 'E': 
        case 'I': 
        case 'O': 
        case 'U': 
        case 'a': 
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u': 
        printf("VOWEL\n");
        break;
        default:
        printf("CONSONANT\n");
    }
    return 0;
}

// C program to count consonants,vowels,digits,spaces in string

#include<stdio.h>
 
int isVowel(char c);
int isConsonant(char c);
int isDigit(char c);
int isspaces(char c);
 
int main(){
    char str[500];
    int V = 0, C = 0, D = 0, W = 0, i;
     
    printf("Enter a string:");
    gets(str);
     
    for(i = 0;str[i] != '\0'; i++) {
        V += isVowel(str[i]);
        C += isConsonant(str[i]);
        D += isDigit(str[i]);
        W += isspaces(str[i]);
    }
     
    printf("Vowels: %d\n",V);
    printf("Consonants: %d\n",C);
    printf("Digits: %d\n",D);
    printf("spaces: %d",W);
     
 return 0;
}
 
int isVowel(char c){
 if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
    c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){ 
     return 1;
 } else {
     return 0;
 }
}
 
int isConsonant(char c) {
 if(((c>='a'&& c<='z') || 
    (c>='A'&& c<='Z')) && !isVowel(c)){
  return 1;
 } else {
  return 0;
 }
}
 
int isDigit(char c) {
 if(c>='0'&&c<='9'){
  return 1;
 } else {
  return 0;
 }
}
 
int isspaces(char c) {
 if(c == ' '){
  return 1;
 } else {
  return 0;
 }
}

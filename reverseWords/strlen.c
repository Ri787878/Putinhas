#include <string.h>
#include <stdio.h> 
/*
int main() {
	char nome[] = "Joao Coelho";
	printf("%c\n", nome[0]);

} 
*/
/*
int main() {
	char word[] = "01234 56789";
	int size;
	char hold;
	int a = 0;
 	size = strlen(word) - 1;
 	while (a < strlen(word) / 2) {
    	hold = word[a];
    	word[a] = word[size - a];
    	word[size - a] = hold;
    	a++;
  	}
  	printf("%s\n", word);

}
*/
/*
char text[] = "Porque? PORQUE EU SOU RICAAAA!";

int main() {  
  //Variaveis 
  char word;
  int textSize = strlen(text);
  int wordSize = strlen(&word) - 1;
  char hold;
  int a = 0, b = 0, c = 0;
  //passo caracter á caracter
  while (a < textSize) {
    //verificação se é um espaço 
    if (text[a] == ' '){
      //fecha a string (word) e inverte-a
      while (b < strlen(&word) / 2) {
        hold = word[b];
        word[b] = word[size - b];
        word[size - b] = hold;
        b++;
      }
      //reset para a proxima palavra
      memset(&word,'NULL', strlen(&word));
      c = 0;
    } else {
      word [c] = text[a];
      c++;
    }
    a++;
  }
}
*/
/*
int main() {
  char nome[] = "Ricardo Dias";
  printf("%s", nome [7 - 11]);
  return 0;
}
*/

int main() {
  int a;
  char hold;
  char test[80], blah[80];
  char *sep = " ";
  char *word, *phrase, *brkt, *brkb;
  strcpy(test, "This is a test of the string tokenizer  function.");
  for (word = strtok_r(test, sep, &brkt); word; word = strtok_r(NULL, sep, &brkt)) {
    while (a < strlen(word) / 2) {
    	hold = word[a];
    	word[a] = word[strlen(word) - 1 - a];
    	word[strlen(word) - 1 - a] = hold;
    	a++;
  	}
    a = 0;
    printf("So far we're at %s\n", word);     
   }
 }

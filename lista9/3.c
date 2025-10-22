#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char titulo[]="Titulo do livro";
	char subtitulo[]="Subtitulo do livro";
	
	strcat(titulo,"-");
	strcat(titulo,subtitulo);
	
	printf("%s",titulo);
	
	return 0;
}

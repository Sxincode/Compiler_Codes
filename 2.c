// 2.	Write the Lex program to count the number of lines, spaces and tabs

/* DESCRIPTION/DEFINITION SECTION */
%{
#include<stdio.h>
int lc=0,sc=0,tc=0;	// GLOBAL VARIABLES
%}

// RULE SECTION
%%
[\n] { lc++;} 
[ \t]{ if(yytext[0] == ' ') sc++; else tc++;}
%%

int yywrap(){ return 1; }
/*	After inputting press ctrl+d	*/

// MAIN FUNCTION
int main(){
printf("Enter the Sentence : "); 
yylex();
printf("Number of lines : %d\n",lc); 
printf("Number of spaces : %d\n",sc);
printf("Number of tabs : %d\n",tc);

return 0;
}


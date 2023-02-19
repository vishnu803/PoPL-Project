%{
    #include "parser.tab.h"
    int countn=0;
%}
%option yylineno

alpha [a-zA-Z]
digit [0-9]
unary "++"|"--"

%%

"show"                    { strcpy(yylval.nd_obj.name,(yytext)); return PRINTFF; }
"get"                     { strcpy(yylval.nd_obj.name,(yytext)); return SCANFF; }
"num"                       { strcpy(yylval.nd_obj.name,(yytext)); return INT; }
"deci"                     { strcpy(yylval.nd_obj.name,(yytext)); return FLOAT; }
"char"                      { strcpy(yylval.nd_obj.name,(yytext)); return CHAR; }
"nthg"                      { strcpy(yylval.nd_obj.name,(yytext)); return VOID; }
"reply"                    { strcpy(yylval.nd_obj.name,(yytext)); return RETURN; }
"trav"	                    { strcpy(yylval.nd_obj.name,(yytext)); return FOR; }
"until"                     {strcpy(yylval.nd_obj.name,(yytext)); return WHILE;}
"route"                     {strcpy(yylval.nd_obj.name,(yytext)); return SWITCH;}
"break"                     {strcpy(yylval.nd_obj.name,(yytext)); return BREAK;}
"default"                     {strcpy(yylval.nd_obj.name,(yytext)); return DEFAULT;}
"path"                     {strcpy(yylval.nd_obj.name,(yytext)); return CASE;}
"check"	                    { strcpy(yylval.nd_obj.name,(yytext)); return IF; }
"check_ow"	                    { strcpy(yylval.nd_obj.name,(yytext)); return ELIF; }
"ow"                        { strcpy(yylval.nd_obj.name,(yytext)); return ELSE; }   
^"#include"[ ]*<.+\.h>      { strcpy(yylval.nd_obj.name,(yytext)); return INCLUDE; }
"T"                      { strcpy(yylval.nd_obj.name,(yytext)); return TRUE; }
"F"                     { strcpy(yylval.nd_obj.name,(yytext)); return FALSE; }
[-]?{digit}+                { strcpy(yylval.nd_obj.name,(yytext)); return NUMBER; }
[-]?{digit}+\.{digit}{1,6}  { strcpy(yylval.nd_obj.name,(yytext)); return FLOAT_NUM; }
{alpha}({alpha}|{digit})*   { strcpy(yylval.nd_obj.name,(yytext)); return ID; }
{unary}                     { strcpy(yylval.nd_obj.name,(yytext)); return UNARY; }
"<="                        { strcpy(yylval.nd_obj.name,(yytext)); return LE; }
">="                        { strcpy(yylval.nd_obj.name,(yytext)); return GE; }
"=="                        { strcpy(yylval.nd_obj.name,(yytext)); return EQ; }
"!="                        { strcpy(yylval.nd_obj.name,(yytext)); return NE; }
">"	                        { strcpy(yylval.nd_obj.name,(yytext)); return GT; }
"<"	                        { strcpy(yylval.nd_obj.name,(yytext)); return LT; }
"&&"	                    { strcpy(yylval.nd_obj.name,(yytext)); return AND; }
"||"	                    { strcpy(yylval.nd_obj.name,(yytext)); return OR; }
"+"                         { strcpy(yylval.nd_obj.name,(yytext)); return ADD; }
"-"                         { strcpy(yylval.nd_obj.name,(yytext)); return SUBTRACT; }
"/"                         { strcpy(yylval.nd_obj.name,(yytext)); return DIVIDE; }
"*"                         { strcpy(yylval.nd_obj.name,(yytext)); return MULTIPLY; }
\/\/.*                      { ; }
\/\*(.*\n)*.*\*\/           { ; } 
[ \t]*                      { ; }
[\n]                        { countn++; }
.	                        { return *yytext; }
["].*["]                    { strcpy(yylval.nd_obj.name,(yytext)); return STR; }
['].[']                     { strcpy(yylval.nd_obj.name,(yytext)); return CHARACTER; }

%%

int yywrap() {
    return 1;
}

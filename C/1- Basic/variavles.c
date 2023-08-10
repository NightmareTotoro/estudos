// documento destinado ao treino de tipos de variariaveis

#include <stdio.h>

//variaveis são declaradas da seguinte forma:
// type variableName = valeu;
// sempre importante manter essa estrutura

 //variaveis declaradas fora do escopo main() são consideradas variaveis globais, que podem ser usadas por todo o codigo
 // tipos de variaveis existentes são: int, float, doable, char -> esses são os principais
 // outras variações possiveis
/* 
char
unsigned char
signed char
int
unsigned int
signed int
short
unsigned short
unsigned short int
signed short int
long int
signed long int
float
double
long double
*/

char variableChar = 'a';                       // 8  bits -128 -> 127
unsigned char variableUnChar = 'b';            // 8  bits    0 -> 255
signed char variableSiChar = 'c';              // 8  bits -128 -> 127

int intVariable = 1;                           // 16 bits -32.768 -> 32.767
unsigned int intUnsignedVariable = 2;          // 16 bits    0 -> 127
signed int intUnsignedVariable = 3;            // 16 bits --32.768 -> 32.767

short int shortIntVariable = 4;                // 16 bits -32.768 -> 32.767
unsigned short int shortIntUnVariable = 5;     // 16 bits    0 -> 127
signed short int shortIntSiVariable = 6;       // 16 bits -32.768 -> 32.767

long int longIntVariable = 7;                  // 32 bits -127 -> 127
unsigned long int longIntUnVariable = 8;       // 32 bits    0 -> 127
signed long int longIntsiVariable = 9;         // 32 bits -127 -> 127

float floatVariable = 3.2;                     // 32 bits -127 -> 127
double doableVariable = 4.3;                   // 64 bits -127 -> 127
long double doableVariableLong = 5.4;          // 80 bits -127 -> 127

int main(){

    return 0;
}
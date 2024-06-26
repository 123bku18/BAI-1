// Alignment requirements
// (typical 32 bit machine)

// char     1 byte
// short int  2 bytes
// int     4 bytes
// double    8 bytes

#include <stdio.h>
#include <stdlib.h>

// structure A
typedef struct structa_A {
	char c;
	short int s;
} structa_t;

// structure B
typedef struct structb_tag {
	short int s;
	char c;
	int i;
} structb_t;

// structure C
typedef struct structc_tag {
	char c;
	double d;
	int s;
} structc_t;

// structure D
typedef struct structd_tag {
	double d;
	int s;
	char c;
} structd_t;

int main(){
	printf("Size of struct %s", structd_A);
}
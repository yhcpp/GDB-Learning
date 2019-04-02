#include <math.h>
#include <stdio.h> 
#ifndef _SAMPLE_H
#define _SAMPLE_H

#ifdef __cplusplus
extern "C" {
#endif

void  __attribute__((constructor)) smaple_init(void); 


typedef struct termtype {       /* in-core form of terminfo data */
    char  *Booleans;   /* array of boolean values */

} TERMTYPE;


typedef struct term {       /* describe an actual terminal */
    TERMTYPE    type;       /* terminal type description */
} TERMINAL;


#undef CUR
#define CUR cur_term->type.


#define sampleflag              CUR Booleans[20]
/* A C data structure */
typedef struct Point {
    double x,y;
} Point;

int gcd(int x, int y);
int in_mandel(double x0, double y0, int n);
int divide(int a, int b, int *remainder);
double avg(double *a, int n);
double distance(Point *p1, Point *p2);
int set_cur_term(TERMINAL *temp);

#ifdef __cplusplus
}
#endif
#endif
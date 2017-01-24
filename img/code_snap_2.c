/* Generated from  by CLooG 0.18.3-1-g10a5ba4 gmp bits in 1.02s. */
/* Useful macros. */
#define floord(n,d) (((n)<0) ? -((-(n)+(d)-1)/(d)) : (n)/(d))
#define ceild(n,d)  (((n)<0) ? -((-(n))/(d)) : ((n)+(d)-1)/(d))
#define max(x,y)    ((x) > (y) ? (x) : (y))
#define min(x,y)    ((x) < (y) ? (x) : (y))

#ifdef TIME 
#define IF_TIME(foo) foo; 
#else
#define IF_TIME(foo)
#endif

#include <stdio.h>

void lin_solve_opt( int N, int b, float **x, float **x0, float a, float c)
{
	//int i, j, k;
	//printf("lin_solve version %d\n", 88);
	#pragma scop
 /* Scattering iterators. */
 int k, i, j;

 if (N >= 1) {
   for (i=1;i<=N;i++) {
     for (j=1;j<=N;j++) {
       x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
     }
   }
   if (N >= 201) {
     for (k=1;k<=2;k++) {
       for (i=1;i<=60;i++) {
         for (j=82;j<=N;j++) {
           x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
         }
       }
       for (i=61;i<=120;i++) {
         for (j=22;j<=N;j++) {
           x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
         }
       }
       for (i=121;i<=140;i++) {
         for (j=42;j<=N;j++) {
           x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
         }
       }
       for (i=141;i<=200;i++) {
         for (j=82;j<=N;j++) {
           x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
         }
       }
       for (i=201;i<=N;i++) {
         for (j=1;j<=N;j++) {
           x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
         }
       }
     }
   }
   if ((N >= 141) && (N <= 200)) {
     for (k=1;k<=2;k++) {
       for (i=1;i<=60;i++) {
         for (j=82;j<=N;j++) {
           x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
         }
       }
       for (i=61;i<=120;i++) {
         for (j=22;j<=N;j++) {
           x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
         }
       }
       for (i=121;i<=140;i++) {
         for (j=42;j<=N;j++) {
           x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
         }
       }
       for (i=141;i<=N;i++) {
         for (j=82;j<=N;j++) {
           x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
         }
       }
     }
   }
   if ((N >= 121) && (N <= 140)) {
     for (k=1;k<=2;k++) {
       for (i=1;i<=60;i++) {
         for (j=82;j<=N;j++) {
           x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
         }
       }
       for (i=61;i<=120;i++) {
         for (j=22;j<=N;j++) {
           x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
         }
       }
       for (i=121;i<=N;i++) {
         for (j=42;j<=N;j++) {
           x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
         }
       }
     }
   }
   if ((N >= 82) && (N <= 120)) {
     for (k=1;k<=2;k++) {
       for (i=1;i<=60;i++) {
         for (j=82;j<=N;j++) {
           x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
         }
       }
       for (i=61;i<=N;i++) {
         for (j=22;j<=N;j++) {
           x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
         }
       }
     }
   }
   if ((N >= 61) && (N <= 81)) {
     for (k=1;k<=2;k++) {
       for (i=61;i<=N;i++) {
         for (j=22;j<=N;j++) {
           x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
         }
       }
     }
   }
   if ((N >= 61) && (N <= 101)) {
     for (i=61;i<=N;i++) {
       for (j=22;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
   }
   if (N >= 201) {
     for (i=1;i<=40;i++) {
       for (j=102;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=41;i<=60;i++) {
       for (j=122;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=61;i<=120;i++) {
       for (j=22;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=121;i<=140;i++) {
       for (j=42;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=141;i<=160;i++) {
       for (j=142;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=161;i<=200;i++) {
       for (j=162;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=201;i<=N;i++) {
       for (j=1;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
   }
   if ((N >= 162) && (N <= 200)) {
     for (i=1;i<=40;i++) {
       for (j=102;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=41;i<=60;i++) {
       for (j=122;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=61;i<=120;i++) {
       for (j=22;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=121;i<=140;i++) {
       for (j=42;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=141;i<=160;i++) {
       for (j=142;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=161;i<=N;i++) {
       for (j=162;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
   }
   if ((N >= 142) && (N <= 161)) {
     for (i=1;i<=40;i++) {
       for (j=102;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=41;i<=60;i++) {
       for (j=122;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=61;i<=120;i++) {
       for (j=22;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=121;i<=140;i++) {
       for (j=42;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=141;i<=min(160,N);i++) {
       for (j=142;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
   }
   if ((N >= 122) && (N <= 141)) {
     for (i=1;i<=40;i++) {
       for (j=102;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=41;i<=60;i++) {
       for (j=122;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=61;i<=120;i++) {
       for (j=22;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=121;i<=min(140,N);i++) {
       for (j=42;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
   }
   if (N == 121) {
     for (i=1;i<=40;i++) {
       for (j=102;j<=121;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=61;i<=120;i++) {
       for (j=22;j<=121;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (j=42;j<=121;j++) {
       x[121][j] = (x0[121][j] + a*(x[(121)-1][j]+x[121+1][j]+x[121][(j)-1]+x[121][j+1]))/c;
     }
   }
   if ((N >= 102) && (N <= 120)) {
     for (i=1;i<=40;i++) {
       for (j=102;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
     for (i=61;i<=N;i++) {
       for (j=22;j<=N;j++) {
         x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
       }
     }
   }
   if (N >= 202) {
     for (k=4;k<=19;k++) {
       for (i=1;i<=200;i++) {
         for (j=202;j<=N;j++) {
           x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
         }
       }
       for (i=201;i<=N;i++) {
         for (j=1;j<=N;j++) {
           x[i][j] = (x0[i][j] + a*(x[(i)-1][j]+x[i+1][j]+x[i][(j)-1]+x[i][j+1]))/c;
         }
       }
     }
   }
   if (N == 201) {
     for (k=4;k<=19;k++) {
       for (j=1;j<=201;j++) {
         x[201][j] = (x0[201][j] + a*(x[(201)-1][j]+x[201+1][j]+x[201][(j)-1]+x[201][j+1]))/c;
       }
     }
   }
 }
	#pragma endscop
}


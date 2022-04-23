#pragma once
#include <stdio.h>


int Get2Bytes(FILE *fp);
int Get4Bytes(FILE *fp);
int BMP_analysis(FILE *fpi, int *xsize, int *ysize);
void Load_bmp(unsigned char *srcp,char *filename, int *in_xsize, int *in_ysize);

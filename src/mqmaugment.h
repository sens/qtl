/**********************************************************************
 *
 * mqmaugment.h
 *
 * copyright (c) 2009 Ritsert Jansen, Danny Arends, Pjotr Prins and Karl Broman
 *
 * last modified Apr, 2009
 * first written Feb, 2009
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License, 
 *   version 3, as published by the Free Software Foundation.
 *
 *   This program is distributed in the hope that it will be useful, 
 *   but without any warranty; without even the implied warranty of
 *   merchantability or fitness for a particular purpose. See the GNU
 *   General Public License, version 3, for more details.
 *
 *   A copy of the GNU General Public License, version 3, is available
 *   at http://www.r-project.org/Licenses/GPL-3
 *
 **********************************************************************/

#ifdef __cplusplus
  extern "C" {
#endif

/*
Data augmentation routing
*/

void R_mqmaugment(int *geno, double *dist, double *pheno, int *auggeno, 
               double *augPheno, int *augIND, int *Nind, int *Naug, int *Nmark,
               int *Npheno, int *maxind, int *maxiaug, double *minprob, int
               *chromo, int *crosstype, int *verbose);

int calculate_augmentation(const int Nind, int const Nmark,const MQMMarkerMatrix markers);               

int mqmaugment(const MQMMarkerMatrix marker, const vector y, MQMMarkerMatrix *augmarker, vector *augy,
            ivector* augind, int *Nind, int *Naug, const int Nmark, 
            const cvector position,
            vector r, const int maxNaug, const int imaxNaug, const double minprob, 
            MQMCrossType crosstype, const int verbose);

#ifdef __cplusplus
  }
#endif

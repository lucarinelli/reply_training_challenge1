//
// Created by federica on 11/03/18.
//

#include <stdio.h>
#include "output.h"

FILE* output(path_t *path){
    FILE *out = fopen("output.txt","w");
    int i;
    if (path==NULL)
        fprintf(out,"IMPOSSIBLE\n");
    else{
        fprintf(out,"%d\n",path->length);
        for(i=0;i<path->length;i++)
            fprintf(out,"%d %d\n",path->points[i]->x,path->points[i]->y);
    }
    return out;
}
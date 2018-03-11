//
// Created by rinel on 3/11/2018.
//

#include "solve.h"
#include <stdlib.h>
#include <stdio.h>

path_t* solve(field_t* field){
    path_t *path;
    segment_t *segment;
    segment=(segment_t*)malloc(sizeof(segment_t));
    if(segment==NULL){
        printf("Error allocating 1");
        exit(EXIT_FAILURE);
    }

    segment->points[0]=field->start;
    segment->points[1]=field->destination;

    if(solve_r(field,path,segment))return path;
    return NULL;
}

int solve_r(field_t* field,path_t *path, segment_t *segment){
    //check
    //if good return
    //split and recur
}

int checkTrianglesOnSegment(segment_t segment){

}
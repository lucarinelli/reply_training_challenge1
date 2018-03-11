#ifndef REPLY_TRAINING_CHALLENGE1_INPUT_H
#define REPLY_TRAINING_CHALLENGE1_INPUT_H
#include "datastructure.h"

field_t* input(FILE *fp){
    int i, n;
    bsti_item_t *nuovo_hor, *nuovo_ver;
    field_t *field=malloc(sizeof(field_t));
    field->horizontal=malloc(sizeof(interval_bst_t));
    field->vertical=malloc(sizeof(interval_bst_t));
    field->horizontal->root=NULL;
    field->vertical->root=NULL;

    fscanf(fp, "%d %d %d %d", &(field->start.x), &(field->start.x), &(field->destination.x), &(field->destination.y));

    fscanf(fp, "%d", &n);
    field->n_triangles=n;
    field->triangles=malloc(n* sizeof(triangle_t));

    for(i=0; i<n; i++){
        fscanf(fp, "%d %d %d %d %d %d", &(field->triangles[i].points[0]->x),&(field->triangles[i].points[0]->y),&(field->triangles[i].points[1]->x),
               &(field->triangles[i].points[1]->y),&(field->triangles[i].points[2]->x),&(field->triangles[i].points[2]->y));

        nuovo_hor=malloc(sizeof(bsti_item_t));
        nuovo_hor->left=NULL;
        nuovo_hor->right=NULL;
        nuovo_hor->triangle=&(field->triangles[i]);

        if(field->horizontal->root==NULL){field->horizontal->root=nuovo_hor;}
        else{

        }

        nuovo_ver=malloc(sizeof(bsti_item_t));
        nuovo_ver->left=NULL;
        nuovo_ver->right=NULL;
        nuovo_ver->triangle=&(field->triangles[i]);

        if(field->vertical->root==NULL){field->vertical->root=nuovo_ver;}
        else{

        }

    }


    return field;
}

#endif REPLY_TRAINING_CHALLENGE1_INPUT_H
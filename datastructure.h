//
// Created by rinel on 3/11/2018.
//

#ifndef REPLY_TRAINING_CHALLENGE1_DATASTRUCTURE_H
#define REPLY_TRAINING_CHALLENGE1_DATASTRUCTURE_H

typedef struct field_t field_t;
typedef struct interval_bst_t interval_bst_t;
typedef struct path_t path_t;
typedef struct triangle_t triangle_t;
typedef struct bsti_item_t bsti_item_t;
typedef struct point_t point_t;
typedef struct segment_t segment_t;
typedef struct segment_list_t segment_list_t;
typedef struct point_list_t point_list_t;

struct field_t{
    interval_bst_t *horizontal,*vertical;
    point_t *start,*destination;
    triangle_t *triangles;
    int n_triangles;
};

struct interval_bst_t{
    bsti_item_t *root;
};

struct bsti_item_t{
    bsti_item_t *left, *right;
    int minHere,maxHere;
    triangle_t *triangle;
};

struct path_t{
    int length;
    point_list_t* points;
    segment_list_t *segments;
};

struct point_list_t{
    point_t *this;
    point_list_t *next;
};

struct segment_list_t{
    segment_t *this;
    segment_list_t *next;
};

struct triangle_t{
    point_t** points[3];
};

struct segment_t{
    point_t** points[2];
};

struct point_t{
    int x,y;
};

#endif //REPLY_TRAINING_CHALLENGE1_DATASTRUCTURE_H
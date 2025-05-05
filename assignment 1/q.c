#include "q.h"
#include <stdlib.h>

void create_queue(queue **p_q){
    (*p_q)=malloc(sizeof(queue));
    create_list(&((*p_q)->list));
}

void destroy(queue *q){
    destroy_list(q->list);
    free(q);
}

void enqueue(queue *q, int data){
    insert_list(q->list, data);//append it
}

int dequeue (queue *q){ // get element at index 0, remove it, return it
    int ret = q->list->array[0]; // need to also delete it
    delete_list_ind(q->list, 0);//now we can't access it again
    return ret;
}

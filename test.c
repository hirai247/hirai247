#include <stdio.h>
typedef struct arc_tag {
    struct arc_tag *nextout;
    struct arc_tag *nextin;
    struct node_tag *head;
    struct node_tag *tail;
} arc_t;

typedef struct node_tag {
    arc_t *firstin;
    arc_t *firstout;
} node_t;

void ls_test(arc_t *arcs, int m)
{
    int i;
    arc_t *arc;
    arc = arcs;
    for (i = 0; i < m; i++, arc = &arcs[i]) {
        arc->nextout = arc->tail->firstout;
        arc->tail->firstout = arc;
        arc->nextin = arc->head->firstin;
        arc->head->firstin = arc;
    }
}

typedef struct {
    int items[10][100];
} A;
A *ap;

void func() {}

void ap_test()
{
    int i, j;
    ap->items[0][0] = 0;
    for (i=0; i<10; i++) {
        for (j=0; j<100; j++) {
            func();
            ap->items[i][j] = i * j;
        }
    }
}

float a[1000];
float b[1000];

void lu_test(int n)
{
    int i;
    for (i = 0; i < n; i++) {
        a[i] = a[i] * b[i] + 1;
    }
}

void dr2_test(A* a, int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 100; k++) {
                a[i].items[j][k] = 0;
                a[i] = 0
            }
        }
    }
}


int main(int argc, char** argv)
{
    A test[5];
    A* p;
    if (argc > 0) p = test;

    dr2_test(p, 6);
    printf("OK\n");
    return 0;
}


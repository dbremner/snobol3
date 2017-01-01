#ifndef PROTOS_H
#define PROTOS_H

//sno2.c
struct node *compon(void);
struct node *nscomp(void);
struct node *push(struct node *stack);
struct node *pop(struct node *stack);
struct node *expr(start, eof, struct node *e);
struct node *match(start, struct node *m);
struct node *compile(void);

//sno3.c
int bextend(struct node *str, struct node *last);
int ubextend(struct node *str, struct node *last);
struct node *search(struct node *arg, struct node *r);

//sno4.c

struct node *and(struct node *ptr);
struct node *eval(struct node *e, t);
int doop(int op, int arg1, int arg2);
struct node *execute(struct node *e);
void assign(struct node *adr, struct node *val);
#endif

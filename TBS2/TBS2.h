#ifndef TBS2_H_INCLUDED
#define TBS2_H_INCLUDED

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

#define infoS(P) (P).infoS
#define nextS(P) (P) -> nextS
#define Top(S) ((S).Top)

#define infoQ(P) (P)->infoQ
#define nextQ(P) (P)->nextQ
#define head(Q) ((Q).head)
#define tail(Q) ((Q).tail)
#define nil NULL

typedef string infotype;
typedef struct elmstack *adrs;
typedef struct elmsqueue *adrq;

struct elmstack{
    infotype infoS;
    adrs nextS;
};

struct elmsqueue{
    infotype infoQ;
    adrq nextQ;
};

struct queue{
    adrq head;
    adrq tail;
};

struct stack{
    infotype infoS[999];
    int Top;
};

void createStack(stack &S);
bool isEmpty(stack S);
bool isFull(stack S);
void push(stack &S, infotype x);
infotype pop(stack &S);
void createQueue(queue &q);
void createElmQ(infotype x, adrq &p);
void enqueue(queue &Q, adrq p);
void showS(stack S);
void showQ(queue q);
void jumKata(stack S);
int selectMenu();
void processLine(stack &s,infotype line);
int jumKata(stack s,infotype x);
bool valid(infotype line);

#endif // TBS2_H_INCLUDED

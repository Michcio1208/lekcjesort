#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
#include <stack>
#include <iomanip>
#include <list>
using namespace std;

/*

lista jednokierunkowa 

a->b->->c->d->e->f->g->h->i->j->k->l->m->n->o->p->q->r->s->t->u->v->w->x->y->z


lista jednokierunkowa cykliczna

a->b->->c->...->a->b->c

lista dwukierunkowa

{a->b->->c->d->e->f->g->h->i->j->k->l->m->n->o->p->q->r->s->t->u->v->w->x->y->z
{a<-b<-c<-d<-e<-f<-g<-h<-i<-j<-k<-l<-m<-n<-o<-p<-q<-r<-s<-t<-u<-v<-w<-x<-y<-z

*/


int main() {
int n,k;
list<int> lista;
list<int>::iterator it;
cout<<"n= "; cin>>n;
cout<<"k= "; cin>>k;
for(int i=1; i<=n; i++) lista.push_back(i);
it=lista.begin();
for(int i=1; i<=n; i++){
    for(int j=1;j<k;j++){
        it++;
        if(it==lista.end()) it=lista.begin();
    }

cout<<"Krok "<<i<<" usuniety element: "<<*it<<endl;
it=lista.erase(it);
if(it==lista.end()) it=lista.begin();
}








}
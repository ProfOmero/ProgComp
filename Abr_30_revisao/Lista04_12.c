#include <stdio.h>

typedef struct {
  int x;
  int y;
} particula;

int houveColisao(particula* p1, particula* p2, int t, int* tCol) {
  int i;
  for(i=0; i<t; i++) {
    if ((p1[i].x == p2[i].x) && (p1[i].y == p2[i].y)) {
        *tCol = i;
        return(1);
    }
  }
  return(0);
}


int main() {
particula p1[] = {{1,1},{2,2},{3,3}};
particula p2[] = {{0,0},{1,1},{2,2}};
int tCol;
if(houveColisao(p1,p2,3,&tCol)==1)
    printf("Colidiu em t = %d.\n",tCol);
else
    printf("Sem colisao.\n");

}

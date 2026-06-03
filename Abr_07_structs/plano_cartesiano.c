#include <stdio.h>

int main() {
  typedef struct {
    int x;
    int y;
  } rgPonto;

  rgPonto p;

  int i, n;
  printf("Quantos pontos? ");
  scanf("%d", &n);

  for(i=1; i<=n; i++) {
      printf("\n");
      printf("%do. ponto\n", i);

      printf("coordenada 'x': ");
      scanf("%d", &p.x);

      printf("coordenada 'y': ");
      scanf("%d", &p.y);

      printf("\n");
      if ((p.x > 0) && (p.y > 0))
         printf("<<< Q1 >>>\n");
      else if ((p.x < 0) && (p.y > 0))
              printf("<<< Q2 >>>\n");
           else if ((p.x < 0) && (p.y < 0))
                   printf("<<< Q3 >>>\n");
                else if ((p.x > 0) && (p.y < 0))
                        printf("<<< Q4 >>>\n");
                     else if ((p.x != 0) && (p.y == 0))
                             printf("<<< eixo 'x' >>>\n");
                          else if ((p.x == 0) && (p.y != 0))
                                  printf("<<< eixo 'y' >>>\n");
                               else printf("<<< origem >>>\n");
  }

  return 0;
}

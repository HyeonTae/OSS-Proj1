#include <stdio.h>

int maint() {
  int a, b;

  printf("First OSS Code");
  printf("두개의 수를 입력하시오 : ");
  scanf("%d %d", &a, &b);

  printf("%d + %d = %d", a, b, a + b);

  return 0;
}

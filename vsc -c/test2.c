#include <stdio.h>
#include <string.h>
int main()
{
  double number;
  scanf("%lf", &number);
  char buffer[20];
  sprintf(buffer, "%.3lf", number); // 将数字格式化为字符串
  int len = strlen(buffer); // 获取字符串的长度
  printf("[%0.3lf]\n", number);
  printf("[%-12.3lf]\n", number);
  printf("[%*s%.3lf%*s ]\n", (12 - len) / 2, "", number, (12 - len) / 2, "");
  printf("[%12.3lf]\n", number);
}
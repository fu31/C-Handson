# include <stdio.h>
# include <time.h>

int main () {
  clock_t start,end;
  start = clock();
  int dice;
  printf("1~6までのサイコロの値を入力");
  scanf("%d",&dice);

  if (dice % 2 == 0 && dice < 7 && dice > 0){
    printf("サイコロの目は%d 丁\n",dice);
  }
  else if (dice % 2 != 0 && dice < 7 && dice > 0){
    printf("サイコロの目は%d 半\n",dice);
  }
  else  {
    printf("入力した値が正しくないです。\n");
  }
  end = clock();
  printf("%.2f秒かかりました\n",(double)(end-start)/CLOCKS_PER_SEC);

  return 0;

}
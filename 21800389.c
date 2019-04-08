#include <stdio.h>

int test(int btwnnum);

int main(){
  int m,n,minprimenum;
  int primenumsum=0;

  scanf("%d\n%d",&m,&n);

  for(int btwnnum=m; btwnnum<=n; btwnnum++){
	if(primenumsum==0&&test(btwnnum)!=0)
		minprimenum=test(btwnnum);
    primenumsum+=test(btwnnum);
  }

  if(primenumsum==0)
    printf("-1");
  else
    printf("%d\n%d\n",primenumsum,minprimenum);
}

int test(int btwnnum){
  int checknum=1;
  while(1){
    checknum++;
    if(btwnnum!=checknum&&btwnnum%checknum==0)
      return 0;
    else if(btwnnum==checknum&&btwnnum%checknum==0)
      return btwnnum;
  }
}

// @ BEGIN source_code
#include <cstdio>
#include <cstdlib>
using namespace std;

int jolly[3001];

int main(){
 int n;
 while(scanf("%d",&n)){
  int a, b;
  for(int i = 0 ; i< n ; i++) jolly[i] = 0;
  scanf("%d",&a);
  for(int i = 0 ; i < n-1 ; i++){
   scanf("%d",&b);
   int index = abs(a-b);
   jolly[index]++;
   a = b;
  }
  bool isjolly = true;
  for(int i = 1 ; i < n ; i++)
   if(jolly[i] == 0){
    isjolly = false;
    break;
   }

  if(isjolly) printf("Jolly\n");
  else printf("Not jolly\n");
 }
 return 0;
}

// @ END source_code

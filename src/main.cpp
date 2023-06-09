#include <iostream>

using namespace std;
void calculate (int x, int y,char o)
{
  int total;
    if(o=='+'){
        total=x+y;
        cout<<total;}
  else if(o=='-'){
        total=x-y;
        cout<<total;}
 else if(o=='*'){
        total=x*y;
        cout<<total;}
  else if(o=='/'){
        total=x/y;
        cout<<total;}
        else {
          cout<<"wrong input";
        }

}
int main(){
   
    int a,b;
    char op;
    cin>>a;
    cin>>op;
    cin>>b;
    calculate (a,b,op);
    return 0;
}
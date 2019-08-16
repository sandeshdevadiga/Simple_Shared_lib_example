#include<iostream>
#include"myshared.h"

using namespace std;



class ourimp:public myshared
{

void notifyconnect ()
{
cout<< " we are notified";

}



};

int main(){

ourimp a;
a.connect();
return 0;
}

#include "helloclass.h"

using namespace std;


HelloClass::HelloClass()
{
   cout<<"I' am being created.\n";
}

HelloClass::~HelloClass()
{
   cout<<"I'm being destroyed.\n";
}

void HelloClass::sayHello()
{
   cout<<"Hello class!\n"<<endl;
}

#include <iostream>
#include <string>
#include <vector>
#include "ReduceGeneric.h"
using namespace std;

ReduceGeneric::ReduceGeneric(){}
//apply binary operator to every two elements
vector<int> ReduceGeneric::reduce(vector<int> v, int size)
{
   if(size == 2)
   {
      v[0] = binaryOperator(v[0], v[size-1]);
      v.resize(1);
      return v;
   }
   else
   {
      v[0] = binaryOperator(v[0], v[size-1]);
      return reduce(v, size-1);
   } 
}


vector<int> ReduceGeneric::reduce(vector<int> v)
{
   int length = v.size();
   return reduce(v,length);
}

ReduceGeneric::~ReduceGeneric(){}

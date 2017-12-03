#include <iostream>
#include <string>
#include <vector>
#include "MapGeneric.h"
using namespace std;

MapGeneric::MapGeneric(){}
//apply f to every element in v
vector<int> MapGeneric::map(vector<int> v, int size)
{
   vector<int> newVector;
   int newValue;
   if(size==1) //base case
   {
      newValue = f(v[0]);
      newVector.push_back(newValue);
      return newVector;
   }  
   else
   {
      newVector = map(v,size-1);
      newValue = f(v[size-1]);
      newVector.push_back(newValue);
      return newVector;
   }
}


vector<int> MapGeneric::map(vector<int> v)
{
   int length = v.size();
   return map(v,length);
}

MapGeneric::~MapGeneric(){}
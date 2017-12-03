#include <iostream>
#include <string>
#include <vector>
#include "FilterGeneric.h"
using namespace std;

FilterGeneric::FilterGeneric(){}
//apply g to every element
vector<int> FilterGeneric::filter(vector<int> v, int size)
{
   vector<int> newVector;
   if(size==1)
   {
      if(g(v[0]))
      {
         newVector.push_back(v[0]);//if true add to the back of new vector
         return newVector;
      }
      else
      {
         return newVector;
      }
   }  
   else
   {
      newVector = filter(v,size-1);
      if(g(v[size-1]))
      {
         newVector.push_back(v[size-1]);//if true add to the back of new vector
         return newVector;
      }
      else
      {
         return newVector;
      }   
   }
}


vector<int> FilterGeneric::filter(vector<int> v)
{
   int length = v.size();
   return filter(v,length);
}

FilterGeneric::~FilterGeneric(){}
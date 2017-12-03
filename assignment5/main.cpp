#include <iostream>
#include <sstream>
#include <iterator>
#include <string>
#include <vector>
#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"
using namespace std;


int main()
{
   string input;
   getline( std::cin, input );  //collect input in one line

   int i=0;
   while(i<input.length())     //remove non digit
   {
      if (isdigit(input[i]) || input[i] == ' ')
      {
         input[i]=input[i];
         i++;
      }
      else
      {
         input.erase(i,1);
      }
   }
   istringstream is( input );
   vector<int> L( ( istream_iterator<int>( is ) ), istream_iterator<int>() ); //put inputs into a vector
////////////////////////triple and absolute all elements in L then put the result in L1/////////////////////////////////////
   MapTriple triple;
   MapAbsoluteValue absolute;
   vector<int> L1;
   L1 = triple.map(absolute.map(L));
////////////////////////filter out odd && positive two digits elements from L1 then put the result in L2//////////////////////////////////////
   FilterOdd odd;
   FilterForTwoDigitPositive two_digit_positive;
   vector<int> L2;
   L2 = two_digit_positive.filter(odd.filter(L1));
////////////////////////find minimum from L2 put in L3, find GCD from L2 put in L4///////////////////////////////////////////////////
   ReduceMinimum minimum;
   ReduceGCD GCD;
   vector<int> L3;
   vector<int> L4;
   L3 = minimum.reduce(L2);
   L4 = GCD.reduce(L2);
////////////////////////output result/////////////////////////////////////////////////////////////////////
   cout << L3[0] << " " << L4[0] << endl;
   return 0;
}
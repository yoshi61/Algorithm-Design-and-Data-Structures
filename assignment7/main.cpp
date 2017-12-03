#include <iostream>
#include <sstream>
#include <iterator>
#include <string>
#include <vector>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
using namespace std;


int main()
{
   //collect input in one line and put in vectors
   string input;
   getline( std::cin, input );
   istringstream is( input );
   vector<string> L( ( istream_iterator<string>( is ) ), istream_iterator<string>() );
   //creat two Individuals with the two vectors
   Individual binarystr1(L[0]);
   Individual binarystr2(L[2]);
   //convert string into integers
   string k11 = L[1];
   string k22 = L[3];
   int k1 = 0;
   int k2 = 0;
   stringstream stoi1(k11);
   stoi1 >> k1;
   
   stringstream stoi2(k22);
   stoi2 >> k2;
   //creat BitFlip mutator and Rearrange mutator
   BitFlip bf_mutator;
   Rearrange ra_mutator;
   //The BitFlip mutation and Rearrange mutation are invoked on the first and the second Individual with index k1 and k2 respectively
   binarystr1 = bf_mutator.mutate(binarystr1, k1);
   binarystr2 = ra_mutator.mutate(binarystr2, k2);
   //output the result
   cout << binarystr1.getString() << " " << binarystr2.getString() << " " << binarystr2.getMaxOnes() << endl; 




   return 0;
}
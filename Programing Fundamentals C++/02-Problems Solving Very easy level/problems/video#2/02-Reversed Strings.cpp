#include <string.h>
using namespace std ; 

string reverseString (string str )
{
    reverse(str.begin(), str.end());
    return str ;
}
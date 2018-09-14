
#include "utst.h"

int gcd( int x, int y )
{
	
	if(x==0) return y;
	if(y==0) return x;
  while ( y != 0 ) {
    if ( x < y ) {
      int temp = x;
      x = y;
      y = temp;
      
    }
    else {
      x = x - y;
    }
  }
  return x;
}

int main()
{
  UTST_BEGIN();

  UTST_ASSERT_INT_EQ( gcd(0,5), 5 );
   UTST_ASSERT_INT_EQ( gcd(5,0), 5 );
   UTST_ASSERT_INT_EQ( gcd(6,2), 2);
   UTST_ASSERT_INT_EQ( gcd(2,6), 2);

  UTST_END();
  return 0;
}


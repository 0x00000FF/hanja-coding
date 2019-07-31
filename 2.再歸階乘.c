#包含 <標準入出.頭>

整數 階乘(整數 始數)
{
    假定   ( 始數 == 1 ) 反還 1;
    再假定 ( 始數 < 1 ) 反還 0;
    假定外 反還 始數 * 階乘( 始數 - 1);
}

整數 進入(整數 因子個, 文子* 因子文[]) 
{
    書式出力("%十\新", 階乘(4)); // 24
    反還 0;
}

// -----------------------------------------

#include <stdio.h>

int factorial(int start_no)
{
    if      ( start_no == 1 ) return 1;
    else if ( start_no < 1 )  return 0;
    else return start_no * factorial(start_no - 1);    
}

int main(int argc, char* argv[])
{
    printf("%d\n", factorial(4));
    return 0;
}

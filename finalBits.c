
/* 
 * CS:APP Bitbasher Project 
 * 
 * <Please put your name and userid here>
   Nina Ervin
   ervinn
 * 
 * bits.c - Source file with your solutions to the project.
 *          
 *
 * WARNING: Do not include the <stdio.h> header; it confuses the dlc
 * compiler. You can still use printf for debugging without including
 * <stdio.h>, although you might get a compiler warning. In general,
 * it's not good practice to ignore compiler warnings, but in this
 * case it's OK.  
 */

#if 0
/*
 * Instructions to Students:
 *
 * STEP 1: Read the following instructions carefully.
 *

You will create your solution to the Bitbasher Project  by
editing the collection of functions in this source file.

INTEGER CODING RULES:
 
  Replace the "return" statement in each function with one
  or more lines of C code that implements the function. Your code 
  must conform to the following style:
*/
  int Funct(arg1, arg2, ...) {
      /* brief description of how your implementation works */
      int var1 ;
      ...
      int varM ;

      varJ = ExprJ;
      ...
      varN = ExprN;
      return ExprR;
  }

/*  Each "Expr" is an expression using ONLY the following:
  1. Integer constants 0 through 255 (0xFF), inclusive. You are
      not allowed to use big constants such as 0xffffffff.
  2. Function arguments and local variables (no global variables).
  3. Unary integer operations ! ~
  4. Binary integer operations & ^ | + << >>
    
  Some of the problems restrict the set of allowed operators even further.
  Each "Expr" may consist of multiple operators. You are not restricted to
  one operator per line.

  You are expressly forbidden to:
  1. Use any control constructs such as if, do, while, for, switch, etc.
  2. Define or use any macros.
  3. Define any additional functions in this file.
  4. Call any functions.
  5. Use any other operations, such as &&, ||, -, or ?:
  6. Use any form of casting.
  7. Use any data type other than int.  This implies that you
     cannot use arrays, structs, or unions.

 
  You may assume that your machine:
  1. Uses 2s complement, 32-bit representations of integers.
  2. Performs right shifts arithmetically.
  3. Has unpredictable behavior when shifting if the shift amount
     is less than 0 or greater than 31.


EXAMPLES OF ACCEPTABLE CODING STYLE:
   *
   * pow2plus1 - returns 2^x + 1, where 0 <= x <= 31
   */
  int pow2plus1(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     return (1 << x) + 1;
  }

  /*
   * pow2plus4 - returns 2^x + 4, where 0 <= x <= 31
   */
  int pow2plus4(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     int result = (1 << x);
     result += 4;
     return result;
  }

/* FLOATING POINT CODING RULES

For the problems that require you to implement floating-point operations,
the coding rules are less strict.  You are allowed to use looping and
conditional control.  You are allowed to use both ints and unsigneds.
You can use arbitrary integer and unsigned constants. You can use any arithmetic,
logical, or comparison operations on int or unsigned data.

You are expressly forbidden to:
  1. Define or use any macros.
  2. Define any additional functions in this file.
  3. Call any functions.
  4. Use any form of casting.
  5. Use any data type other than int or unsigned.  This means that you
     cannot use arrays, structs, or unions.
  6. Use any floating point data types, operations, or constants.


NOTES:
  1. Use the dlc (data lab checker) compiler (described in the handout) to 
     check the legality of your solutions.
  2. Each function has a maximum number of operations (integer, logical,
     or comparison) that you are allowed to use for your implementation
     of the function.  The max operator count is checked by dlc.
     Note that assignment ('=') is not counted; you may use as many of
     these as you want without penalty.
  3. Use the btest test harness to check your functions for correctness.
  4. Use the BDD checker to formally verify your functions
  5. The maximum number of ops for each function is given in the
     header comment for each function. If there are any inconsistencies 
     between the maximum ops in the writeup and in this file, consider
     this file the authoritative source.

 *
 * STEP 2: Modify the following functions according the coding rules.
 * 
 *   IMPORTANT. TO AVOID GRADING SURPRISES:
 *   1. Use the dlc compiler to check that your solutions conform
 *      to the coding rules.
 *   2. Use the BDD checker to formally verify that your solutions produce 
 *      the correct answers.
 */


#endif
/* Copyright (C) 1991-2020 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */
/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */
/* glibc's intent is to support the IEC 559 math functionality, real
   and complex.  If the GCC (4.9 and later) predefined macros
   specifying compiler intent are available, use them to determine
   whether the overall intent is to support these features; otherwise,
   presume an older compiler has intent to support these features and
   define these macros by default.  */
/* wchar_t uses Unicode 10.0.0.  Version 10.0 of the Unicode Standard is
   synchronized with ISO/IEC 10646:2017, fifth edition, plus
   the following additions from Amendment 1 to the fifth edition:
   - 56 emoji characters
   - 285 hentaigana
   - 3 additional Zanabazar Square characters */
/* 
 * f2301 - return 1 if x == y, and 0 otherwise 
 *   Examples: f2301(5,5) = 1, f2301(4,5) = 0
 *   Legal ops: ! ^ 
 *   Max ops: 2
 *   Rating: 2
 */
int f2301(int x, int y) {
  //the first thing you want to do is x^y because if they are the same number then it will turn into all 0's
  //if its not the same num then there will be at least 1 one in the number
  //after that you want to return 1 if its the same number and 0 if its not
  //you do that by ! which if its all zeros will retun 1 and if it has a 1 then it will return 0
  return !(x^y);
}
/* 
 * f2302 - Check whether x is nonzero 
 *   Examples: f2302(3) = 1, f2302(0) = 0
 *   Legal ops: ~ & | + >>
 *   Max ops: 5
 *   Rating: 4 
 */
int f2302(int x) {
  int answer;
  //the first part is about making any number other then 0 all 1's and keeping 0 all zeros
  //   first you want to make sure that all numbers that are not zero have a 1 in the 31 place
  //   you do that by x | ~x but you need to add 1 because ~0000 0000 = 1111 1111 which add 1 = 0000 0000
  answer = x|(~x+1);
  //  then you shift by 31 because you want to make sure that the last palce has a 1
  //  now you have 1111 1111 & with 0000 0001 to get a 1
  answer = answer >> 31;
  //the second part is about making those all ones turn into just 1
  answer = answer & 1;
  return answer;
}
/* 
 * f2303 - /* if x <= y  then return 1, else return 0 */ 
// *   Example: f2303(4,5) = 1.
// *   Legal ops: ! ~ & ^ | + >>
// *   Max ops: 13
// *   Rating: 3

int f2303(int x, int y) {
  int a;
  int signX;
  int signY;
  int newY;
  newY = ~y; //this is just to take out repetitive operations.
 //this will make a var with the sign of both x and y. this means that if x is - then signx = 1's.
  signX = (x >> 31);
  //this is the same thing as signX exept we use ~y to get the reverse of x
  signY = (newY >> 31);
  //a has 2 major parts.
  //the first is (signY^signX) which will be 1 if the signs match or 0 if the signs dont match. this makes sure when we   compare x<y that its only 1 if the signs are the same
  //(((x+~y)>>31) checks if the x < y
  a = ((signY^signX)) & ((x+newY)>>31); //
  return ( a|(signY & signX)) & 1; //lastly we take the answer from z unless -x and +y. thats what signY & signX looks for
  //lastly we also have to & by one to make sure that we are just returning a 1 or a 0.
}
/* 
 * f2304 - if x > y  then return 1, else return 0 
 *   Example: f2304(4,5) = 0, f2304(5,4) = 1
 *   Legal ops: ! ~ & ^ | + >>
 *   Max ops: 12
 *   Rating: 3
 */
int f2304(int x, int y) {
  int a;
  int signX;
  int signY;
  int newX;
  //this will give all 0's if x is negative or all 1's if x is posative
  newX = ~x;//this is just to take out repetitive operations.
  signX = (newX >> 31);
  //this will give all 1's if y is negative or all 0's if y is posative
  signY = (y >> 31);
  //here we check if the signs are the same and if x > y. the big changes from probelm f2303 is the fact that its ~x instead of ~y and we use y+1.
  //we use y+1 to make sure we are not doing x >= y.
  //we also use ~x because we are doing > not <.
  a = (signY^signX) & ((newX+(y+1))>>31);
  //lastly we want to us a unless x is pos and y is neg so we check for that and then & with 1 to only get the last bit.
  return (a|(signY & signX)) & 1;
}
/* 
 * f2305 - return 1 if x < 0, return 0 otherwise 
 *   Example: f2305(-1) = 1.
 *   Legal ops: & >>
 *   Max ops: 2
 *   Rating: 2
 */
int f2305(int x) {
  //this is just the same thing I used to get the sign in problem f2303
  return (x >> 31) & 1;
}
/*
 * f2306 - return 1 if 0x30 <= x <= 0x39 
 * These are the ASCII codes for characters '0' to '9'
 *   Example: f2306(0x35) = 1.
 *            f2306(0x3a) = 0.
 *            f2306(0x05) = 0.
 *   Legal ops: ! ~ | + >>
 *   Max ops: 7
 *   Rating: 3
 */


/*
int smallerThen39;
  int largerThen30;
  //int answer;
  //subtract 0x30 from x to get a number between 0 and 9 if true
  //answer = (~0x3f)+x;
  //answer = 0x0a + ~answer;
  //return all 1's if x <= 0x39
  smallerThen39 = ((~0x39) + x)>>31;
  //return all 1's if x >= 0x30
    largerThen30 = (0x30 + (~x))>>31;
    //when you add 1's together you get -2 so if you add 2 then it should be 0 and ! turns the answer to 1.
    //any other number will give you some 1 and then ! turns the number to 0
  return !((smallerThen39 + largerThen30)+2);
 */
int f2306(int x) {
  int inUpperBound;
  int inLowerBound;
  //you take the upperbound and add 1 to save a step later in the code. you do this because you want 0x39 in the range
  int upperBound = 0x3a;
  //then you take the lower bound and set it to - 1 which is the same as adding one after you flip the bits
  int lowerBound = 0x2f;
  //you want to add upper and ~x to be able to check for overflow later
  inUpperBound = upperBound + ~x;
  //same thing from upperBound in lowerBound 
  inLowerBound = x + ~lowerBound;
  //lastly you want to or then together and shift them 31 all in one move to cut off some extra ops and ! so that it only returns a 1 or a 0 
  return !((inUpperBound | inLowerBound) >> 31);
  
}
/* 
 * f2307 - return 1 if x can be represented as a 
 *   16-bit, two's complement integer.
 *   Examples: f2307(33000) = 0, f2307(-32768) = 1
 *   Legal ops: ! ^  >>
 *   Max ops: 4
 *   Rating: 1
 */
int f2307(int x) {
  //you shift the number by 15 to get the last 17 bits. this is because you want to know if you will have overflow on a positive number
  int shiftX;
  int shiftTotal;
  //you shift over 15 to get all 1's or all 0's if you want to return 1 and some other compionation if you want return 0.
  // all 1's if negative and all 0's if postive
  shiftX = x >> 15;
  //you shift by 31 to get all 1's or all 0's depending on if its positive or negative.
  shiftTotal = x >> 31;
  //lastly you take those two numbers and ^ them together if they are the same it will be 0 and if its anything else it will be some compo of 1's and 0's. then you ! so that if its 0 it returns 1 (the correct answer) and 0 if anything else.
  return !(shiftX^shiftTotal);
}
/* 
 * f2308 - return x -> y in propositional logic - 0 for false, 1
 * for true. (->)  is called implication in propositional logic
 * A ->  B is false when A is true and B is false, 
 * and it is true in all other cases. 
 *   Example: f2308(1,1) = 1
 *            f2308(1,0) = 0
 *   Legal ops: ! ~ ^ |
 *   Max ops: 2
 *   Rating: 2
 */
int f2308(int x, int y) {
  //you want everything to be 1 unless x = 1 and y = 0;
  //an | will return 1 to everything exept when you have 0 and 0.
  //all you have to do is flip x so that then x = 1 it is repersented as 0.
  return (!x)|y;
}
/* 
 * f2309 - Return bit-level equivalent of expression (int) f
 *   for floating point argument f.
 *   Argument is passed as unsigned int, but
 *   it is to be interpreted as the bit-level representation of a
 *   single-precision floating point value.
 *   Anything out of range (including NaN and infinity) should return
 *   0x80000000u.
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 13
 *   Rating: 4
exp = (uf >> 23) & 0xff;
 */
int f2309(unsigned uf) {
    unsigned sign;
    unsigned exp;
    int e;
    int answer;
    
    //sign is either 10...0 or 00..00 to represent weather or not the float is negative of not
    sign = uf & 0x80000000;
    
    //you know that the exp value is 8 bits after the factional which is 23 bits in. we can find the just the numbers in the exp by masking is by 0111 1111 1000 ... 0000 (note the actual exp would be shifted by 23)
    exp = uf & 0x7f800000;
    
    //now that we have the exp we need to find how much we shift it by subtracting the bias in a 32 bit the bias is 127. but remember that the exp needs to be shfited by 23. you can do this all in one step by shifting the constant 127 by 23 and subtracting. the new constant is 0011 1111 1000 ... 0000. (this gets you the right e that you can use in the reast of the code)
    e = exp - 0x3f800000;
    
    //lastly we set answer to the factional bit
    answer = uf & 0x7fffff;
    
    
    //if the exp is all 1's then we know this is the specal case such as +oo or NaN which means we need to return 0x80000000u. we also need to return 0x80000000u whin e > 31 meaning that the int created will be to big for 32 bit representation. the good thing is that by checking if e > 31 we also weed out the NaN and +oo.
    if(e > 31){
        return 0x80000000u;
    }
    
    
    //next we want to check for a negative shift. since e is an unsigned we need to check if it is grader than 0xff if it is then we know that answer should be 0.
    if(e < 0){
        return 0;
    }
    
    //this adds the implied 1
    answer = answer + 0x800000;
    
    //since we put fractional in answer we already shifted the answer by 23 which means that we might need to shift it more or shift it back some.
    if(e > 23){
        //if e is bigger then 23 that means we need to shift the number more we shift by (e- 23) to accont for the fact that we already shifted 23
        answer = answer << (e - 23);
    }else{
        //if e is not bigger then 23 that means it is 23 or its less then 23. if its less that means we have to shift it back by (23-e) and if it is 23 then (23-23) = 0 which wounldn't shift the number
        answer = answer >> (23 - e);
    }
    
    //lastly we want to make the number negative if the float was negative
    if(sign){
    answer = -answer;
    }
  return answer;
}
/*
 * f2310 - return floor(log base 2 of x), where x > 0
 *   Example: f2310(16) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 27
 *   Rating: 4
 */
int f2310(int x) {
  int count;
  int shifter;
  int divideCount;
  count = 0;
  //this problem is asking you to find the place of the first 1. that mean in a 4 bit number such as 0100 I want to retun 2 and in a number such as 1000 I want to return 3. to get that number you can shift till the most signifaget one is in the 1's spot. My first atempt
  // newX = newX >> 1;
  //count = count + (!!newX);
  //and looped this 31 times. My second attempt is to shorten that by checking if half the numbers have a one. of the higher number does then you know that you don't have to check any other the lower numbers.
  //the first check you want to do is to split 32 in half and check in the higher 16 have a one.
  //the first step is to shift by 16 so that you can check the higher 16 and then !! to then return yes or no to wether you have a 1
  shifter = !!(x >> 16);
  //after that you want to shift by 4 to turn the 1 into 16 but to also make sure that all 0's stays all 0's
  count = shifter << 4;
  //the next step is to do almost the same step over again. this time we want to check the 8 most bits on either the lower 16 bits or the upper 16 bits depending on what the answer was for the last.
  //we want to shfit 8 if the higher 16 is all 0's and shift 24 if there was a 1 in the higher 16. we solve this problem by taking count which is either 16 or 0 and add 8 and shift x by this. after you !! it will be a 1 if that 8 had a 1 and 0 if not.
  shifter = !!(x >> (8+count));
  //then you to take that and shift it by 3 to either get 8 or 0
  divideCount = shifter << 3;
  //then add that number to the running total
  count = count + divideCount;
  //we repeat the same prossess over again but now we cut 8 into 4 and shift left by 2 to turn the number into 4 or 0
  shifter = x >> (4+count);
  divideCount = !!shifter << 2;
  count = count + divideCount;
  //we repeat the same prossess over again but now we cut 4 into 2 and shift ledt by 1 to turn the number into 2 or 0
  shifter = x >> (2+count);
  divideCount = !!shifter << 1;
  count = count + divideCount;
  //last step is to check that last higer order bit
  shifter = x >> (1+count);
  //last step we can just add shifter strait to counter because we dint need to shift anymore because we want to add either the 1 or the 0
  count = count + shifter;
  //lastly we return count which should hod the place of the highest ordered bit.
  return count;
}
/* 
 * f2311 - Extract byte n from word x
 *   Bytes numbered from 0 (LSB) to 3 (MSB)
 *   Examples: f2311(0x12345678,1) = 0x56
 *   Legal ops: & << >>
 *   Max ops: 3
 *   Rating: 2
 */
int f2311(int x, int n) {
  int answer;
  //this takes the number of bytes into the number of bits away you want.
  answer = n << 3;
  //then you want to shift so that the last byte is the byte you want to save.
  answer = x >> answer;
  //lastly you want to use a make on the last byte to just get the last byte.
  answer = answer & 0xff;
  return answer;
}
/* 
 * f2312 - Return bit-level equivalent of absolute value of f for
 *   point argument f.
 *   Both the argument and result are passed as unsigned int's, but
 *   they are to be interpreted as the bit-level representations of
 *   single-precision floating point values.
 *   When argument is NaN, return argument..
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 4
 *   Rating: 2
 */
unsigned f2312(unsigned uf) {
  //you need a mask of all 1's ecept for the first diget which should be a 0
  unsigned  mask = 0x7fffffff;
  //this checks is the number is NaN and returns the same number if it is
  if(uf == 0xffc00000){
    return uf;
  }
  //lastly you and the make and the number to get all the same bits exept for the sign bit
  return mask & uf;
}
/* 
 * f2313 - return a mask that marks the position of the
 *               most significant 1 bit. If x == 0, return 0
 *   Example: f2313(96) = 0x40
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 4 
 */
int f2313(int x) {
  int answer;
  int shifted;
  int mask;
  int answerCheck;
  //this big chunk of the program goes through and shifts the bigest one into every other spot so that every space after the first one is all ones
  shifted = x >> 1;
  answer = x | shifted;

  //now we can shift by 2 because we should have 2 1's
  shifted = answer >> 2;
  answer = answer | shifted;

  //now we can shift by 4 because we have 4 1's
  shifted = answer >> 4;
  answer = answer | shifted;

  //now we can shift by 8 because we have 8 1's
  shifted = answer >> 8;
  answer = answer | shifted;

  //now we can shift by 16 because we have 16 1's
  shifted = answer >> 16;
  answer = answer | shifted;
  //  the first is you take answer and shift it by 1 and do exclusive or. you do this to clear all the other ones exept for the one we want.
  answerCheck = answer ^ (answer >> 1);
  //   then next big step is then taking that number and oring it with 1000 ... 0000. you do this for the fring cases like 0x800...0 where the other steps dont work because you are shifting in more 1's due to arthmetic shifting.
  mask = 0x80 << 24;
  //you want to or your previos answer with the mask
  answerCheck = answerCheck | mask;
  //    lastly you take that whole number and & with the answer to make sure your number actully has that 1. this gets rid of the extra 1 at the beginning if the number doesnt need the fringe case
  return answerCheck & answer;
}
/* 
 * f2314 - Return bit-level equivalent of expression -f for
 *   floating point argument f.
 *   Both the argument and result are passed as unsigned int's, but
 *   they are to be interpreted as the bit-level representations of
 *   single-precision floating point values.
 *   When argument is NaN, return argument.
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 5
 *   Rating: 2
//old atempt with to many operators
if((uf == 0xffc00000) || (uf == 0x7fc00000)){
    return uf;
  }
  if(uf >> 31 == 0){
    return 0x80000000 | uf;
  }
    return 0x7fffffff & uf;
 */
unsigned f2314(unsigned uf) {
  //first thing you need to do is check is the number is NaN or if you will turn the number into NaN by fliping the sign
  //those two numbers ar )xffc00000 and 0x7fc00000 if uf is either of those numbers then we need to return uf.
  if((uf == 0xffc00000) || (uf == 0x7fc00000)){
    return uf;
  }
  //else we need to return the fliped sign of uf. we can do this by adding 0x80000000 to uf.
  //if the sign is 0 then all we are doing is adding the 1
  //of the sign is 1 then we are overflowing the 1 to be a 0 again
    return 0x80000000 + uf;
}
/* 
 * f2315 - return word with all odd-numbered bits set to 1
 *   Legal ops: | << 
 *   Max ops: 4
 *   Rating: 2
 */
int f2315(void) {
  //you start off with the max number you can have in the right pattern which is 1010 1010 or 0xaa.
  int answer = 0xaa;
  //the next step is to shift that number by 8 and then or it to the origanal number.
  // aa | aa00 = aaaa
  answer = answer | (answer << 8);
  //now you want to take the aaaa you just made and copy that into the hext 16 bits. you do this by shifting the number by 16 and then adding it to itslef
  //aaaa | aaaa0000 = aaaa aaaa
  answer = answer | (answer << 16);
  return answer;
}
/*
 * f2316 - if x < y  then return 1, else return 0 
 *   Example: f2316(4,5) = 1.
 *   Legal ops: ! ~ & ^ | + >>
 *   Max ops: 12
 *   Rating: 3
 */
int f2316(int x, int y) {
  int a;
  int signX;
  int signY;
  int newY;
  //this will give all 0's if x is negative or all 1's if x is posative
  newY = ~y;//this is just to take out repetitive operations.
  signX = (x >> 31);
  //this will give all 1's if y is negative or all 0's if y is posative
  signY = (newY >> 31);
  //here we check if the signs are the same and if x < y. the big changes from probelm f2304 is the fact that its ~y instead of ~x.
  //we use y+1 to make sure we are not doing x <= y.
  //we also use ~y because we are doing < not >.
  a = (signY^signX) & ((x+(newY+1))>>31);
  //lastly we want to us a unless x is pos and y is neg so we check for that and then & with 1 to only get the last bit.
  return (a|(signY & signX)) & 1;
}
/* 
 * f2317 - return 1 if x >= 0, return 0 otherwise 
 *   Example: f2317(-1) = 0.  f2317(0) = 1.
 *   Legal ops: ~ & >>
 *   Max ops: 3
 *   Rating: 3
 */
int f2317(int x) {
  //this is just the same thing I used in f2304.
  //you flip all the bits in x to change the most sugnifgant bit to the oppose
  //then you shift by 31 so that you have all 0's or all 1's
  //lastly you and by 1 to just get rid of any other 1's if the number was positive.
  return ((~x) >> 31) & 1;
}

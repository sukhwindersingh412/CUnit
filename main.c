#include <stdio.h>
#include <CUnit/CUnit.h>
#include <Cunit/basic.h>
#include "functions.h"

test_add(void){
  CU_ASSERT(add(0,0)==0);
  CU_ASSERT(add(0,2)==2);
  CU_ASSERT(add(2,3)==5);
  CU_ASSERT(add(-2,5)==3);
}
    
test_sub(void){
  CU_ASSERT(add(0,0)==0);
  CU_ASSERT(add(0,2)==-2);
  CU_ASSERT(add(3,2)==1);
  CU_ASSERT(add(-2,5)==-8);
}

test_mul(void){
  CU_ASSERT(add(0,3)==0);
  CU_ASSERT(add(1,2)==2);
  CU_ASSERT(add(2,3)==6);
  CU_ASSERT(add(-2,5)==-10);
}

test_div(void){
  CU_ASSERT(add(0,3==0);
  CU_ASSERT(add(4,2)==2);
  CU_ASSERT(add(10,3)=2);
  CU_ASSERT(add(-20,4)==-5);
}
    


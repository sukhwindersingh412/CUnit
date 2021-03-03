#include <stdio.h>
#include <CUnit/CUnit.h>
#include <CUnit/basic.h>
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
    
int main(){
 
  CU_initialize_registry();
  
  CU_pSuite suite1 = CU_add_suite("test_add", 0, 0);
  CU_pSuite suite2 = CU_add_suite("test_sub", 0, 0);
  CU_pSuite suite3 = CU_add_suite("test_mul", 0, 0);
  CU_pSuite suite4 = CU_add_suite("test_div", 0, 0);
  
  CU_add_suite(suite1, "test_add", test_add);
  CU_add_suite(suite2, "test_sub", test_sub);
  CU_add_suite(suite3, "test_mul", test_mul);
  CU_add_suite(suite4, "test_div", test_div);
  
  CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  CU_cleanup_registry();
  
  return 0; 
  
}

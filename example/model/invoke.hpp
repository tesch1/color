#include <iomanip>
#include <iostream>

#include "../../src/color.hpp"

#include "../print.hpp"

template< typename category_name > 
 void test_invoke()
  {
   std::cout << __FUNCTION__ << "::begin - " << typeid( category_name ).name()   <<std::endl;
   typedef color::_internal::model< category_name > model_type;
   typedef typename model_type::component_type     component_type;

   model_type   c;

   std::cout << "un-initialized: ";
   print( c );
   for( typename model_type::index_type index=0; index < model_type::size(); ++index )
    {
     component_type  v = c.get( index );
     c.set( index, 123 );
     std::cout << "set-123 on: " << index << "  ";
     print( c );
    }

  c.container();
  std::cout << std::endl;
  std::cout << __FUNCTION__ << "::end" << std::endl;
 }


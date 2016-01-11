#ifndef color_cmyk_trait_bound_uint8
#define color_cmyk_trait_bound_uint8

#include "../../category.hpp"

#include "../../../_internal/utility/bound/2222.hpp"

#include "../../../generic/trait/bound.hpp"



namespace color
 {
  namespace trait
   {
       
    template< >
     struct bound< ::color::category::cmyk_uint8 >
      : public ::color::_internal::utility::bound::bound2222< unsigned >
      {
      };

   }
 }

#endif
#ifndef color_cmy_trait_index_uint32
#define color_cmy_trait_index_uint32

#include "../../category.hpp"

#include "../../../_internal/utility/type/index.hpp"

#include "../../../generic/trait/index.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct index< ::color::category::cmy_uint32 >
      : public ::color::_internal::utility::type::index< unsigned >
      {
      };

   }
 }

#endif
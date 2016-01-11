#ifndef color_generic_operation_compare_equal
#define color_generic_operation_compare_equal

// using namespace  ::color::compare::equal

#include "../../_internal/model.hpp"


 namespace color
  {
   namespace compare
    {

     template < typename category_left_name, typename category_right_name >
      bool equal( color::_internal::model< category_left_name > const& left, color::_internal::model< category_right_name > const& right )
       {
        return left.container() == color::_internal::model< category_left_name >( right ).container();
       }

     template < typename category_name >
      bool equal( color::_internal::model< category_name > const& left, color::_internal::model< category_name > const& right )
       {
        return left.container() == right.container();
       }


     template < typename category_left_name, typename category_right_name >
      inline
      bool
      operator ==( ::color::_internal::model< category_left_name > const& left, ::color::_internal::model< category_right_name > const&  right )
       {
        return ::color::compare::equal( left, right );
       }

     template< typename category_name >
      inline
      bool
      operator ==( ::color::_internal::model< category_name > const& left, ::color::_internal::model< category_name > const&  right )
       {
        return ::color::compare::equal( left, right );
       }

    }
 }

#endif
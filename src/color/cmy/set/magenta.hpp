#ifndef color_cmy_set_magenta
#define color_cmy_set_magenta

// ::color::set::magenta( c, val )

 namespace color
  {
   namespace set
    {
     namespace _internal
      {
       namespace cmy
        {
         namespace _internal
          {

           template< typename category_name >
            inline
            void
            magenta
             (
                       ::color::_internal::model< category_name >                                   & color_parameter,
              typename ::color::_internal::model< category_name >::component_const_input_type         component_parameter
             )
             {
              color_parameter.template set<2>( component_parameter );
             }

          }
        }
      }

      inline
      void
      magenta
       (
         ::color::_internal::model< ::color::category::cmy_uint8 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_uint8 >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::cmy::_internal::magenta<::color::category::cmy_uint8>( color_parameter, component_parameter );
       };

      inline
      void
      magenta
       (
         ::color::_internal::model< ::color::category::cmy_uint16 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_uint16 >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::cmy::_internal::magenta<::color::category::cmy_uint16>( color_parameter, component_parameter );
       };

      inline
      void
      magenta
       (
         ::color::_internal::model< ::color::category::cmy_uint32 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_uint32 >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::cmy::_internal::magenta<::color::category::cmy_uint32>( color_parameter, component_parameter );
       };

      inline
      void
      magenta
       (
         ::color::_internal::model< ::color::category::cmy_uint64 >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_uint64 >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::cmy::_internal::magenta<::color::category::cmy_uint64>( color_parameter, component_parameter );
       };

      inline
      void
      magenta
       (
         ::color::_internal::model< ::color::category::cmy_float >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_float >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::cmy::_internal::magenta<::color::category::cmy_float>( color_parameter, component_parameter );
       };

      inline
      void
      magenta
       (
         ::color::_internal::model< ::color::category::cmy_double >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_double >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::cmy::_internal::magenta<::color::category::cmy_double>( color_parameter, component_parameter );
       };

      inline
      void
      magenta
       (
         ::color::_internal::model< ::color::category::cmy_ldouble >                                   & color_parameter,
         ::color::_internal::model< ::color::category::cmy_ldouble >::component_const_input_type         component_parameter
       )
       {
        ::color::set::_internal::cmy::_internal::magenta<::color::category::cmy_ldouble>( color_parameter, component_parameter );
       };

    }
  }

#endif
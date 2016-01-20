#ifndef  color_hsl_fix_unique
#define  color_hsl_fix_unique

#include "../category.hpp"
#include "../../generic/fix/unique.hpp"


 namespace color
  {
   namespace fix
    {
     namespace _internal
      {
       namespace _privateHSL
        {

       template< typename category_name >
        struct unique
         {
          public:
            typedef category_name  category_type;

            typedef typename ::color::_internal::model<category_type>  model_type;

            static void process( model_type &result )
             {
              // TODO
             }

            static void process(  model_type &result, model_type const& right )
             {
              // TODO
             }

         };

      }

       template<> struct unique< ::color::category::hsl_uint8   > : public ::color::fix::_internal::_privateHSL::unique<::color::category::hsl_uint8  >{ };
       template<> struct unique< ::color::category::hsl_uint16  > : public ::color::fix::_internal::_privateHSL::unique<::color::category::hsl_uint16 >{ };
       template<> struct unique< ::color::category::hsl_uint32  > : public ::color::fix::_internal::_privateHSL::unique<::color::category::hsl_uint32 >{ };
       template<> struct unique< ::color::category::hsl_uint64  > : public ::color::fix::_internal::_privateHSL::unique<::color::category::hsl_uint64 >{ };
       template<> struct unique< ::color::category::hsl_float   > : public ::color::fix::_internal::_privateHSL::unique<::color::category::hsl_float  >{ };
       template<> struct unique< ::color::category::hsl_double  > : public ::color::fix::_internal::_privateHSL::unique<::color::category::hsl_double >{ };
       template<> struct unique< ::color::category::hsl_ldouble > : public ::color::fix::_internal::_privateHSL::unique<::color::category::hsl_ldouble>{ };

       }
    }
  }

#endif
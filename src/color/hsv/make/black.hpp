#ifndef color_cmy_make_black
#define color_cmy_make_black

// ::color::make::black( c )

 namespace color
  {
   namespace make
    {

      inline
      void black( ::color::_internal::model< color::category::cmy_uint8 > & color_parameter )
       {
        color_parameter.container() = 0; //!< TODO
       }

      inline
      void black( ::color::_internal::model< color::category::cmy_uint16 > & color_parameter )
       {
        color_parameter.container() = 0; //!< TODO
       }

      inline
      void black( ::color::_internal::model< color::category::cmy_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xff000000u; //!< TODO
       }

      inline
      void black( ::color::_internal::model< color::category::cmy_uint64 > & color_parameter )
       {
        color_parameter.container() = std::uint64_t( 0xffff000000000000u ); //!< TODO
       }

      inline
      void black( ::color::_internal::model< color::category::cmy_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( {0,0,0} ); //!< TODO
       }

      inline
      void black( ::color::_internal::model< color::category::cmy_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( {0,0,0} ); //!< TODO
       }

      inline
      void black( ::color::_internal::model< color::category::cmy_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( {0,0,0} ); //!< TODO
       }

    }
  }

#endif
#ifndef  color_generic_make_aqua
#define color_generic_make_aqua

// ::color::make::aqua( c )

 namespace color
  {
   namespace make
    {

     template< typename category_name >
      void aqua( ::color::_internal::model< category_name > & color_parameter )
       {
        typedef ::color::_internal::model< category_name > model_type;
        typedef ::color::_internal::trait< category_name > trait_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::_internal::model< category_name >
      aqua( )
       {
        typedef ::color::_internal::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::aqua( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }
  }

#endif

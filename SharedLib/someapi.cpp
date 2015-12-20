/*
 * someapi.cpp
 *
 *  Created on: Dec 7, 2015
 *      Author: alex
 */

#include <memory>
#include "someapi.h"

namespace My {
	namespace API {
	   class SomeApi::Impl
	   {
		   public:
			   void someMethod(){

			   }
	   };

	   SomeApi::SomeApi() : _pimpl{std::make_unique<Impl>()}
	   {

	   }

	   SomeApi::~SomeApi(){

	   }

	   void SomeApi::someAPIMethod(){
		   _pimpl->someMethod();
	   }

	}
}


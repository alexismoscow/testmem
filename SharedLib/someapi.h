/*
 * someapi.h
 *
 *  Created on: Dec 4, 2015
 *      Author: alex
 */

#ifndef SOMEAPI_H_
#define SOMEAPI_H_

#include <memory>



namespace My {
	namespace API {
		class SomeApi
		{
		public:
			SomeApi();
			virtual ~SomeApi();
			void someAPIMethod();
		private:
			class Impl;
			std::unique_ptr<Impl> _pimpl;

		};
	}
}
#endif /* SOMEAPI_H_ */

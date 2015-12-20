/*
 * Main.cpp
 *
 *  Created on: Oct 28, 2015
 *      Author: alex
 */

#include "someapi.h"
#include "Main.h"


namespace Test
{


	Main::Main() {
		priv = nullptr;
	}



	Main::~Main() {

	}

	void Main::constMethod() const{
		My::API::SomeApi api;
		api.someAPIMethod();
	}

}



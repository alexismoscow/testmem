/*
 * Main.h
 *
 *  Created on: Oct 28, 2015
 *      Author: alex
 */

#ifndef MAIN_H_
#define MAIN_H_






namespace Test{
class Main {
	int* priv;
public:
	Main();
	void constMethod() const;
	virtual ~Main();
};
}
#endif /* MAIN_H_ */

#ifndef _BASEFACTORY_H_
#define _BASEFACTORY_H_
#include "BaseProduct.h"

class CBaseFactory
{
public:
	CBaseFactory();
	~CBaseFactory();
	virtual CBaseProduct* CreateProduct()=0;
};
#endif//_BASEFACTORY_H_
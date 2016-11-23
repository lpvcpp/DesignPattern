#include <Singleton.h>

Singleton* Singleton::m_instance = 0; 

Singleton* Singleton::GetInstance()
{
	if(!m_instance)
	{
		m_instance = new Singleton();
	}
	return m_instance;
}

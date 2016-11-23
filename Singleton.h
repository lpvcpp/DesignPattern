class Singleton
{
	private:
		// Constructor must be private/
		Singleton(data = 0)
		{
			m_data = data; 		// Initialize data/
		}
		
		Singleton (const Singleton);	// Prevent copy constructor/
		Singleton operator=(const Singleton);	// Prevent assigment operator/
		static Singleton *m_instance; 	// Instance/

		int m_data; 			// Any data you want/
	public:
		static Singleton* GetInstance();// Get instance of class here/
		~Singleton();			// Destructor if you want/

}

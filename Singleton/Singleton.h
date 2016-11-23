class Singleton
{
	private:
		// Constructor must be private/
		Singleton(data = 0)
		{
			m_data = data; 		// Initialize data/
		}
		
		
		static Singleton *m_instance; 	// Instance/

		Singleton(Singleton const&) = delete;             // Copy construct
		Singleton(Singleton&&) = delete;                  // Move construct
		Singleton& operator=(Singleton const&) = delete;  // Copy assign
		Singleton& operator=(Singleton &&) = delete;      // Move assign

		int m_data; 			// Any data you want/
	public:
		static Singleton* GetInstance();// Get instance of class here/
		~Singleton();			// Destructor if you want/

}

class Singleton
{
	private:
		// Constructor must be private/
		Singleton(data = 0)
		{
			m_data = data; 		// Initialize data/
		}
		
		
		static Singleton *m_instance; 	// Instance/
		
		// Delete operator/
		Singleton(Singleton const&) = delete;             // Copy construct/
		Singleton(Singleton&&) = delete;                  // Move construct/
		Singleton& operator=(Singleton const&) = delete;  // Copy assignment operator/
		Singleton& operator=(Singleton &&) = delete;      // Move assignment operator/

		int m_data; 			// Any data you want/
	public:
		static Singleton* GetInstance();// Get instance of class here/
		~Singleton();			// Destructor if you want/

}

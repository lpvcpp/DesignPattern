class Singleton
{
	private:
		Singleton(data = 0)
		{
			m_data = data;
		}
		~Singleton();
		static Singleton *m_instance;
		int m_data;
	public:
		static Singleton GetInstance();

}

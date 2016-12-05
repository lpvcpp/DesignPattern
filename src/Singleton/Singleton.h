// author: Le Phong Vu

// Read this for DCLP
// https://www.youtube.com/watch?v=c1gO9aB9nbs&feature=youtu.be&t=18m40s
// http://preshing.com/20130930/double-checked-locking-is-fixed-in-cpp11/
// 

#include <atomic>
#include <mutex>

using namespace std;

class Singleton
{
	private:
		// Constructor must be private/
		Singleton(int data = 0)
		{
			m_data = data; 		// Initialize data/
		}
		
		~Singleton();		// Destructor if you want/
		
		static atomic<Singleton*> m_instance; 	// Instance/
		static mutex m_mtx;
		
		// Delete operator (only C++0x)/
		Singleton(Singleton const&) = delete;             // Copy construct/
		Singleton(Singleton&&) = delete;                  // Move construct/
		Singleton& operator=(Singleton const&) = delete;  // Copy assignment operator/
		Singleton& operator=(Singleton &&) = delete;      // Move assignment operator/

		int m_data; 			// Any data you want/
	public:
		static Singleton* GetInstance();// Get instance of class here/



};


atomic<Singleton*> Singleton::m_instance { nullptr };
std::mutex Singleton::m_mtx;


Singleton* Singleton::GetInstance() {
  if(m_instance == nullptr) {
    lock_guard<mutex> lock(m_mtx);
    if(m_instance == nullptr) {
        m_instance = new Singleton();
    }
  }
  return m_instance;
}
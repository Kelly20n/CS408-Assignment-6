// In this file the comments are sparse there is little need to explain this, the default constructor is called using the default values, the public member functions are prototyped here, the init function
// being the most notable, all the private member variables to be used in all the functions are declared as well.
#include "ObjLibrary/Vector3.h"
#include "ObjLibrary/ObjModel.h"
#include "ObjLibrary/TextureManager.h"

using namespace std;

class Square
{
public:
	// declare your constructor here
	Square()
	{
		init(pos);
		age = 999999;
	}
	// declare your public member functions here
	void init(Vector3);
	void update();
	void display();
	bool isAlive();
	
private:
	// declare your private member functions here
	
	// declare your member variables here
	ObjModel object;
	Vector3 pos;
	double age;
};


#include "container_atd.h"
using namespace std;
namespace simple_numbers 
{
	void container::out(ofstream &ofst)
	{
		container *cur = this;
		int i = 1;
		int  kol = 0;
		if (this != nullptr)
		{
			do
			{
				kol++;
				cur = cur->next;
			} while (cur != this);
			cur = this;
		}
		ofst << "Container contains " << kol
			<< " elements." << endl;
		if (this != nullptr)
		{
			do
			{
				ofst << i << ": ";
				cur->num->out(ofst); 
				cur = cur->next;
				i++;
			} while (cur != this);
		}
	}
} // end simple_shapes namespace
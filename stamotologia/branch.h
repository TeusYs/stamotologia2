#include "prov.h"

class branch
{
private:
	int BranchId;
	string Street;
	int House;
public:
	branch(int id, string street, int house);
	branch();
	~branch();

	void InputBranch();

	void OutputBranch();
};

////////////////////////////////////////////////////////////////////////////////
//   File      : B.cpp
//   Contents  :
//
// Author(s) : FGR
// $LastChangedBy$
// $LastChangedDate$
// $Revision$
//
//-----------------------------------------------------------------------------
// LGPL V3.0 - https://www.gnu.org/licenses/lgpl-3.0.txt
//-----------------------------------------------------------------------------
////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

#include <libA/A.h>

void B()
{
	cout << "Hello from B & calling A()" << endl;
	A();
}
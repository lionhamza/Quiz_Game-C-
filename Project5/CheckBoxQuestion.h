#pragma once

#include <cliext/vector>
#include <vcclr.h>
#include "Q.h"

ref class CheckBoxQuestion:Q
{
	/*CAN HAVE 1-4 ANSWERS SELECTED*/
public:
	CheckBoxQuestion();
	~CheckBoxQuestion();
	CheckBoxQuestion(String^, cliext::vector<String^>^, cliext::vector<String^>^, String^, String^);
};


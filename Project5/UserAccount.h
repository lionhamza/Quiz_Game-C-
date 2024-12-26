#pragma once


#include <cliext/vector>
#include <vcclr.h>

using namespace System;

ref class UserAccount
{
public:
	UserAccount();
	~UserAccount();
	UserAccount(String^, String^);
	String^ username;
	String^ password;
};


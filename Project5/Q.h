#pragma 
#ifndef HEADER_H
#define HEADER_H

#include <cliext/vector>
#include <vcclr.h>

using namespace System;

ref class Q
{
private:
	String^ question;
	cliext::vector<String^>^ answers = gcnew cliext::vector<String^>();
	String^ correctAnswer;
	String^ questionType;
public:
	Q();
	~Q();
	Q(String^, cliext::vector<String^>^, String^, String^);

	//setters
	void setQuestio(String^);
	void setAnswers(cliext::vector<String^>^);
	void setCorrect(String^);
	

	//getters
	String^ getQuestion();
	cliext::vector<String^>^ getAnswers();
	String^ getAnswer();
	String^ getQuestionType();

};
#endif  // HEADER_H
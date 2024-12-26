#include "Q.h"

using namespace System;

Q::Q() {}
Q::~Q() {}

Q::Q(String^ question, cliext::vector<String^>^ answers, String^ correctAnswer, String^ questionType)
{
	this->question = question;
	this->answers = answers;
	this->correctAnswer = correctAnswer;
	this->questionType = questionType;
}

void Q::setQuestio(String^ question)
{
	this->question;
}
void Q::setAnswers(cliext::vector<String^>^ answers)
{
	this->answers = answers;
}
void Q::setCorrect(String^ correctAnswer)
{
	this->correctAnswer = correctAnswer;
}

//getters
String^ Q::getQuestion()
{
	return question;
}
cliext::vector<String^>^ Q::getAnswers()
{
	return answers;
}
String^ Q::getAnswer()
{
	return correctAnswer;
}

String^ Q::getQuestionType()
{
	return questionType;
}

#pragma once

class myString {
	char *text;
	int length;
public:
	myString();
	myString(const char*);
	myString(const myString&);
	~myString();
	void display() const;
	int getLength() const;
	void set(const char*);
	char* getText() const;
};
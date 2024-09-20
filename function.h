#pragma once
#include <iostream>

//#define INTEGER true
#define DOUBLE true
//#define CHAR true

using namespace std;

//INT
void fillArrInt(int arr[], const int& size);
void ShowArrInt(int arr[], const int& size);
int FindMinValueInt(int arr[], const int& size);
int FindMaxValueInt(int arr[], const int& size);
void SortArrInt(int arr[], const int& size);
void ChangeArrInt(int arr[], const int& size);

//Double
void fillArrDouble(double arr[], const int& size);
void ShowArrDouble(double arr[], const int& size);
float FindMinValueDouble(double arr[], const int& size);
float FindMaxValueDouble(double arr[], const int& size);
void SortArrDouble(double arr[], const int& size);
void ChangeArrDouble(double arr[], const int& size);

//CHAR
void fillArrChar(char arr[], const int& size);
void ShowArrChar(char arr[], const int& size);
char FindMinValueChar(char arr[], const int& size);
char FindMaxValueChar(char arr[], const int& size);
void SortArrChar(char arr[], const int& size);
void ChangeArrChar(char arr[], const int& size);



#ifdef INTEGER
	#define fill(x, y) fillArrInt(x,y);
	#define show(x, y) ShowArrInt(x,y);
	#define findMin(x, y) FindMinValueInt(x,y);
	#define findMax(x, y) FindMaxValueInt(x,y);
	#define sort(x, y) SortArrInt(x,y);
	#define change(x, y) ChangeArrInt(x,y);
#elif DOUBLE
	#define fill(x, y) fillArrDouble(x,y);
	#define show(x, y) ShowArrDouble(x,y);
	#define findMin(x, y) FindMinValueDouble(x,y);
	#define findMax(x, y) FindMaxValueDouble(x,y);
	#define sort(x, y) SortArrDouble(x,y);
	#define change(x, y) ChangeArrDouble(x,y);
#elif CHAR
	#define fill(x, y) fillArrChar(x,y);
	#define show(x, y) ShowArrChar(x,y);
	#define findMin(x, y) FindMinValueChar(x,y);
	#define findMax(x, y) FindMaxValueChar(x,y);
	#define sort(x, y) SortArrChar(x,y);
	#define change(x, y) ChangeArrChar(x,y);
#endif












#pragma once
#include <stdbool.h>

#ifndef _FUNCTION_H_
#define _FUNCTION_H_

int Mult2(int value_);

/*
* @breaf ������� �������� ����� �� ��������
* @param x: �����, ������� �����������
* @return 1 - ���� ������� �����, 0 - ���� ������� �������
*/
int Prime(unsigned long long int x);

/*
* @breaf ������� �������� ����� �� ���������
* @param number_: ��c��, ������� �����������
* @return ��������� ��� ���
*/
bool IsPalindrome(const unsigned int number_);
#endif
#pragma once

#ifndef _MENU_H_
#define _MENU_H_

#include "BinaryTree.h"
#include "Treap.h"

/// @brief ������������ ��� ���� �������� ������.
enum class MenuTreeOption
{
	Add			= 1,
	Remove		= 2,
	Find		= 3,
	FindMinimal	= 4,
	FindMaximal	= 5,
	Show		= 6,
	Exit		= 7
};

/// @brief ������������ ��� ���� ����������� ������.
enum class MenuTreapOption
{
	AddNotOptimized		= 1,
	RemoveNotOptimized	= 2,
	Add		= 3,
	Remove	= 4,
	Find	= 5,
	Show	= 6,
	Exit	= 7
};

/// @brief  ��������� �������������� �������� � �������.
/// @return ���������� �������.
int GetElementConsole();

/// @brief ������ ������.
/// @param binaryTreeNode	��������� �� ���� �����.
/// @param indent			������.
void PrintTree(BinaryTreeNode* node, int indent);

/// @brief ���� ��� �������� ������.
/// @param binaryTree ��������� �� ���� �����.
void Menu(BinaryTree* binaryTree);

/// @brief ���� ��� ����������� ������.
/// @param binaryTree ��������� �� ���� �����.
void Menu(Treap* treap);

#endif //_MENU_H_
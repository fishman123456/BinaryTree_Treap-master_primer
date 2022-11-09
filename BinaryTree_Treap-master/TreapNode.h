#pragma once

#ifndef _TREAPNODE_H_
#define _TREAPNODE_H_

/// @brief ���� ����������� ������.
struct TreapNode
{
	int Key;
	int Priority;
	TreapNode* Left = nullptr;
	TreapNode* Right = nullptr;
};

#endif //_TREAPNODE_H_
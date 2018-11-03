#pragma once
#include <afxcmn.h>
class CMyTabCtrl :
	public CTabCtrl
{
public:
	CMyTabCtrl();
	CDialog *m_tabPages[2];
	int m_tabCurrent;
	int m_NumOfTabPage;
	~CMyTabCtrl();
	void Init();
	void SetRectangle();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};


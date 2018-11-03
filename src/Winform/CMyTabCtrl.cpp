#include "stdafx.h"
#include "CMyTabCtrl.h"
#include "MFCApplication3.h"


CMyTabCtrl::CMyTabCtrl()
{
	m_tabPages[0] = new CTabOne;
	m_tabPages[1] = new CTabOne;

	m_NumOfTabPage = 2;
}


CMyTabCtrl::~CMyTabCtrl()
{
	delete[]m_tabPages[0];
	delete[]m_tabPages[1];
}


void CMyTabCtrl::Init()
{
	m_tabCurrent = 0;
	m_tabPages[0]->Create(IDC_ONE_, this);
	m_tabPages[1]->Create(IDC_TWO_, this);
	m_tabPages[0]->ShowWindow(SW_SHOW);
	m_tabPages[1]->ShowWindow(SW_HIDE);

	SetRectangle();
}


void CMyTabCtrl::SetRectangle()
{
	CRect tabRect, itemRect;
	int nX, nY, nXc,nYc;

	GetClientRect(&tabRect);
	GetItemRect(0, &itemRect);

	nX = itemRect.left;
	nY = itemRect.bottom + 1;
	nXc = tabRect.right - itemRect.left - 1;
	nYc = tabRect.bottom - nY - 1;

	m_tabPages[0]->SetWindowPos(&wndTop, nX, nY, nXc, nYc, SWP_SHOWWINDOW);
	m_tabPages[1]->SetWindowPos(&wndTop, nX, nY, nXc, nYc, SWP_HIDEWINDOW);
}
BEGIN_MESSAGE_MAP(CMyTabCtrl, CTabCtrl)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()


void CMyTabCtrl::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default

	CTabCtrl::OnLButtonDown(nFlags, point);

	if (m_tabCurrent != GetCurFocus()) {
		m_tabPages[m_tabCurrent]->ShowWindow(SW_HIDE);
		m_tabCurrent = GetCurFocus();
		m_tabPages[m_tabCurrent]->ShowWindow(SW_SHOW);
		m_tabPages[m_tabCurrent]->SetFocus();
	}
}

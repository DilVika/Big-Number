// CTabOne.cpp : implementation file
//

#include "stdafx.h"
#include "MFCApplication3.h"
#include "CTabOne.h"
#include "afxdialogex.h"


// CTabOne dialog

IMPLEMENT_DYNAMIC(CTabOne, CDialogEx)

CTabOne::CTabOne(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_OLE_PROPPAGE_LARGE, pParent)
{

}

CTabOne::~CTabOne()
{
}

void CTabOne::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTabOne, CDialogEx)
END_MESSAGE_MAP()


// CTabOne message handlers

#pragma once


// CTabTwo dialog

class CTabTwo : public CDialogEx
{
	DECLARE_DYNAMIC(CTabTwo)

public:
	CTabTwo(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CTabTwo();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_OLE_PROPPAGE_LARGE1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};

#pragma once


// CTabOne dialog

class CTabOne : public CDialogEx
{
	DECLARE_DYNAMIC(CTabOne)

public:
	CTabOne(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CTabOne();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_OLE_PROPPAGE_LARGE };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};

#pragma once
#include "afxwin.h"



// PlayerView �� ���Դϴ�.

class PlayerView : public CFormView
{
	DECLARE_DYNCREATE(PlayerView)

protected:
	PlayerView();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~PlayerView();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_PLAYERVIEW };
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
public:
	CStatic m_Picture;
	
	virtual void OnInitialUpdate();
};



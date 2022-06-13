#pragma once
#include "afxwin.h"



// MapView �� ���Դϴ�.

class MapView : public CFormView
{
	DECLARE_DYNCREATE(MapView)

protected:
	MapView();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~MapView();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MAPVIEW };
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
	CFont		m_Font;

	
	afx_msg void OnClickedMapEdit();
};



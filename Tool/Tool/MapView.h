#pragma once
#include "afxwin.h"



// MapView 폼 뷰입니다.

class MapView : public CFormView
{
	DECLARE_DYNCREATE(MapView)

protected:
	MapView();           // 동적 만들기에 사용되는 protected 생성자입니다.
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
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()

public:
	CStatic m_Picture;
	virtual void OnInitialUpdate();
	CFont		m_Font;

	
	afx_msg void OnClickedMapEdit();
};



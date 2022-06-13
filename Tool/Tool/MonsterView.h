#pragma once
#include "afxwin.h"



// MonsterView �� ���Դϴ�.

class MonsterView : public CFormView
{
	DECLARE_DYNCREATE(MonsterView)

protected:
	MonsterView();           // ���� ����⿡ ���Ǵ� protected �������Դϴ�.
	virtual ~MonsterView();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MONSTERVIEW };
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



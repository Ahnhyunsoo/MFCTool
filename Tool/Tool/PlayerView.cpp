// PlayerView.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Tool.h"
#include "PlayerView.h"
#include "afxdialogex.h"
#include "FileInfo.h"


// PlayerView

IMPLEMENT_DYNCREATE(PlayerView, CFormView)

PlayerView::PlayerView()
	: CFormView(IDD_PLAYERVIEW)
{
	
}

PlayerView::~PlayerView()
{
}

void PlayerView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_PICTURE, m_Picture);
}

BEGIN_MESSAGE_MAP(PlayerView, CFormView)
END_MESSAGE_MAP()


// PlayerView �����Դϴ�.

#ifdef _DEBUG
void PlayerView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void PlayerView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG


// PlayerView �޽��� ó�����Դϴ�.


void PlayerView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	UpdateData(TRUE);
	CImage*	pPngImg = new CImage;
	CString strRelative = L"../Texture/Stage/Player/Idle/12.png";
	pPngImg->Load(strRelative);
	m_Picture.SetBitmap(*pPngImg);
	UpdateData(FALSE);
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
}

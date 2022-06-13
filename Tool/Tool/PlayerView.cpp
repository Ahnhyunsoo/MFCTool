// PlayerView.cpp : 구현 파일입니다.
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


// PlayerView 진단입니다.

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


// PlayerView 메시지 처리기입니다.


void PlayerView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	UpdateData(TRUE);
	CImage*	pPngImg = new CImage;
	CString strRelative = L"../Texture/Stage/Player/Idle/12.png";
	pPngImg->Load(strRelative);
	m_Picture.SetBitmap(*pPngImg);
	UpdateData(FALSE);
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
}

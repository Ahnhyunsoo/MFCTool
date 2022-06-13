// MonsterView.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "Tool.h"
#include "MonsterView.h"


// MonsterView

IMPLEMENT_DYNCREATE(MonsterView, CFormView)

MonsterView::MonsterView()
	: CFormView(IDD_MONSTERVIEW)
{

}

MonsterView::~MonsterView()
{
}

void MonsterView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_PICTURE, m_Picture);
}

BEGIN_MESSAGE_MAP(MonsterView, CFormView)
END_MESSAGE_MAP()


// MonsterView 진단입니다.

#ifdef _DEBUG
void MonsterView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void MonsterView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG

void MonsterView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	UpdateData(TRUE);
	CImage*	pPngImg = new CImage;
	CString strRelative = L"../Texture/Stage/Player/Idle/37.png";
	pPngImg->Load(strRelative);
	m_Picture.SetBitmap(*pPngImg);
	UpdateData(FALSE);
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
}
// MonsterView 메시지 처리기입니다.

// MapView.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "Tool.h"
#include "MapView.h"


// MapView

IMPLEMENT_DYNCREATE(MapView, CFormView)

MapView::MapView()
	: CFormView(IDD_MAPVIEW)
{

}

MapView::~MapView()
{
}

void MapView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_PICTURE, m_Picture);
}

BEGIN_MESSAGE_MAP(MapView, CFormView)
	ON_BN_CLICKED(IDC_BUTTON1, &MapView::OnClickedMapEdit)
END_MESSAGE_MAP()


// MapView 진단입니다.

#ifdef _DEBUG
void MapView::AssertValid() const
{
	CFormView::AssertValid();
}

#ifndef _WIN32_WCE
void MapView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}
#endif
#endif //_DEBUG

void MapView::OnInitialUpdate()
{
	m_Font.CreatePointFont(250, L"굴림");
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_Font);
	CFormView::OnInitialUpdate();
	UpdateData(TRUE);
	CImage*	pPngImg = new CImage;
	CString strRelative = L"../Texture/Stage/Map/2.png";
	pPngImg->Load(strRelative);
	m_Picture.SetBitmap(*pPngImg);
	UpdateData(FALSE);
	// TODO: 여기에 특수화된 코드를 추가 및/또는 기본 클래스를 호출합니다.
}
// MapView 메시지 처리기입니다.


void MapView::OnClickedMapEdit()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

}

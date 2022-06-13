// MapView.cpp : ���� �����Դϴ�.
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


// MapView �����Դϴ�.

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
	m_Font.CreatePointFont(250, L"����");
	GetDlgItem(IDC_BUTTON1)->SetFont(&m_Font);
	CFormView::OnInitialUpdate();
	UpdateData(TRUE);
	CImage*	pPngImg = new CImage;
	CString strRelative = L"../Texture/Stage/Map/2.png";
	pPngImg->Load(strRelative);
	m_Picture.SetBitmap(*pPngImg);
	UpdateData(FALSE);
	// TODO: ���⿡ Ư��ȭ�� �ڵ带 �߰� ��/�Ǵ� �⺻ Ŭ������ ȣ���մϴ�.
}
// MapView �޽��� ó�����Դϴ�.


void MapView::OnClickedMapEdit()
{
	// TODO: ���⿡ ��Ʈ�� �˸� ó���� �ڵ带 �߰��մϴ�.

}

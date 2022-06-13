// MapDialog.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "Tool.h"
#include "MapDialog.h"
#include "afxdialogex.h"


// MapDialog 대화 상자입니다.

IMPLEMENT_DYNAMIC(MapDialog, CDialog)

MapDialog::MapDialog(CWnd* pParent /*=NULL*/)
	: CDialog(IDD_MAPDIALOG, pParent)
{

}

MapDialog::~MapDialog()
{
}

void MapDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MapDialog, CDialog)
END_MESSAGE_MAP()


// MapDialog 메시지 처리기입니다.

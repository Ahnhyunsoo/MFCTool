// MapDialog.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "Tool.h"
#include "MapDialog.h"
#include "afxdialogex.h"


// MapDialog ��ȭ �����Դϴ�.

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


// MapDialog �޽��� ó�����Դϴ�.

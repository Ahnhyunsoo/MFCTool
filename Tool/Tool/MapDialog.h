#pragma once


// MapDialog ��ȭ �����Դϴ�.

class MapDialog : public CDialog
{
	DECLARE_DYNAMIC(MapDialog)

public:
	MapDialog(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~MapDialog();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MAPDIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};


// MFCApplication1Dlg.h: 头文件
//
#include<string>
#include<iostream>
#pragma once
// CMFCApplication1Dlg 对话框
class CMFCApplication1Dlg : public CDialogEx
{
// 构造
public:
	CMFCApplication1Dlg(CWnd* pParent = nullptr);	// 标准构造函数
	void CMFCApplication1Dlg::test_1(int q)
	{
		CEdit* p = (CEdit*)GetDlgItem(IDC_EDIT2);
		p->SetWindowText(_T(""));
		CString s[100];
		s[0] = "李北辰 Billy"; s[1] = "邹绳昊 Bob"; s[2] = "林子夏 Tina"; s[3] = "甘晨琅 Mia"; s[4] = "胡稀杰 Justin"; s[5] = "王亭浩 Leo"; s[6] = "姜晓濛 Sarah"; s[7] = "周玥阳 Sunny"; s[8] = "冯灵珊 Lisa"; s[9] = "明欣玥 Alice"; s[10] = "余沛东 Eric"; s[11] = "陈梓曦 Frank"; s[12] = "陈珂州 Lucas"; s[13] = "李思睿 Alan"; s[14] = "刘人源 Tack"; s[15] = "赵维桢 Simon"; s[16] = "刘梓渊 Eden"; s[17] = "符爽堃 Kevin"; s[18] = "潘馨仪 Diana"; s[19] = "高文进 Vincent"; s[20] = "李汶洁 Owen"; s[21] = "王梓源 Kim"; s[22] = "王琍雅 Aliya"; s[23] = "杨智睿 Ken"; s[24] = "曹佳林 Sunny";
		//srand(time(0));
		int a[25]={};
		while (q--)
		{
			int i = rand() % 25;
			while(a[i] == 1) i = rand() % 25;
			a[i] = 1;
			//GetDlgItem(IDC_STATIC)->SetWindowTextW(s[i]);
			CEdit* pEdit=(CEdit*)GetDlgItem(IDC_EDIT2);
			int index = pEdit->GetWindowTextLength();
			pEdit->SetSel(index, index);
			pEdit->ReplaceSel(s[i]);
			pEdit->ReplaceSel(_T("\r\n"));;
		}
		//Sleep(100);
	}
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton2();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnClickedButton1();
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnBnClickedButton3();
	CMFCButton Button3_1;
};

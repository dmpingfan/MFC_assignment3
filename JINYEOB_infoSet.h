
// JINYEOB_infoSet.h: CJINYEOB_infoSet Ŭ������ �������̽�
//


#pragma once

// �ڵ� ���� ��ġ 2018�� 11�� 20�� ȭ����, ���� 4:59

class CJINYEOB_infoSet : public CRecordset
{
public:
	CJINYEOB_infoSet(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CJINYEOB_infoSet)

// �ʵ�/�Ű� ���� ������

// �Ʒ��� ���ڿ� ����(���� ���)�� �����ͺ��̽� �ʵ��� ���� ������ ������
// ��Ÿ���ϴ�(CStringA:
//ANSI ������ ����, CStringW: �����ڵ� ������ ����).
// �̰��� ODBC ����̹����� ���ʿ��� ��ȯ�� ������ �� ������ �մϴ�.  // ���� ��� �̵� ����� CString �������� ��ȯ�� �� ������
// �׷� ��� ODBC ����̹����� ��� �ʿ��� ��ȯ�� �����մϴ�.
// (����: �����ڵ�� �̵� ��ȯ�� ��� �����Ϸ���  ODBC ����̹�
// ���� 3.5 �̻��� ����ؾ� �մϴ�).

	long	m_ID;
	CString	m_fname;
	CString	m_femail;
	CString	m_fphone;
	CString	m_fgroup;
	CString	m_frelation;

// ������
	// �����翡�� ������ ���� �Լ� ������
	public:
	virtual CString GetDefaultConnect();	// �⺻ ���� ���ڿ�

	virtual CString GetDefaultSQL(); 	// ���ڵ� ������ �⺻ SQL
	virtual void DoFieldExchange(CFieldExchange* pFX);	// RFX ����

// ����
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};

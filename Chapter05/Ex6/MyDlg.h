/*
 * =====================================================================================
 *
 *       Filename:  MyDlg.h
 *
 *    Description:  Simple Qt application with QDialog, QPushButton and QGridLayout
 *
 *        Version:  1.0
 *        Created:  10/16/2016 05:08:21 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Jeganathan Swaminathan <jegan@tektutor.org>
 *   Organization:  TekTutor <www.tektutor.org> 
 *
 * =====================================================================================
 */

#include <QDialog>
#include <QGridLayout>
#include <QPushButton>

class MyDlg : public QDialog {
private:
	QPushButton *pBttn1, *pBttn2, *pBttn3, *pBttn4, *pBttn5;
	QPushButton *pBttn6, *pBttn7, *pBttn8, *pBttn9, *pBttn10;
	QGridLayout *pLayout;
public:
	MyDlg();
};


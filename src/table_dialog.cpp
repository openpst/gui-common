/**
* LICENSE PLACEHOLDER
*
* @file table_dialog.cpp
* @class TableDialog
* @package OpenPST
* @brief An abstract dialog which allows programs to create a popup with a table view
*
* @author Gassan Idriss <ghassani@gmail.com>
*/
#include "table_dialog.h"
#include "ui_table_dialog.h"

using namespace OpenPST::GUI;

TableDialog::TableDialog(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::TableDialog)
{
	ui->setupUi(this);
}

TableDialog::~TableDialog()
{
	delete ui;
}


void TableDialog::setTitle(const QString& text)
{
	ui->tableTitle->setText(text);
}

QTableWidget* TableDialog::getTableWidget()
{
	return ui->tableWidget;
}

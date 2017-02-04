/**
* LICENSE PLACEHOLDER
*
* @file table_dialog.h
* @class TableDialog
* @package OpenPST
* @brief An abstract dialog which allows programs to create a popup with a table view
*
* @author Gassan Idriss <ghassani@gmail.com>
*/
#pragma once

#include <QDialog>
#include <QTableWidget>

namespace Ui {
	class TableDialog;
}

namespace OpenPST{
	namespace GUI {

		class TableDialog : public QDialog
		{

			Q_OBJECT

			public:
				explicit TableDialog(QWidget *parent = 0);
				~TableDialog();
				void setTitle(const QString& text);
				QTableWidget* getTableWidget();
			public slots:

			private:
				Ui::TableDialog* ui;

			};
	}
}

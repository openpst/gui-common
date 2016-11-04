/**
* LICENSE PLACEHOLDER
*
* @file 
* @class 
* @package OpenPST
* @brief 
*
* @author Gassan Idriss <ghassani@gmail.com>
*/
#pragma once

#include <QGroupBox>
#include <QPushButton>


namespace Ui {
	class ProgressGroupWidget;
}

namespace OpenPST{ 
	namespace GUI{
		class ProgressGroupWidget : public QGroupBox
		{

			Q_OBJECT

			public:
				QPushButton* cancelButton;
				QPushButton* cancelAllButton;

				ProgressGroupWidget(QWidget *parent = 0);
				~ProgressGroupWidget();
			public slots:
				void setProgress(int value);
				void setProgress(int min, int max, int value);
				void setTaskCount(int count);
				void setTextLeft(QString text);
				void setTextRight(QString text);
				void enableCancel();
				void disableCancel();		
				void enableCancelAll();
				void disableCancelAll();
				void reset();


			private:
				Ui::ProgressGroupWidget *ui;


		};
	}
}
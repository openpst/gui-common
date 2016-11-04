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

#include <QThreadPool>
#include "task/task.h"

class TaskRunner
{	
	
	private:
		QThreadPool pool;
		volatile bool* canceller;
	public:
		TaskRunner(volatile bool* canceller = 0);
		~TaskRunner();
		void clearQueue();
		void cancelCurrent();
		void cancelAll();
		bool waitForDone();
		bool isRunning();
		int queue(Task* task, int priority = 0);
};
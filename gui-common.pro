#-------------------------------------------------
# QMake Build Script for: gui-common
# This should be included in other pro files that require it.
# Variable GUICOMMON_DIR MUST be defined before including.
#-------------------------------------------------

lessThan(QT_MAJOR_VERSION, 5): error("At least Qt 5.0 is required")

equals(GUICOMMON_DIR, ""):	error("Variable GUICOMMON_DIR was not defined before including gui-common.pro")

SOURCES += \
    $$GUICOMMON_DIR/src/task/task_runner.cpp \
    $$GUICOMMON_DIR/src/widget/log_widget.cpp \
    $$GUICOMMON_DIR/src/widget/progress_group_widget.cpp \
    $$GUICOMMON_DIR/src/about_dialog.cpp \
    $$GUICOMMON_DIR/src/application.cpp

HEADERS  += \
    $$GUICOMMON_DIR/include/task/task.h \
    $$GUICOMMON_DIR/include/task/task_runner.h \
    $$GUICOMMON_DIR/include/widget/log_widget.h \
    $$GUICOMMON_DIR/include/widget/progress_group_widget.h \
    $$GUICOMMON_DIR/include/about_dialog.h \
    $$GUICOMMON_DIR/include/application.h

FORMS  += $$GUICOMMON_DIR/resources/ui/about_dialog.ui
FORMS  += $$GUICOMMON_DIR/resources/ui/log_widget.ui
FORMS  += $$GUICOMMON_DIR/resources/ui/progress_group_widget.ui
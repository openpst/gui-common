equals(BASE_DIR, ""):  error("Missing BASE_DIR")

CONFIG(release, debug|release){
	BUILD_DIR = $$BASE_DIR/build/release
	CONFIG -= debug
	RELEASE = release
} else {
	BUILD_DIR = $$BASE_DIR/build/debug
	CONFIG += debug
	RELEASE = debug
}

DEPENDPATH  += $$BASE_DIR
VPATH       += $$BASE_DIR
OBJECTS_DIR += $$BUILD_DIR/obj
MOC_DIR     += $$BUILD_DIR/moc
RCC_DIR     += $$BUILD_DIR/rcc
UI_DIR      += $$BUILD_DIR/ui
DESTDIR     += $$BUILD_DIR

message("------------ $$TARGET ($$RELEASE) ------------ ")
message("RELEASE     $$RELEASE")
message("ARC         $$QT_ARCH")
message("BASE_DIR    $$BASE_DIR")
message("BUILD_DIR   $$BUILD_DIR")
message("INCLUDEPATH $$INCLUDEPATH")
message("DEPENDPATH  $$DEPENDPATH")
message("VPATH       $$VPATH")
message("OBJECTS_DIR $$OBJECTS_DIR")
message("MOC_DIR     $$MOC_DIR")
message("RCC_DIR     $$RCC_DIR")
message("UI_DIR      $$UI_DIR")
message("DESTDIR     $$DESTDIR")
message("------------ $$TARGET ($$RELEASE) ------------ ")

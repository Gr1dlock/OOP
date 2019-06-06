#-------------------------------------------------
#
# Project created by QtCreator 2019-06-07T00:03:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LR_4
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        commands/add_camera_command.cpp \
        commands/add_model_command.cpp \
        commands/draw_command.cpp \
        commands/move_camera_command.cpp \
        commands/pitch_camera_command.cpp \
        commands/remove_camera_command.cpp \
        commands/remove_model_command.cpp \
        commands/roll_camera_command.cpp \
        commands/set_camera.cpp \
        commands/transform_model_command.cpp \
        commands/yaw_camera_command.cpp \
        draw/draw_manager.cpp \
        draw/qt_drawer.cpp \
        drawlabel.cpp \
        facade/facade.cpp \
        main.cpp \
        mainwindow.cpp \
        math/matrix.cpp \
        math/point.cpp \
        math/transform_matrix.cpp \
        mediator/mediator.cpp \
        objects/camera.cpp \
        objects/composite.cpp \
        objects/mesh.cpp \
        objects/model.cpp \
        scene/scene.cpp \
        scene/scene_manager.cpp \
        transformations/camera_manager.cpp \
        transformations/transform_manager.cpp \
        uploading/file_loader.cpp \
        uploading/load_manager.cpp \
        uploading/model_builder.cpp

HEADERS += \
        base_manager.h \
        commands/add_camera_command.h \
        commands/add_model_command.h \
        commands/basecommand.h \
        commands/draw_command.h \
        commands/move_camera_command.h \
        commands/pitch_camera_command.h \
        commands/remove_camera_command.h \
        commands/remove_model_command.h \
        commands/roll_camera_command.h \
        commands/set_camera.h \
        commands/transform_model_command.h \
        commands/yaw_camera_command.h \
        draw/base_draw_manager.h \
        draw/base_drawer.h \
        draw/draw_manager.h \
        draw/qt_drawer.h \
        drawlabel.h \
        exceptions/base_exception.h \
        exceptions/drawer_exception.h \
        exceptions/file_open_exception.h \
        exceptions/model_build_exception.h \
        exceptions/no_camera_exception.h \
        exceptions/no_object_exception.h \
        exceptions/object_type_exception.h \
        facade/facade.h \
        mainwindow.h \
        math/matrix.h \
        math/point.h \
        math/transform_matrix.h \
        mediator/mediator.h \
        objects/camera.h \
        objects/composite.h \
        objects/mesh.h \
        objects/model.h \
        objects/object.h \
        scene/scene.h \
        scene/scene_manager.h \
        transformations/camera_manager.h \
        transformations/transform_manager.h \
        uploading/base_load_manager.h \
        uploading/base_loader.h \
        uploading/file_loader.h \
        uploading/load_manager.h \
        uploading/model_builder.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    LR_4.pro \
    viewer.pro \
    viewer.pro


DISTFILES += \
    LR_4.pro.user \
    data.txt

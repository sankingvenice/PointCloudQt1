#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PointCloudQt1.h"

class PointCloudQt1 : public QMainWindow
{
	Q_OBJECT

public:
	PointCloudQt1(QWidget *parent = Q_NULLPTR);

private:
	Ui::PointCloudQt1Class ui;
};

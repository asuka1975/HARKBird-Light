#include "annotation.h"
#include "ui_annotation.h"

Annotation::Annotation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Annotation)
{
    ui->setupUi(this);
}

Annotation::~Annotation()
{
    delete ui;
}

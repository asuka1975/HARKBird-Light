#ifndef ANNOTATION_H
#define ANNOTATION_H

#include <QWidget>

namespace Ui {
class Annotation;
}

class Annotation : public QWidget
{
    Q_OBJECT

public:
    explicit Annotation(QWidget *parent = nullptr);
    ~Annotation();

private:
    Ui::Annotation *ui;
};

#endif // ANNOTATION_H

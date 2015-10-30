#include "find.h"
#include "ui_find.h"

Find::Find(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Find)
{
    ui->setupUi(this);
    connect(Ui->cancelButton, SIGNAL(clicked()), this, SLOT(close()) );
}

Find::~Find()
{
    delete ui;
}

void Find::on_findNext_clicked()
{
   //QString text = ui->lineEdit->text();

}

void Find::FindNext()
{

}

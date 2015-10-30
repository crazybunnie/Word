#include "document.h"

Document::Document(QWidget *parent):QTextEdit(parent)
{

}

bool Document::readFile(const QString &fileName)
{
 QFile file(fileName);

 if(!file.open(QIODevice::ReadOnly))
 {
     QMessageBox::warning(this, tr("Word"), tr("Cannot read file %1 \n%2.")
                          .arg(file.fileName()).arg(file.errorString()));
     return false;
 }

 QTextStream in(&file);
 setText(in.readAll());

}

bool Document::writeFile(const QString &fileName)
{
    QFile file(fileName);

    if(!file.open(QIODevice::WriteOnly)){
        QMessageBox::warning(this, tr("Word"),
                           tr("Cannot open File")
                           .arg(file.fileName())
                           .arg(file.errorString()));
        return false;
    }

    QTextStream out(&file);
    out << toPlainText();
    return true;

}

void Document::del()
{
  QTextCursor text = textCursor();
  text.removeSelectedText();
  this->setTextCursor(text);
}

void Document::findNext()
{

}

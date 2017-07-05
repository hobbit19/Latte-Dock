/*
 * Copyright 2017  Smith AR <audoban@openmailbox.org>
 *                 Michail Vourlakos <mvourlakos@gmail.com>
 *
 * This file is part of Latte-Dock
 *
 * Latte-Dock is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * Latte-Dock is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef LAYOUTCONFIGDIALOG_H
#define LAYOUTCONFIGDIALOG_H

#include <QObject>
#include <QDialog>
#include <QDebug>

namespace Ui
{
class LayoutConfigDialog;
}

namespace Latte {

class LayoutConfigDialog : public QDialog
{
    Q_OBJECT
public:
    LayoutConfigDialog(QWidget *parent);
    ~LayoutConfigDialog();

private slots:
    void on_copyButton_clicked();
    void on_removeButton_clicked();
    void on_importButton_clicked();
    void on_exportButton_clicked();

    void on_okButton_clicked();
    void on_applyButton_cliked();
    void on_cancelButton_clicked();
    void on_resetButton_clicked();


private:
    Ui::LayoutConfigDialog* ui;
};

}

#endif // LAYOUTCONFIGDIALOG_H
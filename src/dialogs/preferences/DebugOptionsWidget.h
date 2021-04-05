
#pragma once

#include <memory>

#include "core/Cutter.h"

class PreferencesDialog;

namespace Ui {
class DebugOptionsWidget;
}

class DebugOptionsWidget : public QDialog
{
    Q_OBJECT

public:
    explicit DebugOptionsWidget(PreferencesDialog *dialog);
    ~DebugOptionsWidget();

private:
    std::unique_ptr<Ui::DebugOptionsWidget> ui;

private slots:
    void updateDebugPlugin();
    void updateStackAddr();
    void updateStackSize();
    void onDebugPluginChanged(const QString &index);
};

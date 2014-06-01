// Copyright 2014 Toggl Desktop developers.

#ifndef SRC_UI_LINUX_TOGGLDESKTOP_SETTINGSVIEW_H_
#define SRC_UI_LINUX_TOGGLDESKTOP_SETTINGSVIEW_H_

#include <QObject>

#include "./kopsik_api.h"

class SettingsView : public QObject {
    Q_OBJECT

 public:
    explicit SettingsView(QObject *parent = 0);

    static SettingsView *importOne(KopsikSettingsViewItem *view) {
        SettingsView *result = new SettingsView();
        result->UseProxy = view->UseProxy;
        result->ProxyHost = QString(view->ProxyHost);
        result->ProxyPort = view->ProxyPort;
        result->ProxyUsername = QString(view->ProxyUsername);
        result->ProxyPassword = QString(view->ProxyPassword);
        result->UseIdleDetection = view->UseIdleDetection;
        result->MenubarTimer = view->MenubarTimer;
        result->DockIcon = view->DockIcon;
        result->OnTop = view->OnTop;
        result->Reminder = view->Reminder;
        result->RecordTimeline = view->RecordTimeline;
        return result;
    }

    bool UseProxy;
    QString ProxyHost;;
    uint64_t ProxyPort;
    QString ProxyUsername;
    QString ProxyPassword;
    bool UseIdleDetection;
    bool MenubarTimer;
    bool DockIcon;
    bool OnTop;
    bool Reminder;
    bool RecordTimeline;
};

#endif  // SRC_UI_LINUX_TOGGLDESKTOP_SETTINGSVIEW_H_
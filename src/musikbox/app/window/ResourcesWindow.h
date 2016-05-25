#pragma once

#include <cursespp/curses_config.h>
#include <cursespp/Window.h>

#include <app/util/SystemInfo.h>

namespace musik {
    namespace box {
        class ResourcesWindow : public Window {
            public:
                ResourcesWindow(IWindow *parent = NULL);
                virtual ~ResourcesWindow();

                virtual void Update();

            private:
                SystemInfo* systemInfo;
        };
    }
}

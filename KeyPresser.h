#pragma once

#include <ToolboxPlugin.h>

class KeyPresser : public ToolboxPlugin {
public:
    const char* Name() const override { return "Allow All Dialogs"; }

    void Initialize(ImGuiContext*, ImGuiAllocFns, HMODULE) override;
    void SignalTerminate() override;
    bool CanTerminate() override;
    void Terminate() override;
    void Update(float) override;
};

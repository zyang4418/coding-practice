// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Microsoft_Graphics_Display_2_H
#define WINRT_Microsoft_Graphics_Display_2_H
#include "winrt/impl/Microsoft.UI.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Microsoft.Graphics.Display.1.h"
WINRT_EXPORT namespace winrt::Microsoft::Graphics::Display
{
    struct WINRT_IMPL_EMPTY_BASES DisplayAdvancedColorInfo : winrt::Microsoft::Graphics::Display::IDisplayAdvancedColorInfo
    {
        DisplayAdvancedColorInfo(std::nullptr_t) noexcept {}
        DisplayAdvancedColorInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Graphics::Display::IDisplayAdvancedColorInfo(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayInformation : winrt::Microsoft::Graphics::Display::IDisplayInformation,
        impl::require<DisplayInformation, winrt::Windows::Foundation::IClosable>
    {
        DisplayInformation(std::nullptr_t) noexcept {}
        DisplayInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::Graphics::Display::IDisplayInformation(ptr, take_ownership_from_abi) {}
        static auto CreateForWindowId(winrt::Microsoft::UI::WindowId const& windowId);
        static auto CreateForDisplayId(winrt::Microsoft::UI::DisplayId const& displayId);
    };
}
#endif

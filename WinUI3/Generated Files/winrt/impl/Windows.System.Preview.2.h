// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Windows_System_Preview_2_H
#define WINRT_Windows_System_Preview_2_H
#include "winrt/impl/Windows.System.Preview.1.h"
WINRT_EXPORT namespace winrt::Windows::System::Preview
{
    struct WINRT_IMPL_EMPTY_BASES TwoPanelHingedDevicePosturePreview : winrt::Windows::System::Preview::ITwoPanelHingedDevicePosturePreview
    {
        TwoPanelHingedDevicePosturePreview(std::nullptr_t) noexcept {}
        TwoPanelHingedDevicePosturePreview(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Preview::ITwoPanelHingedDevicePosturePreview(ptr, take_ownership_from_abi) {}
        static auto GetDefaultAsync();
    };
    struct WINRT_IMPL_EMPTY_BASES TwoPanelHingedDevicePosturePreviewReading : winrt::Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReading
    {
        TwoPanelHingedDevicePosturePreviewReading(std::nullptr_t) noexcept {}
        TwoPanelHingedDevicePosturePreviewReading(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReading(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs : winrt::Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs
    {
        TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs(std::nullptr_t) noexcept {}
        TwoPanelHingedDevicePosturePreviewReadingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Preview::ITwoPanelHingedDevicePosturePreviewReadingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif

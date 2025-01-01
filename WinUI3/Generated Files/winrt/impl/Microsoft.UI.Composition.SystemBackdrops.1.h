// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Microsoft_UI_Composition_SystemBackdrops_1_H
#define WINRT_Microsoft_UI_Composition_SystemBackdrops_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Microsoft.UI.Composition.SystemBackdrops.0.h"
WINRT_EXPORT namespace winrt::Microsoft::UI::Composition::SystemBackdrops
{
    struct WINRT_IMPL_EMPTY_BASES IDesktopAcrylicController :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDesktopAcrylicController>
    {
        IDesktopAcrylicController(std::nullptr_t = nullptr) noexcept {}
        IDesktopAcrylicController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IDesktopAcrylicController2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDesktopAcrylicController2>
    {
        IDesktopAcrylicController2(std::nullptr_t = nullptr) noexcept {}
        IDesktopAcrylicController2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IDesktopAcrylicController3 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDesktopAcrylicController3>
    {
        IDesktopAcrylicController3(std::nullptr_t = nullptr) noexcept {}
        IDesktopAcrylicController3(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IDesktopAcrylicControllerStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDesktopAcrylicControllerStatics>
    {
        IDesktopAcrylicControllerStatics(std::nullptr_t = nullptr) noexcept {}
        IDesktopAcrylicControllerStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMicaController :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMicaController>
    {
        IMicaController(std::nullptr_t = nullptr) noexcept {}
        IMicaController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMicaController2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMicaController2>
    {
        IMicaController2(std::nullptr_t = nullptr) noexcept {}
        IMicaController2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMicaControllerStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMicaControllerStatics>
    {
        IMicaControllerStatics(std::nullptr_t = nullptr) noexcept {}
        IMicaControllerStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISystemBackdropConfiguration :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemBackdropConfiguration>
    {
        ISystemBackdropConfiguration(std::nullptr_t = nullptr) noexcept {}
        ISystemBackdropConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISystemBackdropController :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemBackdropController>,
        impl::require<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropController, winrt::Windows::Foundation::IClosable>
    {
        ISystemBackdropController(std::nullptr_t = nullptr) noexcept {}
        ISystemBackdropController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISystemBackdropControllerWithTargets :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemBackdropControllerWithTargets>,
        impl::require<winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropControllerWithTargets, winrt::Windows::Foundation::IClosable, winrt::Microsoft::UI::Composition::SystemBackdrops::ISystemBackdropController>
    {
        ISystemBackdropControllerWithTargets(std::nullptr_t = nullptr) noexcept {}
        ISystemBackdropControllerWithTargets(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif

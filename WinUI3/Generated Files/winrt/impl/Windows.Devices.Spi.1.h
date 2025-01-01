// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Windows_Devices_Spi_1_H
#define WINRT_Windows_Devices_Spi_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.Spi.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Spi
{
    struct WINRT_IMPL_EMPTY_BASES ISpiBusInfo :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpiBusInfo>
    {
        ISpiBusInfo(std::nullptr_t = nullptr) noexcept {}
        ISpiBusInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISpiConnectionSettings :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpiConnectionSettings>
    {
        ISpiConnectionSettings(std::nullptr_t = nullptr) noexcept {}
        ISpiConnectionSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISpiConnectionSettingsFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpiConnectionSettingsFactory>
    {
        ISpiConnectionSettingsFactory(std::nullptr_t = nullptr) noexcept {}
        ISpiConnectionSettingsFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISpiController :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpiController>
    {
        ISpiController(std::nullptr_t = nullptr) noexcept {}
        ISpiController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISpiControllerStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpiControllerStatics>
    {
        ISpiControllerStatics(std::nullptr_t = nullptr) noexcept {}
        ISpiControllerStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISpiDevice :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpiDevice>,
        impl::require<winrt::Windows::Devices::Spi::ISpiDevice, winrt::Windows::Foundation::IClosable>
    {
        ISpiDevice(std::nullptr_t = nullptr) noexcept {}
        ISpiDevice(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISpiDeviceStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISpiDeviceStatics>
    {
        ISpiDeviceStatics(std::nullptr_t = nullptr) noexcept {}
        ISpiDeviceStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif

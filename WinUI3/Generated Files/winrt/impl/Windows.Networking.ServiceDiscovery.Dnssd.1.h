// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Windows_Networking_ServiceDiscovery_Dnssd_1_H
#define WINRT_Windows_Networking_ServiceDiscovery_Dnssd_1_H
#include "winrt/impl/Windows.Networking.ServiceDiscovery.Dnssd.0.h"
WINRT_EXPORT namespace winrt::Windows::Networking::ServiceDiscovery::Dnssd
{
    struct WINRT_IMPL_EMPTY_BASES IDnssdRegistrationResult :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDnssdRegistrationResult>
    {
        IDnssdRegistrationResult(std::nullptr_t = nullptr) noexcept {}
        IDnssdRegistrationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IDnssdServiceInstance :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDnssdServiceInstance>
    {
        IDnssdServiceInstance(std::nullptr_t = nullptr) noexcept {}
        IDnssdServiceInstance(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IDnssdServiceInstanceFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDnssdServiceInstanceFactory>
    {
        IDnssdServiceInstanceFactory(std::nullptr_t = nullptr) noexcept {}
        IDnssdServiceInstanceFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IDnssdServiceWatcher :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDnssdServiceWatcher>
    {
        IDnssdServiceWatcher(std::nullptr_t = nullptr) noexcept {}
        IDnssdServiceWatcher(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif

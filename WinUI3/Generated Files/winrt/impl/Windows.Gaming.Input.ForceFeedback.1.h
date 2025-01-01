// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Windows_Gaming_Input_ForceFeedback_1_H
#define WINRT_Windows_Gaming_Input_ForceFeedback_1_H
#include "winrt/impl/Windows.Gaming.Input.ForceFeedback.0.h"
WINRT_EXPORT namespace winrt::Windows::Gaming::Input::ForceFeedback
{
    struct WINRT_IMPL_EMPTY_BASES IConditionForceEffect :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IConditionForceEffect>,
        impl::require<winrt::Windows::Gaming::Input::ForceFeedback::IConditionForceEffect, winrt::Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
    {
        IConditionForceEffect(std::nullptr_t = nullptr) noexcept {}
        IConditionForceEffect(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IConditionForceEffectFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IConditionForceEffectFactory>
    {
        IConditionForceEffectFactory(std::nullptr_t = nullptr) noexcept {}
        IConditionForceEffectFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IConstantForceEffect :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IConstantForceEffect>,
        impl::require<winrt::Windows::Gaming::Input::ForceFeedback::IConstantForceEffect, winrt::Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
    {
        IConstantForceEffect(std::nullptr_t = nullptr) noexcept {}
        IConstantForceEffect(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IForceFeedbackEffect :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IForceFeedbackEffect>
    {
        IForceFeedbackEffect(std::nullptr_t = nullptr) noexcept {}
        IForceFeedbackEffect(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IForceFeedbackMotor :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IForceFeedbackMotor>
    {
        IForceFeedbackMotor(std::nullptr_t = nullptr) noexcept {}
        IForceFeedbackMotor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IPeriodicForceEffect :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPeriodicForceEffect>,
        impl::require<winrt::Windows::Gaming::Input::ForceFeedback::IPeriodicForceEffect, winrt::Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
    {
        IPeriodicForceEffect(std::nullptr_t = nullptr) noexcept {}
        IPeriodicForceEffect(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IPeriodicForceEffectFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPeriodicForceEffectFactory>
    {
        IPeriodicForceEffectFactory(std::nullptr_t = nullptr) noexcept {}
        IPeriodicForceEffectFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IRampForceEffect :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRampForceEffect>,
        impl::require<winrt::Windows::Gaming::Input::ForceFeedback::IRampForceEffect, winrt::Windows::Gaming::Input::ForceFeedback::IForceFeedbackEffect>
    {
        IRampForceEffect(std::nullptr_t = nullptr) noexcept {}
        IRampForceEffect(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif

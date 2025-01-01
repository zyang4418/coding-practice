// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Microsoft_Windows_AppLifecycle_H
#define WINRT_Microsoft_Windows_AppLifecycle_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.240405.15"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.240405.15"
#include "winrt/impl/Windows.ApplicationModel.Core.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Microsoft.Windows.AppLifecycle.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IActivationRegistrationManagerStatics<D>::RegisterForFileTypeActivation(array_view<hstring const> supportedFileTypes, param::hstring const& logo, param::hstring const& displayName, array_view<hstring const> supportedVerbs, param::hstring const& exePath) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IActivationRegistrationManagerStatics)->RegisterForFileTypeActivation(supportedFileTypes.size(), get_abi(supportedFileTypes), *(void**)(&logo), *(void**)(&displayName), supportedVerbs.size(), get_abi(supportedVerbs), *(void**)(&exePath)));
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IActivationRegistrationManagerStatics<D>::RegisterForProtocolActivation(param::hstring const& scheme, param::hstring const& logo, param::hstring const& displayName, param::hstring const& exePath) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IActivationRegistrationManagerStatics)->RegisterForProtocolActivation(*(void**)(&scheme), *(void**)(&logo), *(void**)(&displayName), *(void**)(&exePath)));
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IActivationRegistrationManagerStatics<D>::RegisterForStartupActivation(param::hstring const& taskId, param::hstring const& exePath) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IActivationRegistrationManagerStatics)->RegisterForStartupActivation(*(void**)(&taskId), *(void**)(&exePath)));
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IActivationRegistrationManagerStatics<D>::UnregisterForFileTypeActivation(array_view<hstring const> fileTypes, param::hstring const& exePath) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IActivationRegistrationManagerStatics)->UnregisterForFileTypeActivation(fileTypes.size(), get_abi(fileTypes), *(void**)(&exePath)));
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IActivationRegistrationManagerStatics<D>::UnregisterForProtocolActivation(param::hstring const& scheme, param::hstring const& exePath) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IActivationRegistrationManagerStatics)->UnregisterForProtocolActivation(*(void**)(&scheme), *(void**)(&exePath)));
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IActivationRegistrationManagerStatics<D>::UnregisterForStartupActivation(param::hstring const& taskId) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IActivationRegistrationManagerStatics)->UnregisterForStartupActivation(*(void**)(&taskId)));
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IAppActivationArguments<D>::Kind() const
    {
        winrt::Microsoft::Windows::AppLifecycle::ExtendedActivationKind value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IAppActivationArguments)->get_Kind(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IAppActivationArguments<D>::Data() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IAppActivationArguments)->get_Data(&value));
        return winrt::Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IAppInstance<D>::UnregisterKey() const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IAppInstance)->UnregisterKey());
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IAppInstance<D>::RedirectActivationToAsync(winrt::Microsoft::Windows::AppLifecycle::AppActivationArguments const& args) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IAppInstance)->RedirectActivationToAsync(*(void**)(&args), &operation));
        return winrt::Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IAppInstance<D>::GetActivatedEventArgs() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IAppInstance)->GetActivatedEventArgs(&result));
        return winrt::Microsoft::Windows::AppLifecycle::AppActivationArguments{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IAppInstance<D>::Activated(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Windows::AppLifecycle::AppActivationArguments> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IAppInstance)->add_Activated(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IAppInstance<D>::Activated(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Windows::AppLifecycle::AppActivationArguments> const& handler) const
    {
        return impl::make_event_revoker<D, Activated_revoker>(this, Activated(handler));
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IAppInstance<D>::Activated(winrt::event_token const& token) const noexcept
    {
        WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IAppInstance)->remove_Activated(impl::bind_in(token));
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IAppInstance<D>::Key() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IAppInstance)->get_Key(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IAppInstance<D>::IsCurrent() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IAppInstance)->get_IsCurrent(&value));
        return value;
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IAppInstance<D>::ProcessId() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IAppInstance)->get_ProcessId(&value));
        return value;
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IAppInstanceStatics<D>::GetCurrent() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics)->GetCurrent(&result));
        return winrt::Microsoft::Windows::AppLifecycle::AppInstance{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IAppInstanceStatics<D>::GetInstances() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics)->GetInstances(&result));
        return winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::Windows::AppLifecycle::AppInstance>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IAppInstanceStatics<D>::FindOrRegisterForKey(param::hstring const& key) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics)->FindOrRegisterForKey(*(void**)(&key), &result));
        return winrt::Microsoft::Windows::AppLifecycle::AppInstance{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_Windows_AppLifecycle_IAppInstanceStatics2<D>::Restart(param::hstring const& arguments) const
    {
        winrt::Windows::ApplicationModel::Core::AppRestartFailureReason result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics2)->Restart(*(void**)(&arguments), reinterpret_cast<int32_t*>(&result)));
        return result;
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::Windows::AppLifecycle::IActivationRegistrationManagerStatics> : produce_base<D, winrt::Microsoft::Windows::AppLifecycle::IActivationRegistrationManagerStatics>
    {
        int32_t __stdcall RegisterForFileTypeActivation(uint32_t __supportedFileTypesSize, void** supportedFileTypes, void* logo, void* displayName, uint32_t __supportedVerbsSize, void** supportedVerbs, void* exePath) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterForFileTypeActivation(array_view<hstring const>(reinterpret_cast<hstring const *>(supportedFileTypes), reinterpret_cast<hstring const *>(supportedFileTypes) + __supportedFileTypesSize), *reinterpret_cast<hstring const*>(&logo), *reinterpret_cast<hstring const*>(&displayName), array_view<hstring const>(reinterpret_cast<hstring const *>(supportedVerbs), reinterpret_cast<hstring const *>(supportedVerbs) + __supportedVerbsSize), *reinterpret_cast<hstring const*>(&exePath));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RegisterForProtocolActivation(void* scheme, void* logo, void* displayName, void* exePath) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterForProtocolActivation(*reinterpret_cast<hstring const*>(&scheme), *reinterpret_cast<hstring const*>(&logo), *reinterpret_cast<hstring const*>(&displayName), *reinterpret_cast<hstring const*>(&exePath));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RegisterForStartupActivation(void* taskId, void* exePath) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterForStartupActivation(*reinterpret_cast<hstring const*>(&taskId), *reinterpret_cast<hstring const*>(&exePath));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UnregisterForFileTypeActivation(uint32_t __fileTypesSize, void** fileTypes, void* exePath) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnregisterForFileTypeActivation(array_view<hstring const>(reinterpret_cast<hstring const *>(fileTypes), reinterpret_cast<hstring const *>(fileTypes) + __fileTypesSize), *reinterpret_cast<hstring const*>(&exePath));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UnregisterForProtocolActivation(void* scheme, void* exePath) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnregisterForProtocolActivation(*reinterpret_cast<hstring const*>(&scheme), *reinterpret_cast<hstring const*>(&exePath));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UnregisterForStartupActivation(void* taskId) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnregisterForStartupActivation(*reinterpret_cast<hstring const*>(&taskId));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::Windows::AppLifecycle::IAppActivationArguments> : produce_base<D, winrt::Microsoft::Windows::AppLifecycle::IAppActivationArguments>
    {
        int32_t __stdcall get_Kind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Microsoft::Windows::AppLifecycle::ExtendedActivationKind>(this->shim().Kind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Data(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IInspectable>(this->shim().Data());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::Windows::AppLifecycle::IAppInstance> : produce_base<D, winrt::Microsoft::Windows::AppLifecycle::IAppInstance>
    {
        int32_t __stdcall UnregisterKey() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UnregisterKey();
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RedirectActivationToAsync(void* args, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<winrt::Windows::Foundation::IAsyncAction>(this->shim().RedirectActivationToAsync(*reinterpret_cast<winrt::Microsoft::Windows::AppLifecycle::AppActivationArguments const*>(&args)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetActivatedEventArgs(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Microsoft::Windows::AppLifecycle::AppActivationArguments>(this->shim().GetActivatedEventArgs());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_Activated(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Activated(*reinterpret_cast<winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Windows::AppLifecycle::AppActivationArguments> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Activated(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Activated(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_Key(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Key());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsCurrent(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCurrent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProcessId(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ProcessId());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics> : produce_base<D, winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics>
    {
        int32_t __stdcall GetCurrent(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Microsoft::Windows::AppLifecycle::AppInstance>(this->shim().GetCurrent());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetInstances(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::Windows::AppLifecycle::AppInstance>>(this->shim().GetInstances());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall FindOrRegisterForKey(void* key, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Microsoft::Windows::AppLifecycle::AppInstance>(this->shim().FindOrRegisterForKey(*reinterpret_cast<hstring const*>(&key)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics2> : produce_base<D, winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics2>
    {
        int32_t __stdcall Restart(void* arguments, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::Core::AppRestartFailureReason>(this->shim().Restart(*reinterpret_cast<hstring const*>(&arguments)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Microsoft::Windows::AppLifecycle
{
    inline auto ActivationRegistrationManager::RegisterForFileTypeActivation(array_view<hstring const> supportedFileTypes, param::hstring const& logo, param::hstring const& displayName, array_view<hstring const> supportedVerbs, param::hstring const& exePath)
    {
        impl::call_factory<ActivationRegistrationManager, IActivationRegistrationManagerStatics>([&](IActivationRegistrationManagerStatics const& f) { return f.RegisterForFileTypeActivation(supportedFileTypes, logo, displayName, supportedVerbs, exePath); });
    }
    inline auto ActivationRegistrationManager::RegisterForProtocolActivation(param::hstring const& scheme, param::hstring const& logo, param::hstring const& displayName, param::hstring const& exePath)
    {
        impl::call_factory<ActivationRegistrationManager, IActivationRegistrationManagerStatics>([&](IActivationRegistrationManagerStatics const& f) { return f.RegisterForProtocolActivation(scheme, logo, displayName, exePath); });
    }
    inline auto ActivationRegistrationManager::RegisterForStartupActivation(param::hstring const& taskId, param::hstring const& exePath)
    {
        impl::call_factory<ActivationRegistrationManager, IActivationRegistrationManagerStatics>([&](IActivationRegistrationManagerStatics const& f) { return f.RegisterForStartupActivation(taskId, exePath); });
    }
    inline auto ActivationRegistrationManager::UnregisterForFileTypeActivation(array_view<hstring const> fileTypes, param::hstring const& exePath)
    {
        impl::call_factory<ActivationRegistrationManager, IActivationRegistrationManagerStatics>([&](IActivationRegistrationManagerStatics const& f) { return f.UnregisterForFileTypeActivation(fileTypes, exePath); });
    }
    inline auto ActivationRegistrationManager::UnregisterForProtocolActivation(param::hstring const& scheme, param::hstring const& exePath)
    {
        impl::call_factory<ActivationRegistrationManager, IActivationRegistrationManagerStatics>([&](IActivationRegistrationManagerStatics const& f) { return f.UnregisterForProtocolActivation(scheme, exePath); });
    }
    inline auto ActivationRegistrationManager::UnregisterForStartupActivation(param::hstring const& taskId)
    {
        impl::call_factory<ActivationRegistrationManager, IActivationRegistrationManagerStatics>([&](IActivationRegistrationManagerStatics const& f) { return f.UnregisterForStartupActivation(taskId); });
    }
    inline auto AppInstance::GetCurrent()
    {
        return impl::call_factory_cast<winrt::Microsoft::Windows::AppLifecycle::AppInstance(*)(IAppInstanceStatics const&), AppInstance, IAppInstanceStatics>([](IAppInstanceStatics const& f) { return f.GetCurrent(); });
    }
    inline auto AppInstance::GetInstances()
    {
        return impl::call_factory_cast<winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::Windows::AppLifecycle::AppInstance>(*)(IAppInstanceStatics const&), AppInstance, IAppInstanceStatics>([](IAppInstanceStatics const& f) { return f.GetInstances(); });
    }
    inline auto AppInstance::FindOrRegisterForKey(param::hstring const& key)
    {
        return impl::call_factory<AppInstance, IAppInstanceStatics>([&](IAppInstanceStatics const& f) { return f.FindOrRegisterForKey(key); });
    }
    inline auto AppInstance::Restart(param::hstring const& arguments)
    {
        return impl::call_factory<AppInstance, IAppInstanceStatics2>([&](IAppInstanceStatics2 const& f) { return f.Restart(arguments); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Microsoft::Windows::AppLifecycle::IActivationRegistrationManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::Windows::AppLifecycle::IAppActivationArguments> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::Windows::AppLifecycle::IAppInstance> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::Windows::AppLifecycle::IAppInstanceStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::Windows::AppLifecycle::ActivationRegistrationManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::Windows::AppLifecycle::AppActivationArguments> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::Windows::AppLifecycle::AppInstance> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif

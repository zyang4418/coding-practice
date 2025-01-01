// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Microsoft_UI_Xaml_Resources_0_H
#define WINRT_Microsoft_UI_Xaml_Resources_0_H
WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::Resources
{
    struct ICustomXamlResourceLoader;
    struct ICustomXamlResourceLoaderFactory;
    struct ICustomXamlResourceLoaderOverrides;
    struct ICustomXamlResourceLoaderStatics;
    struct CustomXamlResourceLoader;
}
namespace winrt::impl
{
    template <> struct category<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoader>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::Resources::CustomXamlResourceLoader>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Resources::CustomXamlResourceLoader> = L"Microsoft.UI.Xaml.Resources.CustomXamlResourceLoader";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoader> = L"Microsoft.UI.Xaml.Resources.ICustomXamlResourceLoader";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory> = L"Microsoft.UI.Xaml.Resources.ICustomXamlResourceLoaderFactory";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides> = L"Microsoft.UI.Xaml.Resources.ICustomXamlResourceLoaderOverrides";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics> = L"Microsoft.UI.Xaml.Resources.ICustomXamlResourceLoaderStatics";
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoader>{ 0x2832C2E5,0x2ACE,0x5993,{ 0xA1,0x73,0x3C,0x9C,0x3B,0x99,0x2B,0x2E } }; // 2832C2E5-2ACE-5993-A173-3C9C3B992B2E
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory>{ 0x174D49A6,0xE1E2,0x5F7B,{ 0xA6,0x18,0xA8,0xA9,0x53,0xD1,0xB5,0xA0 } }; // 174D49A6-E1E2-5F7B-A618-A8A953D1B5A0
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>{ 0x84BB504C,0x6730,0x586A,{ 0xBD,0x04,0x91,0x98,0x26,0x4B,0x2D,0xC7 } }; // 84BB504C-6730-586A-BD04-9198264B2DC7
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics>{ 0xE08A5A92,0xB1A2,0x539A,{ 0x9D,0x4A,0x79,0x94,0xE4,0x46,0x8C,0xD7 } }; // E08A5A92-B1A2-539A-9D4A-7994E4468CD7
    template <> struct default_interface<winrt::Microsoft::UI::Xaml::Resources::CustomXamlResourceLoader>{ using type = winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoader; };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoader>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall GetResource(void*, void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Current(void**) noexcept = 0;
            virtual int32_t __stdcall put_Current(void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Resources_ICustomXamlResourceLoader
    {
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoader>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Resources_ICustomXamlResourceLoader<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Resources_ICustomXamlResourceLoaderFactory
    {
        auto CreateInstance(winrt::Windows::Foundation::IInspectable const& baseInterface, winrt::Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Resources_ICustomXamlResourceLoaderFactory<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Resources_ICustomXamlResourceLoaderOverrides
    {
        auto GetResource(param::hstring const& resourceId, param::hstring const& objectType, param::hstring const& propertyName, param::hstring const& propertyType) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Resources_ICustomXamlResourceLoaderOverrides<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_Resources_ICustomXamlResourceLoaderStatics
    {
        [[nodiscard]] auto Current() const;
        auto Current(winrt::Microsoft::UI::Xaml::Resources::CustomXamlResourceLoader const& value) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_Resources_ICustomXamlResourceLoaderStatics<D>;
    };
}
#endif

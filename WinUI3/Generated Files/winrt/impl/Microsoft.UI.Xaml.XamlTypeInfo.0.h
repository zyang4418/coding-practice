// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Microsoft_UI_Xaml_XamlTypeInfo_0_H
#define WINRT_Microsoft_UI_Xaml_XamlTypeInfo_0_H
WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::Markup
{
    struct IXamlMetadataProvider;
}
WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::XamlTypeInfo
{
    struct IXamlControlsXamlMetaDataProvider;
    struct IXamlControlsXamlMetaDataProviderStatics;
    struct XamlControlsXamlMetaDataProvider;
}
namespace winrt::impl
{
    template <> struct category<winrt::Microsoft::UI::Xaml::XamlTypeInfo::IXamlControlsXamlMetaDataProvider>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::XamlTypeInfo::IXamlControlsXamlMetaDataProviderStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider> = L"Microsoft.UI.Xaml.XamlTypeInfo.XamlControlsXamlMetaDataProvider";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::XamlTypeInfo::IXamlControlsXamlMetaDataProvider> = L"Microsoft.UI.Xaml.XamlTypeInfo.IXamlControlsXamlMetaDataProvider";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Xaml::XamlTypeInfo::IXamlControlsXamlMetaDataProviderStatics> = L"Microsoft.UI.Xaml.XamlTypeInfo.IXamlControlsXamlMetaDataProviderStatics";
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::XamlTypeInfo::IXamlControlsXamlMetaDataProvider>{ 0x17FA3F58,0x3472,0x5AA2,{ 0xA0,0xF8,0x1A,0xB8,0xA5,0x19,0x57,0x3D } }; // 17FA3F58-3472-5AA2-A0F8-1AB8A519573D
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Xaml::XamlTypeInfo::IXamlControlsXamlMetaDataProviderStatics>{ 0x2D7EB3FD,0xECDB,0x5084,{ 0xB7,0xE0,0x12,0xF9,0x59,0x83,0x81,0xEF } }; // 2D7EB3FD-ECDB-5084-B7E0-12F9598381EF
    template <> struct default_interface<winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider>{ using type = winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider; };
    template <> struct abi<winrt::Microsoft::UI::Xaml::XamlTypeInfo::IXamlControlsXamlMetaDataProvider>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Xaml::XamlTypeInfo::IXamlControlsXamlMetaDataProviderStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall Initialize() noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_XamlTypeInfo_IXamlControlsXamlMetaDataProvider
    {
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::XamlTypeInfo::IXamlControlsXamlMetaDataProvider>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_XamlTypeInfo_IXamlControlsXamlMetaDataProvider<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Xaml_XamlTypeInfo_IXamlControlsXamlMetaDataProviderStatics
    {
        auto Initialize() const;
    };
    template <> struct consume<winrt::Microsoft::UI::Xaml::XamlTypeInfo::IXamlControlsXamlMetaDataProviderStatics>
    {
        template <typename D> using type = consume_Microsoft_UI_Xaml_XamlTypeInfo_IXamlControlsXamlMetaDataProviderStatics<D>;
    };
}
#endif

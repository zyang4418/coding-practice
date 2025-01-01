// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Microsoft_Graphics_Display_0_H
#define WINRT_Microsoft_Graphics_Display_0_H
WINRT_EXPORT namespace winrt::Microsoft::UI
{
    struct DisplayId;
    struct WindowId;
}
WINRT_EXPORT namespace winrt::Microsoft::UI::Dispatching
{
    struct DispatcherQueue;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct Point;
    template <typename TSender, typename TResult> struct WINRT_IMPL_EMPTY_BASES TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStream;
}
WINRT_EXPORT namespace winrt::Microsoft::Graphics::Display
{
    enum class DisplayAdvancedColorKind : int32_t
    {
        StandardDynamicRange = 0,
        WideColorGamut = 1,
        HighDynamicRange = 2,
    };
    enum class DisplayHdrMetadataFormat : int32_t
    {
        Hdr10 = 0,
        Hdr10Plus = 1,
    };
    struct IDisplayAdvancedColorInfo;
    struct IDisplayInformation;
    struct IDisplayInformationStatics;
    struct DisplayAdvancedColorInfo;
    struct DisplayInformation;
}
namespace winrt::impl
{
    template <> struct category<winrt::Microsoft::Graphics::Display::IDisplayAdvancedColorInfo>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Graphics::Display::IDisplayInformation>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Graphics::Display::IDisplayInformationStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Graphics::Display::DisplayAdvancedColorInfo>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Graphics::Display::DisplayInformation>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Graphics::Display::DisplayAdvancedColorKind>{ using type = enum_category; };
    template <> struct category<winrt::Microsoft::Graphics::Display::DisplayHdrMetadataFormat>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Microsoft::Graphics::Display::DisplayAdvancedColorInfo> = L"Microsoft.Graphics.Display.DisplayAdvancedColorInfo";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Graphics::Display::DisplayInformation> = L"Microsoft.Graphics.Display.DisplayInformation";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Graphics::Display::DisplayAdvancedColorKind> = L"Microsoft.Graphics.Display.DisplayAdvancedColorKind";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Graphics::Display::DisplayHdrMetadataFormat> = L"Microsoft.Graphics.Display.DisplayHdrMetadataFormat";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Graphics::Display::IDisplayAdvancedColorInfo> = L"Microsoft.Graphics.Display.IDisplayAdvancedColorInfo";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Graphics::Display::IDisplayInformation> = L"Microsoft.Graphics.Display.IDisplayInformation";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Graphics::Display::IDisplayInformationStatics> = L"Microsoft.Graphics.Display.IDisplayInformationStatics";
    template <> inline constexpr guid guid_v<winrt::Microsoft::Graphics::Display::IDisplayAdvancedColorInfo>{ 0xB44F0F47,0x7065,0x5175,{ 0xBA,0x3E,0x71,0x44,0x89,0xC8,0x5A,0x3E } }; // B44F0F47-7065-5175-BA3E-714489C85A3E
    template <> inline constexpr guid guid_v<winrt::Microsoft::Graphics::Display::IDisplayInformation>{ 0xF0D58D4F,0x84CE,0x5B27,{ 0xB2,0x22,0x4F,0x8F,0x7D,0xC0,0xAA,0xEB } }; // F0D58D4F-84CE-5B27-B222-4F8F7DC0AAEB
    template <> inline constexpr guid guid_v<winrt::Microsoft::Graphics::Display::IDisplayInformationStatics>{ 0x2DE85048,0x37FA,0x56C0,{ 0xAC,0x30,0x47,0xE2,0x04,0x4D,0x7E,0xA8 } }; // 2DE85048-37FA-56C0-AC30-47E2044D7EA8
    template <> struct default_interface<winrt::Microsoft::Graphics::Display::DisplayAdvancedColorInfo>{ using type = winrt::Microsoft::Graphics::Display::IDisplayAdvancedColorInfo; };
    template <> struct default_interface<winrt::Microsoft::Graphics::Display::DisplayInformation>{ using type = winrt::Microsoft::Graphics::Display::IDisplayInformation; };
    template <> struct abi<winrt::Microsoft::Graphics::Display::IDisplayAdvancedColorInfo>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_CurrentAdvancedColorKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_RedPrimary(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_GreenPrimary(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_BluePrimary(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_WhitePoint(winrt::Windows::Foundation::Point*) noexcept = 0;
            virtual int32_t __stdcall get_MaxLuminanceInNits(double*) noexcept = 0;
            virtual int32_t __stdcall get_MinLuminanceInNits(double*) noexcept = 0;
            virtual int32_t __stdcall get_MaxAverageFullFrameLuminanceInNits(double*) noexcept = 0;
            virtual int32_t __stdcall get_SdrWhiteLevelInNits(double*) noexcept = 0;
            virtual int32_t __stdcall IsHdrMetadataFormatCurrentlySupported(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall IsAdvancedColorKindAvailable(int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Graphics::Display::IDisplayInformation>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_DispatcherQueue(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsStereoEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall add_IsStereoEnabledChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsStereoEnabledChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetColorProfileAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetColorProfile(void**) noexcept = 0;
            virtual int32_t __stdcall add_ColorProfileChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ColorProfileChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetAdvancedColorInfo(void**) noexcept = 0;
            virtual int32_t __stdcall add_AdvancedColorInfoChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_AdvancedColorInfoChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Destroyed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Destroyed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Graphics::Display::IDisplayInformationStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall CreateForWindowId(struct struct_Microsoft_UI_WindowId, void**) noexcept = 0;
            virtual int32_t __stdcall CreateForDisplayId(struct struct_Microsoft_UI_DisplayId, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Microsoft_Graphics_Display_IDisplayAdvancedColorInfo
    {
        [[nodiscard]] auto CurrentAdvancedColorKind() const;
        [[nodiscard]] auto RedPrimary() const;
        [[nodiscard]] auto GreenPrimary() const;
        [[nodiscard]] auto BluePrimary() const;
        [[nodiscard]] auto WhitePoint() const;
        [[nodiscard]] auto MaxLuminanceInNits() const;
        [[nodiscard]] auto MinLuminanceInNits() const;
        [[nodiscard]] auto MaxAverageFullFrameLuminanceInNits() const;
        [[nodiscard]] auto SdrWhiteLevelInNits() const;
        auto IsHdrMetadataFormatCurrentlySupported(winrt::Microsoft::Graphics::Display::DisplayHdrMetadataFormat const& format) const;
        auto IsAdvancedColorKindAvailable(winrt::Microsoft::Graphics::Display::DisplayAdvancedColorKind const& kind) const;
    };
    template <> struct consume<winrt::Microsoft::Graphics::Display::IDisplayAdvancedColorInfo>
    {
        template <typename D> using type = consume_Microsoft_Graphics_Display_IDisplayAdvancedColorInfo<D>;
    };
    template <typename D>
    struct consume_Microsoft_Graphics_Display_IDisplayInformation
    {
        [[nodiscard]] auto DispatcherQueue() const;
        [[nodiscard]] auto IsStereoEnabled() const;
        auto IsStereoEnabledChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::Graphics::Display::DisplayInformation, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using IsStereoEnabledChanged_revoker = impl::event_revoker<winrt::Microsoft::Graphics::Display::IDisplayInformation, &impl::abi_t<winrt::Microsoft::Graphics::Display::IDisplayInformation>::remove_IsStereoEnabledChanged>;
        [[nodiscard]] auto IsStereoEnabledChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::Graphics::Display::DisplayInformation, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto IsStereoEnabledChanged(winrt::event_token const& token) const noexcept;
        auto GetColorProfileAsync() const;
        auto GetColorProfile() const;
        auto ColorProfileChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::Graphics::Display::DisplayInformation, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using ColorProfileChanged_revoker = impl::event_revoker<winrt::Microsoft::Graphics::Display::IDisplayInformation, &impl::abi_t<winrt::Microsoft::Graphics::Display::IDisplayInformation>::remove_ColorProfileChanged>;
        [[nodiscard]] auto ColorProfileChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::Graphics::Display::DisplayInformation, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto ColorProfileChanged(winrt::event_token const& token) const noexcept;
        auto GetAdvancedColorInfo() const;
        auto AdvancedColorInfoChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::Graphics::Display::DisplayInformation, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using AdvancedColorInfoChanged_revoker = impl::event_revoker<winrt::Microsoft::Graphics::Display::IDisplayInformation, &impl::abi_t<winrt::Microsoft::Graphics::Display::IDisplayInformation>::remove_AdvancedColorInfoChanged>;
        [[nodiscard]] auto AdvancedColorInfoChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::Graphics::Display::DisplayInformation, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto AdvancedColorInfoChanged(winrt::event_token const& token) const noexcept;
        auto Destroyed(winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::Graphics::Display::DisplayInformation, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using Destroyed_revoker = impl::event_revoker<winrt::Microsoft::Graphics::Display::IDisplayInformation, &impl::abi_t<winrt::Microsoft::Graphics::Display::IDisplayInformation>::remove_Destroyed>;
        [[nodiscard]] auto Destroyed(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Microsoft::Graphics::Display::DisplayInformation, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto Destroyed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Microsoft::Graphics::Display::IDisplayInformation>
    {
        template <typename D> using type = consume_Microsoft_Graphics_Display_IDisplayInformation<D>;
    };
    template <typename D>
    struct consume_Microsoft_Graphics_Display_IDisplayInformationStatics
    {
        auto CreateForWindowId(winrt::Microsoft::UI::WindowId const& windowId) const;
        auto CreateForDisplayId(winrt::Microsoft::UI::DisplayId const& displayId) const;
    };
    template <> struct consume<winrt::Microsoft::Graphics::Display::IDisplayInformationStatics>
    {
        template <typename D> using type = consume_Microsoft_Graphics_Display_IDisplayInformationStatics<D>;
    };
}
#endif

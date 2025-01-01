// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Microsoft_UI_Composition_Effects_0_H
#define WINRT_Microsoft_UI_Composition_Effects_0_H
WINRT_EXPORT namespace winrt::Windows::Graphics::Effects
{
    struct IGraphicsEffectSource;
}
WINRT_EXPORT namespace winrt::Microsoft::UI::Composition::Effects
{
    enum class SceneLightingEffectReflectanceModel : int32_t
    {
        BlinnPhong = 0,
        PhysicallyBasedBlinnPhong = 1,
    };
    struct ISceneLightingEffect;
    struct ISceneLightingEffect2;
    struct SceneLightingEffect;
}
namespace winrt::impl
{
    template <> struct category<winrt::Microsoft::UI::Composition::Effects::ISceneLightingEffect>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::Effects::ISceneLightingEffect2>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::Effects::SceneLightingEffect>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::UI::Composition::Effects::SceneLightingEffectReflectanceModel>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::Effects::SceneLightingEffect> = L"Microsoft.UI.Composition.Effects.SceneLightingEffect";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::Effects::SceneLightingEffectReflectanceModel> = L"Microsoft.UI.Composition.Effects.SceneLightingEffectReflectanceModel";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::Effects::ISceneLightingEffect> = L"Microsoft.UI.Composition.Effects.ISceneLightingEffect";
    template <> inline constexpr auto& name_v<winrt::Microsoft::UI::Composition::Effects::ISceneLightingEffect2> = L"Microsoft.UI.Composition.Effects.ISceneLightingEffect2";
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Composition::Effects::ISceneLightingEffect>{ 0xEB1E7316,0x114C,0x5950,{ 0x84,0x80,0x20,0xA2,0x9A,0x3B,0xB1,0xEE } }; // EB1E7316-114C-5950-8480-20A29A3BB1EE
    template <> inline constexpr guid guid_v<winrt::Microsoft::UI::Composition::Effects::ISceneLightingEffect2>{ 0x6B6496B2,0x468D,0x50D1,{ 0xBB,0xE9,0x59,0x3B,0x82,0x63,0xAD,0x80 } }; // 6B6496B2-468D-50D1-BBE9-593B8263AD80
    template <> struct default_interface<winrt::Microsoft::UI::Composition::Effects::SceneLightingEffect>{ using type = winrt::Microsoft::UI::Composition::Effects::ISceneLightingEffect; };
    template <> struct abi<winrt::Microsoft::UI::Composition::Effects::ISceneLightingEffect>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_AmbientAmount(float*) noexcept = 0;
            virtual int32_t __stdcall put_AmbientAmount(float) noexcept = 0;
            virtual int32_t __stdcall get_DiffuseAmount(float*) noexcept = 0;
            virtual int32_t __stdcall put_DiffuseAmount(float) noexcept = 0;
            virtual int32_t __stdcall get_NormalMapSource(void**) noexcept = 0;
            virtual int32_t __stdcall put_NormalMapSource(void*) noexcept = 0;
            virtual int32_t __stdcall get_SpecularAmount(float*) noexcept = 0;
            virtual int32_t __stdcall put_SpecularAmount(float) noexcept = 0;
            virtual int32_t __stdcall get_SpecularShine(float*) noexcept = 0;
            virtual int32_t __stdcall put_SpecularShine(float) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::UI::Composition::Effects::ISceneLightingEffect2>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_ReflectanceModel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ReflectanceModel(int32_t) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Microsoft_UI_Composition_Effects_ISceneLightingEffect
    {
        [[nodiscard]] auto AmbientAmount() const;
        auto AmbientAmount(float value) const;
        [[nodiscard]] auto DiffuseAmount() const;
        auto DiffuseAmount(float value) const;
        [[nodiscard]] auto NormalMapSource() const;
        auto NormalMapSource(winrt::Windows::Graphics::Effects::IGraphicsEffectSource const& value) const;
        [[nodiscard]] auto SpecularAmount() const;
        auto SpecularAmount(float value) const;
        [[nodiscard]] auto SpecularShine() const;
        auto SpecularShine(float value) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Composition::Effects::ISceneLightingEffect>
    {
        template <typename D> using type = consume_Microsoft_UI_Composition_Effects_ISceneLightingEffect<D>;
    };
    template <typename D>
    struct consume_Microsoft_UI_Composition_Effects_ISceneLightingEffect2
    {
        [[nodiscard]] auto ReflectanceModel() const;
        auto ReflectanceModel(winrt::Microsoft::UI::Composition::Effects::SceneLightingEffectReflectanceModel const& value) const;
    };
    template <> struct consume<winrt::Microsoft::UI::Composition::Effects::ISceneLightingEffect2>
    {
        template <typename D> using type = consume_Microsoft_UI_Composition_Effects_ISceneLightingEffect2<D>;
    };
}
#endif

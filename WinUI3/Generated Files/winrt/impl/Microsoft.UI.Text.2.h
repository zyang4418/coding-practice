// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Microsoft_UI_Text_2_H
#define WINRT_Microsoft_UI_Text_2_H
#include "winrt/impl/Microsoft.UI.Text.1.h"
WINRT_EXPORT namespace winrt::Microsoft::UI::Text
{
    struct WINRT_IMPL_EMPTY_BASES FontWeights : winrt::Microsoft::UI::Text::IFontWeights
    {
        FontWeights(std::nullptr_t) noexcept {}
        FontWeights(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Text::IFontWeights(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto Black();
        [[nodiscard]] static auto Bold();
        [[nodiscard]] static auto ExtraBlack();
        [[nodiscard]] static auto ExtraBold();
        [[nodiscard]] static auto ExtraLight();
        [[nodiscard]] static auto Light();
        [[nodiscard]] static auto Medium();
        [[nodiscard]] static auto Normal();
        [[nodiscard]] static auto SemiBold();
        [[nodiscard]] static auto SemiLight();
        [[nodiscard]] static auto Thin();
    };
    struct WINRT_IMPL_EMPTY_BASES RichEditTextDocument : winrt::Microsoft::UI::Text::ITextDocument
    {
        RichEditTextDocument(std::nullptr_t) noexcept {}
        RichEditTextDocument(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Text::ITextDocument(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES RichEditTextRange : winrt::Microsoft::UI::Text::ITextRange
    {
        RichEditTextRange(std::nullptr_t) noexcept {}
        RichEditTextRange(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Text::ITextRange(ptr, take_ownership_from_abi) {}
    };
    struct TextConstants
    {
        TextConstants() = delete;
        [[nodiscard]] static auto AutoColor();
        [[nodiscard]] static auto MinUnitCount();
        [[nodiscard]] static auto MaxUnitCount();
        [[nodiscard]] static auto UndefinedColor();
        [[nodiscard]] static auto UndefinedFloatValue();
        [[nodiscard]] static auto UndefinedInt32Value();
        [[nodiscard]] static auto UndefinedFontStretch();
        [[nodiscard]] static auto UndefinedFontStyle();
    };
}
#endif

// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Microsoft_UI_Xaml_Documents_2_H
#define WINRT_Microsoft_UI_Xaml_Documents_2_H
#include "winrt/impl/Microsoft.UI.Composition.1.h"
#include "winrt/impl/Microsoft.UI.Xaml.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Microsoft.UI.Xaml.Documents.1.h"
WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::Documents
{
    struct TextRange
    {
        int32_t StartIndex;
        int32_t Length;
    };
    inline bool operator==(TextRange const& left, TextRange const& right) noexcept
    {
        return left.StartIndex == right.StartIndex && left.Length == right.Length;
    }
    inline bool operator!=(TextRange const& left, TextRange const& right) noexcept
    {
        return !(left == right);
    }
    struct WINRT_IMPL_EMPTY_BASES Block : winrt::Microsoft::UI::Xaml::Documents::IBlock,
        impl::base<Block, winrt::Microsoft::UI::Xaml::Documents::TextElement, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<Block, winrt::Microsoft::UI::Xaml::Documents::ITextElement, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        Block(std::nullptr_t) noexcept {}
        Block(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Documents::IBlock(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto TextAlignmentProperty();
        [[nodiscard]] static auto HorizontalTextAlignmentProperty();
        [[nodiscard]] static auto LineHeightProperty();
        [[nodiscard]] static auto LineStackingStrategyProperty();
        [[nodiscard]] static auto MarginProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES BlockCollection : winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::UI::Xaml::Documents::Block>
    {
        BlockCollection(std::nullptr_t) noexcept {}
        BlockCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::UI::Xaml::Documents::Block>(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES Bold : winrt::Microsoft::UI::Xaml::Documents::IBold,
        impl::base<Bold, winrt::Microsoft::UI::Xaml::Documents::Span, winrt::Microsoft::UI::Xaml::Documents::Inline, winrt::Microsoft::UI::Xaml::Documents::TextElement, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<Bold, winrt::Microsoft::UI::Xaml::Documents::ISpan, winrt::Microsoft::UI::Xaml::Documents::IInline, winrt::Microsoft::UI::Xaml::Documents::ITextElement, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        Bold(std::nullptr_t) noexcept {}
        Bold(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Documents::IBold(ptr, take_ownership_from_abi) {}
        Bold();
    };
    struct WINRT_IMPL_EMPTY_BASES Glyphs : winrt::Microsoft::UI::Xaml::Documents::IGlyphs,
        impl::base<Glyphs, winrt::Microsoft::UI::Xaml::FrameworkElement, winrt::Microsoft::UI::Xaml::UIElement, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<Glyphs, winrt::Microsoft::UI::Xaml::IFrameworkElement, winrt::Microsoft::UI::Xaml::IUIElement, winrt::Microsoft::UI::Composition::IAnimationObject, winrt::Microsoft::UI::Composition::IVisualElement, winrt::Microsoft::UI::Composition::IVisualElement2, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        Glyphs(std::nullptr_t) noexcept {}
        Glyphs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Documents::IGlyphs(ptr, take_ownership_from_abi) {}
        Glyphs();
        [[nodiscard]] static auto UnicodeStringProperty();
        [[nodiscard]] static auto IndicesProperty();
        [[nodiscard]] static auto FontUriProperty();
        [[nodiscard]] static auto StyleSimulationsProperty();
        [[nodiscard]] static auto FontRenderingEmSizeProperty();
        [[nodiscard]] static auto OriginXProperty();
        [[nodiscard]] static auto OriginYProperty();
        [[nodiscard]] static auto FillProperty();
        [[nodiscard]] static auto IsColorFontEnabledProperty();
        [[nodiscard]] static auto ColorFontPaletteIndexProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES Hyperlink : winrt::Microsoft::UI::Xaml::Documents::IHyperlink,
        impl::base<Hyperlink, winrt::Microsoft::UI::Xaml::Documents::Span, winrt::Microsoft::UI::Xaml::Documents::Inline, winrt::Microsoft::UI::Xaml::Documents::TextElement, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<Hyperlink, winrt::Microsoft::UI::Xaml::Documents::ISpan, winrt::Microsoft::UI::Xaml::Documents::IInline, winrt::Microsoft::UI::Xaml::Documents::ITextElement, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        Hyperlink(std::nullptr_t) noexcept {}
        Hyperlink(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Documents::IHyperlink(ptr, take_ownership_from_abi) {}
        Hyperlink();
        [[nodiscard]] static auto NavigateUriProperty();
        [[nodiscard]] static auto UnderlineStyleProperty();
        [[nodiscard]] static auto XYFocusLeftProperty();
        [[nodiscard]] static auto XYFocusRightProperty();
        [[nodiscard]] static auto XYFocusUpProperty();
        [[nodiscard]] static auto XYFocusDownProperty();
        [[nodiscard]] static auto ElementSoundModeProperty();
        [[nodiscard]] static auto FocusStateProperty();
        [[nodiscard]] static auto XYFocusUpNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusDownNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusLeftNavigationStrategyProperty();
        [[nodiscard]] static auto XYFocusRightNavigationStrategyProperty();
        [[nodiscard]] static auto IsTabStopProperty();
        [[nodiscard]] static auto TabIndexProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES HyperlinkClickEventArgs : winrt::Microsoft::UI::Xaml::Documents::IHyperlinkClickEventArgs,
        impl::base<HyperlinkClickEventArgs, winrt::Microsoft::UI::Xaml::RoutedEventArgs>,
        impl::require<HyperlinkClickEventArgs, winrt::Microsoft::UI::Xaml::IRoutedEventArgs>
    {
        HyperlinkClickEventArgs(std::nullptr_t) noexcept {}
        HyperlinkClickEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Documents::IHyperlinkClickEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES Inline : winrt::Microsoft::UI::Xaml::Documents::IInline,
        impl::base<Inline, winrt::Microsoft::UI::Xaml::Documents::TextElement, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<Inline, winrt::Microsoft::UI::Xaml::Documents::ITextElement, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        Inline(std::nullptr_t) noexcept {}
        Inline(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Documents::IInline(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES InlineCollection : winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::UI::Xaml::Documents::Inline>
    {
        InlineCollection(std::nullptr_t) noexcept {}
        InlineCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::UI::Xaml::Documents::Inline>(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES InlineUIContainer : winrt::Microsoft::UI::Xaml::Documents::IInlineUIContainer,
        impl::base<InlineUIContainer, winrt::Microsoft::UI::Xaml::Documents::Inline, winrt::Microsoft::UI::Xaml::Documents::TextElement, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<InlineUIContainer, winrt::Microsoft::UI::Xaml::Documents::IInline, winrt::Microsoft::UI::Xaml::Documents::ITextElement, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        InlineUIContainer(std::nullptr_t) noexcept {}
        InlineUIContainer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Documents::IInlineUIContainer(ptr, take_ownership_from_abi) {}
        InlineUIContainer();
    };
    struct WINRT_IMPL_EMPTY_BASES Italic : winrt::Microsoft::UI::Xaml::Documents::IItalic,
        impl::base<Italic, winrt::Microsoft::UI::Xaml::Documents::Span, winrt::Microsoft::UI::Xaml::Documents::Inline, winrt::Microsoft::UI::Xaml::Documents::TextElement, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<Italic, winrt::Microsoft::UI::Xaml::Documents::ISpan, winrt::Microsoft::UI::Xaml::Documents::IInline, winrt::Microsoft::UI::Xaml::Documents::ITextElement, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        Italic(std::nullptr_t) noexcept {}
        Italic(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Documents::IItalic(ptr, take_ownership_from_abi) {}
        Italic();
    };
    struct WINRT_IMPL_EMPTY_BASES LineBreak : winrt::Microsoft::UI::Xaml::Documents::ILineBreak,
        impl::base<LineBreak, winrt::Microsoft::UI::Xaml::Documents::Inline, winrt::Microsoft::UI::Xaml::Documents::TextElement, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<LineBreak, winrt::Microsoft::UI::Xaml::Documents::IInline, winrt::Microsoft::UI::Xaml::Documents::ITextElement, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        LineBreak(std::nullptr_t) noexcept {}
        LineBreak(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Documents::ILineBreak(ptr, take_ownership_from_abi) {}
        LineBreak();
    };
    struct WINRT_IMPL_EMPTY_BASES Paragraph : winrt::Microsoft::UI::Xaml::Documents::IParagraph,
        impl::base<Paragraph, winrt::Microsoft::UI::Xaml::Documents::Block, winrt::Microsoft::UI::Xaml::Documents::TextElement, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<Paragraph, winrt::Microsoft::UI::Xaml::Documents::IBlock, winrt::Microsoft::UI::Xaml::Documents::ITextElement, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        Paragraph(std::nullptr_t) noexcept {}
        Paragraph(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Documents::IParagraph(ptr, take_ownership_from_abi) {}
        Paragraph();
        [[nodiscard]] static auto TextIndentProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES Run : winrt::Microsoft::UI::Xaml::Documents::IRun,
        impl::base<Run, winrt::Microsoft::UI::Xaml::Documents::Inline, winrt::Microsoft::UI::Xaml::Documents::TextElement, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<Run, winrt::Microsoft::UI::Xaml::Documents::IInline, winrt::Microsoft::UI::Xaml::Documents::ITextElement, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        Run(std::nullptr_t) noexcept {}
        Run(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Documents::IRun(ptr, take_ownership_from_abi) {}
        Run();
        [[nodiscard]] static auto FlowDirectionProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES Span : winrt::Microsoft::UI::Xaml::Documents::ISpan,
        impl::base<Span, winrt::Microsoft::UI::Xaml::Documents::Inline, winrt::Microsoft::UI::Xaml::Documents::TextElement, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<Span, winrt::Microsoft::UI::Xaml::Documents::IInline, winrt::Microsoft::UI::Xaml::Documents::ITextElement, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        Span(std::nullptr_t) noexcept {}
        Span(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Documents::ISpan(ptr, take_ownership_from_abi) {}
        Span();
    };
    struct WINRT_IMPL_EMPTY_BASES TextElement : winrt::Microsoft::UI::Xaml::Documents::ITextElement,
        impl::base<TextElement, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<TextElement, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        TextElement(std::nullptr_t) noexcept {}
        TextElement(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Documents::ITextElement(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto FontSizeProperty();
        [[nodiscard]] static auto FontFamilyProperty();
        [[nodiscard]] static auto FontWeightProperty();
        [[nodiscard]] static auto FontStyleProperty();
        [[nodiscard]] static auto FontStretchProperty();
        [[nodiscard]] static auto CharacterSpacingProperty();
        [[nodiscard]] static auto ForegroundProperty();
        [[nodiscard]] static auto LanguageProperty();
        [[nodiscard]] static auto IsTextScaleFactorEnabledProperty();
        [[nodiscard]] static auto TextDecorationsProperty();
        [[nodiscard]] static auto AllowFocusOnInteractionProperty();
        [[nodiscard]] static auto AccessKeyProperty();
        [[nodiscard]] static auto ExitDisplayModeOnAccessKeyInvokedProperty();
        [[nodiscard]] static auto IsAccessKeyScopeProperty();
        [[nodiscard]] static auto AccessKeyScopeOwnerProperty();
        [[nodiscard]] static auto KeyTipPlacementModeProperty();
        [[nodiscard]] static auto KeyTipHorizontalOffsetProperty();
        [[nodiscard]] static auto KeyTipVerticalOffsetProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES TextHighlighter : winrt::Microsoft::UI::Xaml::Documents::ITextHighlighter
    {
        TextHighlighter(std::nullptr_t) noexcept {}
        TextHighlighter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Documents::ITextHighlighter(ptr, take_ownership_from_abi) {}
        TextHighlighter();
        [[nodiscard]] static auto ForegroundProperty();
        [[nodiscard]] static auto BackgroundProperty();
    };
    struct WINRT_IMPL_EMPTY_BASES TextHighlighterBase : winrt::Microsoft::UI::Xaml::Documents::ITextHighlighterBase,
        impl::base<TextHighlighterBase, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<TextHighlighterBase, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        TextHighlighterBase(std::nullptr_t) noexcept {}
        TextHighlighterBase(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Documents::ITextHighlighterBase(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES TextPointer : winrt::Microsoft::UI::Xaml::Documents::ITextPointer
    {
        TextPointer(std::nullptr_t) noexcept {}
        TextPointer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Documents::ITextPointer(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES Typography : winrt::Microsoft::UI::Xaml::Documents::ITypography
    {
        Typography(std::nullptr_t) noexcept {}
        Typography(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Documents::ITypography(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto AnnotationAlternatesProperty();
        static auto GetAnnotationAlternates(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetAnnotationAlternates(winrt::Microsoft::UI::Xaml::DependencyObject const& element, int32_t value);
        [[nodiscard]] static auto EastAsianExpertFormsProperty();
        static auto GetEastAsianExpertForms(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetEastAsianExpertForms(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto EastAsianLanguageProperty();
        static auto GetEastAsianLanguage(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetEastAsianLanguage(winrt::Microsoft::UI::Xaml::DependencyObject const& element, winrt::Microsoft::UI::Xaml::FontEastAsianLanguage const& value);
        [[nodiscard]] static auto EastAsianWidthsProperty();
        static auto GetEastAsianWidths(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetEastAsianWidths(winrt::Microsoft::UI::Xaml::DependencyObject const& element, winrt::Microsoft::UI::Xaml::FontEastAsianWidths const& value);
        [[nodiscard]] static auto StandardLigaturesProperty();
        static auto GetStandardLigatures(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStandardLigatures(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto ContextualLigaturesProperty();
        static auto GetContextualLigatures(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetContextualLigatures(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto DiscretionaryLigaturesProperty();
        static auto GetDiscretionaryLigatures(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetDiscretionaryLigatures(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto HistoricalLigaturesProperty();
        static auto GetHistoricalLigatures(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetHistoricalLigatures(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StandardSwashesProperty();
        static auto GetStandardSwashes(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStandardSwashes(winrt::Microsoft::UI::Xaml::DependencyObject const& element, int32_t value);
        [[nodiscard]] static auto ContextualSwashesProperty();
        static auto GetContextualSwashes(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetContextualSwashes(winrt::Microsoft::UI::Xaml::DependencyObject const& element, int32_t value);
        [[nodiscard]] static auto ContextualAlternatesProperty();
        static auto GetContextualAlternates(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetContextualAlternates(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticAlternatesProperty();
        static auto GetStylisticAlternates(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticAlternates(winrt::Microsoft::UI::Xaml::DependencyObject const& element, int32_t value);
        [[nodiscard]] static auto StylisticSet1Property();
        static auto GetStylisticSet1(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet1(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet2Property();
        static auto GetStylisticSet2(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet2(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet3Property();
        static auto GetStylisticSet3(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet3(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet4Property();
        static auto GetStylisticSet4(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet4(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet5Property();
        static auto GetStylisticSet5(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet5(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet6Property();
        static auto GetStylisticSet6(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet6(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet7Property();
        static auto GetStylisticSet7(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet7(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet8Property();
        static auto GetStylisticSet8(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet8(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet9Property();
        static auto GetStylisticSet9(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet9(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet10Property();
        static auto GetStylisticSet10(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet10(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet11Property();
        static auto GetStylisticSet11(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet11(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet12Property();
        static auto GetStylisticSet12(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet12(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet13Property();
        static auto GetStylisticSet13(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet13(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet14Property();
        static auto GetStylisticSet14(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet14(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet15Property();
        static auto GetStylisticSet15(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet15(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet16Property();
        static auto GetStylisticSet16(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet16(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet17Property();
        static auto GetStylisticSet17(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet17(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet18Property();
        static auto GetStylisticSet18(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet18(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet19Property();
        static auto GetStylisticSet19(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet19(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto StylisticSet20Property();
        static auto GetStylisticSet20(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetStylisticSet20(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto CapitalsProperty();
        static auto GetCapitals(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetCapitals(winrt::Microsoft::UI::Xaml::DependencyObject const& element, winrt::Microsoft::UI::Xaml::FontCapitals const& value);
        [[nodiscard]] static auto CapitalSpacingProperty();
        static auto GetCapitalSpacing(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetCapitalSpacing(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto KerningProperty();
        static auto GetKerning(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetKerning(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto CaseSensitiveFormsProperty();
        static auto GetCaseSensitiveForms(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetCaseSensitiveForms(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto HistoricalFormsProperty();
        static auto GetHistoricalForms(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetHistoricalForms(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto FractionProperty();
        static auto GetFraction(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetFraction(winrt::Microsoft::UI::Xaml::DependencyObject const& element, winrt::Microsoft::UI::Xaml::FontFraction const& value);
        [[nodiscard]] static auto NumeralStyleProperty();
        static auto GetNumeralStyle(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetNumeralStyle(winrt::Microsoft::UI::Xaml::DependencyObject const& element, winrt::Microsoft::UI::Xaml::FontNumeralStyle const& value);
        [[nodiscard]] static auto NumeralAlignmentProperty();
        static auto GetNumeralAlignment(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetNumeralAlignment(winrt::Microsoft::UI::Xaml::DependencyObject const& element, winrt::Microsoft::UI::Xaml::FontNumeralAlignment const& value);
        [[nodiscard]] static auto SlashedZeroProperty();
        static auto GetSlashedZero(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetSlashedZero(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto MathematicalGreekProperty();
        static auto GetMathematicalGreek(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetMathematicalGreek(winrt::Microsoft::UI::Xaml::DependencyObject const& element, bool value);
        [[nodiscard]] static auto VariantsProperty();
        static auto GetVariants(winrt::Microsoft::UI::Xaml::DependencyObject const& element);
        static auto SetVariants(winrt::Microsoft::UI::Xaml::DependencyObject const& element, winrt::Microsoft::UI::Xaml::FontVariants const& value);
    };
    struct WINRT_IMPL_EMPTY_BASES Underline : winrt::Microsoft::UI::Xaml::Documents::IUnderline,
        impl::base<Underline, winrt::Microsoft::UI::Xaml::Documents::Span, winrt::Microsoft::UI::Xaml::Documents::Inline, winrt::Microsoft::UI::Xaml::Documents::TextElement, winrt::Microsoft::UI::Xaml::DependencyObject>,
        impl::require<Underline, winrt::Microsoft::UI::Xaml::Documents::ISpan, winrt::Microsoft::UI::Xaml::Documents::IInline, winrt::Microsoft::UI::Xaml::Documents::ITextElement, winrt::Microsoft::UI::Xaml::IDependencyObject>
    {
        Underline(std::nullptr_t) noexcept {}
        Underline(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Microsoft::UI::Xaml::Documents::IUnderline(ptr, take_ownership_from_abi) {}
        Underline();
    };
    template <typename D>
    class ITextElementOverridesT
    {
        D& shim() noexcept { return *static_cast<D*>(this); }
        D const& shim() const noexcept { return *static_cast<const D*>(this); }
    public:
        using ITextElementOverrides = winrt::Microsoft::UI::Xaml::Documents::ITextElementOverrides;
        auto OnDisconnectVisualChildren() const;
    };
}
#endif

// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Windows_Devices_Sms_2_H
#define WINRT_Windows_Devices_Sms_2_H
#include "winrt/impl/Windows.Devices.Sms.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Sms
{
    struct SmsEncodedLength
    {
        uint32_t SegmentCount;
        uint32_t CharacterCountLastSegment;
        uint32_t CharactersPerSegment;
        uint32_t ByteCountLastSegment;
        uint32_t BytesPerSegment;
    };
    inline bool operator==(SmsEncodedLength const& left, SmsEncodedLength const& right) noexcept
    {
        return left.SegmentCount == right.SegmentCount && left.CharacterCountLastSegment == right.CharacterCountLastSegment && left.CharactersPerSegment == right.CharactersPerSegment && left.ByteCountLastSegment == right.ByteCountLastSegment && left.BytesPerSegment == right.BytesPerSegment;
    }
    inline bool operator!=(SmsEncodedLength const& left, SmsEncodedLength const& right) noexcept
    {
        return !(left == right);
    }
    struct WINRT_IMPL_EMPTY_BASES SmsAppMessage : winrt::Windows::Devices::Sms::ISmsAppMessage
    {
        SmsAppMessage(std::nullptr_t) noexcept {}
        SmsAppMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sms::ISmsAppMessage(ptr, take_ownership_from_abi) {}
        SmsAppMessage();
    };
    struct WINRT_IMPL_EMPTY_BASES SmsBroadcastMessage : winrt::Windows::Devices::Sms::ISmsBroadcastMessage
    {
        SmsBroadcastMessage(std::nullptr_t) noexcept {}
        SmsBroadcastMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sms::ISmsBroadcastMessage(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SmsDevice2 : winrt::Windows::Devices::Sms::ISmsDevice2
    {
        SmsDevice2(std::nullptr_t) noexcept {}
        SmsDevice2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sms::ISmsDevice2(ptr, take_ownership_from_abi) {}
        static auto GetDeviceSelector();
        static auto FromId(param::hstring const& deviceId);
        static auto GetDefault();
        static auto FromParentId(param::hstring const& parentDeviceId);
    };
    struct WINRT_IMPL_EMPTY_BASES SmsFilterRule : winrt::Windows::Devices::Sms::ISmsFilterRule
    {
        SmsFilterRule(std::nullptr_t) noexcept {}
        SmsFilterRule(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sms::ISmsFilterRule(ptr, take_ownership_from_abi) {}
        explicit SmsFilterRule(winrt::Windows::Devices::Sms::SmsMessageType const& messageType);
    };
    struct WINRT_IMPL_EMPTY_BASES SmsFilterRules : winrt::Windows::Devices::Sms::ISmsFilterRules
    {
        SmsFilterRules(std::nullptr_t) noexcept {}
        SmsFilterRules(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sms::ISmsFilterRules(ptr, take_ownership_from_abi) {}
        explicit SmsFilterRules(winrt::Windows::Devices::Sms::SmsFilterActionType const& actionType);
    };
    struct WINRT_IMPL_EMPTY_BASES SmsMessageReceivedTriggerDetails : winrt::Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails
    {
        SmsMessageReceivedTriggerDetails(std::nullptr_t) noexcept {}
        SmsMessageReceivedTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sms::ISmsMessageReceivedTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SmsMessageRegistration : winrt::Windows::Devices::Sms::ISmsMessageRegistration
    {
        SmsMessageRegistration(std::nullptr_t) noexcept {}
        SmsMessageRegistration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sms::ISmsMessageRegistration(ptr, take_ownership_from_abi) {}
        [[nodiscard]] static auto AllRegistrations();
        static auto Register(param::hstring const& id, winrt::Windows::Devices::Sms::SmsFilterRules const& filterRules);
    };
    struct WINRT_IMPL_EMPTY_BASES SmsSendMessageResult : winrt::Windows::Devices::Sms::ISmsSendMessageResult
    {
        SmsSendMessageResult(std::nullptr_t) noexcept {}
        SmsSendMessageResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sms::ISmsSendMessageResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SmsStatusMessage : winrt::Windows::Devices::Sms::ISmsStatusMessage
    {
        SmsStatusMessage(std::nullptr_t) noexcept {}
        SmsStatusMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sms::ISmsStatusMessage(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SmsTextMessage2 : winrt::Windows::Devices::Sms::ISmsTextMessage2
    {
        SmsTextMessage2(std::nullptr_t) noexcept {}
        SmsTextMessage2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sms::ISmsTextMessage2(ptr, take_ownership_from_abi) {}
        SmsTextMessage2();
    };
    struct WINRT_IMPL_EMPTY_BASES SmsVoicemailMessage : winrt::Windows::Devices::Sms::ISmsVoicemailMessage
    {
        SmsVoicemailMessage(std::nullptr_t) noexcept {}
        SmsVoicemailMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sms::ISmsVoicemailMessage(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SmsWapMessage : winrt::Windows::Devices::Sms::ISmsWapMessage
    {
        SmsWapMessage(std::nullptr_t) noexcept {}
        SmsWapMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Sms::ISmsWapMessage(ptr, take_ownership_from_abi) {}
    };
}
#endif

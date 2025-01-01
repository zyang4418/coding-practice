// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Chat_2_H
#define WINRT_Windows_ApplicationModel_Chat_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.ApplicationModel.Chat.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Chat
{
    struct WINRT_IMPL_EMPTY_BASES ChatCapabilities : winrt::Windows::ApplicationModel::Chat::IChatCapabilities
    {
        ChatCapabilities(std::nullptr_t) noexcept {}
        ChatCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatCapabilities(ptr, take_ownership_from_abi) {}
    };
    struct ChatCapabilitiesManager
    {
        ChatCapabilitiesManager() = delete;
        static auto GetCachedCapabilitiesAsync(param::hstring const& address);
        static auto GetCapabilitiesFromNetworkAsync(param::hstring const& address);
        static auto GetCachedCapabilitiesAsync(param::hstring const& address, param::hstring const& transportId);
        static auto GetCapabilitiesFromNetworkAsync(param::hstring const& address, param::hstring const& transportId);
    };
    struct WINRT_IMPL_EMPTY_BASES ChatConversation : winrt::Windows::ApplicationModel::Chat::IChatConversation,
        impl::require<ChatConversation, winrt::Windows::ApplicationModel::Chat::IChatConversation2, winrt::Windows::ApplicationModel::Chat::IChatItem>
    {
        ChatConversation(std::nullptr_t) noexcept {}
        ChatConversation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatConversation(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ChatConversationReader : winrt::Windows::ApplicationModel::Chat::IChatConversationReader
    {
        ChatConversationReader(std::nullptr_t) noexcept {}
        ChatConversationReader(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatConversationReader(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ChatConversationThreadingInfo : winrt::Windows::ApplicationModel::Chat::IChatConversationThreadingInfo
    {
        ChatConversationThreadingInfo(std::nullptr_t) noexcept {}
        ChatConversationThreadingInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatConversationThreadingInfo(ptr, take_ownership_from_abi) {}
        ChatConversationThreadingInfo();
    };
    struct WINRT_IMPL_EMPTY_BASES ChatMessage : winrt::Windows::ApplicationModel::Chat::IChatMessage,
        impl::require<ChatMessage, winrt::Windows::ApplicationModel::Chat::IChatMessage3, winrt::Windows::ApplicationModel::Chat::IChatMessage2, winrt::Windows::ApplicationModel::Chat::IChatMessage4, winrt::Windows::ApplicationModel::Chat::IChatItem>
    {
        ChatMessage(std::nullptr_t) noexcept {}
        ChatMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatMessage(ptr, take_ownership_from_abi) {}
        ChatMessage();
        using winrt::Windows::ApplicationModel::Chat::IChatMessage::From;
        using impl::consume_t<ChatMessage, winrt::Windows::ApplicationModel::Chat::IChatMessage2>::From;
        using winrt::Windows::ApplicationModel::Chat::IChatMessage::IsForwardingDisabled;
        using impl::consume_t<ChatMessage, winrt::Windows::ApplicationModel::Chat::IChatMessage2>::IsForwardingDisabled;
        using winrt::Windows::ApplicationModel::Chat::IChatMessage::IsIncoming;
        using impl::consume_t<ChatMessage, winrt::Windows::ApplicationModel::Chat::IChatMessage2>::IsIncoming;
        using winrt::Windows::ApplicationModel::Chat::IChatMessage::IsRead;
        using impl::consume_t<ChatMessage, winrt::Windows::ApplicationModel::Chat::IChatMessage2>::IsRead;
        using winrt::Windows::ApplicationModel::Chat::IChatMessage::LocalTimestamp;
        using impl::consume_t<ChatMessage, winrt::Windows::ApplicationModel::Chat::IChatMessage2>::LocalTimestamp;
        using winrt::Windows::ApplicationModel::Chat::IChatMessage::NetworkTimestamp;
        using impl::consume_t<ChatMessage, winrt::Windows::ApplicationModel::Chat::IChatMessage2>::NetworkTimestamp;
        using impl::consume_t<ChatMessage, winrt::Windows::ApplicationModel::Chat::IChatMessage2>::RemoteId;
        using impl::consume_t<ChatMessage, winrt::Windows::ApplicationModel::Chat::IChatMessage3>::RemoteId;
        using winrt::Windows::ApplicationModel::Chat::IChatMessage::Status;
        using impl::consume_t<ChatMessage, winrt::Windows::ApplicationModel::Chat::IChatMessage2>::Status;
        using winrt::Windows::ApplicationModel::Chat::IChatMessage::Subject;
        using impl::consume_t<ChatMessage, winrt::Windows::ApplicationModel::Chat::IChatMessage2>::Subject;
    };
    struct WINRT_IMPL_EMPTY_BASES ChatMessageAttachment : winrt::Windows::ApplicationModel::Chat::IChatMessageAttachment,
        impl::require<ChatMessageAttachment, winrt::Windows::ApplicationModel::Chat::IChatMessageAttachment2>
    {
        ChatMessageAttachment(std::nullptr_t) noexcept {}
        ChatMessageAttachment(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatMessageAttachment(ptr, take_ownership_from_abi) {}
        ChatMessageAttachment(param::hstring const& mimeType, winrt::Windows::Storage::Streams::IRandomAccessStreamReference const& dataStreamReference);
    };
    struct ChatMessageBlocking
    {
        ChatMessageBlocking() = delete;
        static auto MarkMessageAsBlockedAsync(param::hstring const& localChatMessageId, bool blocked);
    };
    struct WINRT_IMPL_EMPTY_BASES ChatMessageChange : winrt::Windows::ApplicationModel::Chat::IChatMessageChange
    {
        ChatMessageChange(std::nullptr_t) noexcept {}
        ChatMessageChange(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatMessageChange(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ChatMessageChangeReader : winrt::Windows::ApplicationModel::Chat::IChatMessageChangeReader
    {
        ChatMessageChangeReader(std::nullptr_t) noexcept {}
        ChatMessageChangeReader(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatMessageChangeReader(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ChatMessageChangeTracker : winrt::Windows::ApplicationModel::Chat::IChatMessageChangeTracker
    {
        ChatMessageChangeTracker(std::nullptr_t) noexcept {}
        ChatMessageChangeTracker(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatMessageChangeTracker(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ChatMessageChangedDeferral : winrt::Windows::ApplicationModel::Chat::IChatMessageChangedDeferral
    {
        ChatMessageChangedDeferral(std::nullptr_t) noexcept {}
        ChatMessageChangedDeferral(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatMessageChangedDeferral(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ChatMessageChangedEventArgs : winrt::Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs
    {
        ChatMessageChangedEventArgs(std::nullptr_t) noexcept {}
        ChatMessageChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatMessageChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct ChatMessageManager
    {
        ChatMessageManager() = delete;
        static auto RegisterTransportAsync();
        static auto GetTransportAsync(param::hstring const& transportId);
        static auto GetTransportsAsync();
        static auto RequestStoreAsync();
        static auto ShowComposeSmsMessageAsync(winrt::Windows::ApplicationModel::Chat::ChatMessage const& message);
        static auto ShowSmsSettings();
        static auto RequestSyncManagerAsync();
    };
    struct WINRT_IMPL_EMPTY_BASES ChatMessageNotificationTriggerDetails : winrt::Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails,
        impl::require<ChatMessageNotificationTriggerDetails, winrt::Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails2>
    {
        ChatMessageNotificationTriggerDetails(std::nullptr_t) noexcept {}
        ChatMessageNotificationTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatMessageNotificationTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ChatMessageReader : winrt::Windows::ApplicationModel::Chat::IChatMessageReader,
        impl::require<ChatMessageReader, winrt::Windows::ApplicationModel::Chat::IChatMessageReader2>
    {
        ChatMessageReader(std::nullptr_t) noexcept {}
        ChatMessageReader(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatMessageReader(ptr, take_ownership_from_abi) {}
        using winrt::Windows::ApplicationModel::Chat::IChatMessageReader::ReadBatchAsync;
        using impl::consume_t<ChatMessageReader, winrt::Windows::ApplicationModel::Chat::IChatMessageReader2>::ReadBatchAsync;
    };
    struct WINRT_IMPL_EMPTY_BASES ChatMessageStore : winrt::Windows::ApplicationModel::Chat::IChatMessageStore,
        impl::require<ChatMessageStore, winrt::Windows::ApplicationModel::Chat::IChatMessageStore2, winrt::Windows::ApplicationModel::Chat::IChatMessageStore3>
    {
        ChatMessageStore(std::nullptr_t) noexcept {}
        ChatMessageStore(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatMessageStore(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ChatMessageStoreChangedEventArgs : winrt::Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs
    {
        ChatMessageStoreChangedEventArgs(std::nullptr_t) noexcept {}
        ChatMessageStoreChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatMessageStoreChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ChatMessageTransport : winrt::Windows::ApplicationModel::Chat::IChatMessageTransport,
        impl::require<ChatMessageTransport, winrt::Windows::ApplicationModel::Chat::IChatMessageTransport2>
    {
        ChatMessageTransport(std::nullptr_t) noexcept {}
        ChatMessageTransport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatMessageTransport(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ChatMessageTransportConfiguration : winrt::Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration
    {
        ChatMessageTransportConfiguration(std::nullptr_t) noexcept {}
        ChatMessageTransportConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatMessageTransportConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ChatMessageValidationResult : winrt::Windows::ApplicationModel::Chat::IChatMessageValidationResult
    {
        ChatMessageValidationResult(std::nullptr_t) noexcept {}
        ChatMessageValidationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatMessageValidationResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ChatQueryOptions : winrt::Windows::ApplicationModel::Chat::IChatQueryOptions
    {
        ChatQueryOptions(std::nullptr_t) noexcept {}
        ChatQueryOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatQueryOptions(ptr, take_ownership_from_abi) {}
        ChatQueryOptions();
    };
    struct WINRT_IMPL_EMPTY_BASES ChatRecipientDeliveryInfo : winrt::Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo
    {
        ChatRecipientDeliveryInfo(std::nullptr_t) noexcept {}
        ChatRecipientDeliveryInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatRecipientDeliveryInfo(ptr, take_ownership_from_abi) {}
        ChatRecipientDeliveryInfo();
    };
    struct WINRT_IMPL_EMPTY_BASES ChatSearchReader : winrt::Windows::ApplicationModel::Chat::IChatSearchReader
    {
        ChatSearchReader(std::nullptr_t) noexcept {}
        ChatSearchReader(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatSearchReader(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ChatSyncConfiguration : winrt::Windows::ApplicationModel::Chat::IChatSyncConfiguration
    {
        ChatSyncConfiguration(std::nullptr_t) noexcept {}
        ChatSyncConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatSyncConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ChatSyncManager : winrt::Windows::ApplicationModel::Chat::IChatSyncManager
    {
        ChatSyncManager(std::nullptr_t) noexcept {}
        ChatSyncManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IChatSyncManager(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES RcsEndUserMessage : winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessage
    {
        RcsEndUserMessage(std::nullptr_t) noexcept {}
        RcsEndUserMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessage(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES RcsEndUserMessageAction : winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessageAction
    {
        RcsEndUserMessageAction(std::nullptr_t) noexcept {}
        RcsEndUserMessageAction(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessageAction(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES RcsEndUserMessageAvailableEventArgs : winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs
    {
        RcsEndUserMessageAvailableEventArgs(std::nullptr_t) noexcept {}
        RcsEndUserMessageAvailableEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES RcsEndUserMessageAvailableTriggerDetails : winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails
    {
        RcsEndUserMessageAvailableTriggerDetails(std::nullptr_t) noexcept {}
        RcsEndUserMessageAvailableTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessageAvailableTriggerDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES RcsEndUserMessageManager : winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessageManager
    {
        RcsEndUserMessageManager(std::nullptr_t) noexcept {}
        RcsEndUserMessageManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IRcsEndUserMessageManager(ptr, take_ownership_from_abi) {}
    };
    struct RcsManager
    {
        RcsManager() = delete;
        static auto GetEndUserMessageManager();
        static auto GetTransportsAsync();
        static auto GetTransportAsync(param::hstring const& transportId);
        static auto LeaveConversationAsync(winrt::Windows::ApplicationModel::Chat::ChatConversation const& conversation);
        static auto TransportListChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using TransportListChanged_revoker = impl::factory_event_revoker<winrt::Windows::ApplicationModel::Chat::IRcsManagerStatics2, &impl::abi_t<winrt::Windows::ApplicationModel::Chat::IRcsManagerStatics2>::remove_TransportListChanged>;
        [[nodiscard]] static auto TransportListChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto TransportListChanged(winrt::event_token const& token);
    };
    struct WINRT_IMPL_EMPTY_BASES RcsServiceKindSupportedChangedEventArgs : winrt::Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs
    {
        RcsServiceKindSupportedChangedEventArgs(std::nullptr_t) noexcept {}
        RcsServiceKindSupportedChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IRcsServiceKindSupportedChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES RcsTransport : winrt::Windows::ApplicationModel::Chat::IRcsTransport
    {
        RcsTransport(std::nullptr_t) noexcept {}
        RcsTransport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IRcsTransport(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES RcsTransportConfiguration : winrt::Windows::ApplicationModel::Chat::IRcsTransportConfiguration
    {
        RcsTransportConfiguration(std::nullptr_t) noexcept {}
        RcsTransportConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IRcsTransportConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES RemoteParticipantComposingChangedEventArgs : winrt::Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs
    {
        RemoteParticipantComposingChangedEventArgs(std::nullptr_t) noexcept {}
        RemoteParticipantComposingChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Chat::IRemoteParticipantComposingChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif

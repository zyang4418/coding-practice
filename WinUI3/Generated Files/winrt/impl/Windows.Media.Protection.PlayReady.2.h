// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.240405.15

#pragma once
#ifndef WINRT_Windows_Media_Protection_PlayReady_2_H
#define WINRT_Windows_Media_Protection_PlayReady_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Media.Protection.1.h"
#include "winrt/impl/Windows.Media.Protection.PlayReady.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Protection::PlayReady
{
    struct WINRT_IMPL_EMPTY_BASES NDClient : winrt::Windows::Media::Protection::PlayReady::INDClient
    {
        NDClient(std::nullptr_t) noexcept {}
        NDClient(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::INDClient(ptr, take_ownership_from_abi) {}
        NDClient(winrt::Windows::Media::Protection::PlayReady::INDDownloadEngine const& downloadEngine, winrt::Windows::Media::Protection::PlayReady::INDStreamParser const& streamParser, winrt::Windows::Media::Protection::PlayReady::INDMessenger const& pMessenger);
    };
    struct WINRT_IMPL_EMPTY_BASES NDCustomData : winrt::Windows::Media::Protection::PlayReady::INDCustomData
    {
        NDCustomData(std::nullptr_t) noexcept {}
        NDCustomData(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::INDCustomData(ptr, take_ownership_from_abi) {}
        NDCustomData(array_view<uint8_t const> customDataTypeIDBytes, array_view<uint8_t const> customDataBytes);
    };
    struct WINRT_IMPL_EMPTY_BASES NDDownloadEngineNotifier : winrt::Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier
    {
        NDDownloadEngineNotifier(std::nullptr_t) noexcept {}
        NDDownloadEngineNotifier(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::INDDownloadEngineNotifier(ptr, take_ownership_from_abi) {}
        NDDownloadEngineNotifier();
    };
    struct WINRT_IMPL_EMPTY_BASES NDLicenseFetchDescriptor : winrt::Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor
    {
        NDLicenseFetchDescriptor(std::nullptr_t) noexcept {}
        NDLicenseFetchDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::INDLicenseFetchDescriptor(ptr, take_ownership_from_abi) {}
        NDLicenseFetchDescriptor(winrt::Windows::Media::Protection::PlayReady::NDContentIDType const& contentIDType, array_view<uint8_t const> contentIDBytes, winrt::Windows::Media::Protection::PlayReady::INDCustomData const& licenseFetchChallengeCustomData);
    };
    struct WINRT_IMPL_EMPTY_BASES NDStorageFileHelper : winrt::Windows::Media::Protection::PlayReady::INDStorageFileHelper
    {
        NDStorageFileHelper(std::nullptr_t) noexcept {}
        NDStorageFileHelper(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::INDStorageFileHelper(ptr, take_ownership_from_abi) {}
        NDStorageFileHelper();
    };
    struct WINRT_IMPL_EMPTY_BASES NDStreamParserNotifier : winrt::Windows::Media::Protection::PlayReady::INDStreamParserNotifier
    {
        NDStreamParserNotifier(std::nullptr_t) noexcept {}
        NDStreamParserNotifier(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::INDStreamParserNotifier(ptr, take_ownership_from_abi) {}
        NDStreamParserNotifier();
    };
    struct WINRT_IMPL_EMPTY_BASES NDTCPMessenger : winrt::Windows::Media::Protection::PlayReady::INDMessenger
    {
        NDTCPMessenger(std::nullptr_t) noexcept {}
        NDTCPMessenger(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::INDMessenger(ptr, take_ownership_from_abi) {}
        NDTCPMessenger(param::hstring const& remoteHostName, uint32_t remoteHostPort);
    };
    struct WINRT_IMPL_EMPTY_BASES PlayReadyContentHeader : winrt::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader,
        impl::require<PlayReadyContentHeader, winrt::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader2>
    {
        PlayReadyContentHeader(std::nullptr_t) noexcept {}
        PlayReadyContentHeader(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::IPlayReadyContentHeader(ptr, take_ownership_from_abi) {}
        PlayReadyContentHeader(array_view<uint8_t const> headerBytes, winrt::Windows::Foundation::Uri const& licenseAcquisitionUrl, winrt::Windows::Foundation::Uri const& licenseAcquisitionUserInterfaceUrl, param::hstring const& customAttributes, winrt::guid const& domainServiceId);
        PlayReadyContentHeader(winrt::guid const& contentKeyId, param::hstring const& contentKeyIdString, winrt::Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm const& contentEncryptionAlgorithm, winrt::Windows::Foundation::Uri const& licenseAcquisitionUrl, winrt::Windows::Foundation::Uri const& licenseAcquisitionUserInterfaceUrl, param::hstring const& customAttributes, winrt::guid const& domainServiceId);
        explicit PlayReadyContentHeader(array_view<uint8_t const> headerBytes);
        PlayReadyContentHeader(uint32_t dwFlags, array_view<winrt::guid const> contentKeyIds, array_view<hstring const> contentKeyIdStrings, winrt::Windows::Media::Protection::PlayReady::PlayReadyEncryptionAlgorithm const& contentEncryptionAlgorithm, winrt::Windows::Foundation::Uri const& licenseAcquisitionUrl, winrt::Windows::Foundation::Uri const& licenseAcquisitionUserInterfaceUrl, param::hstring const& customAttributes, winrt::guid const& domainServiceId);
    };
    struct PlayReadyContentResolver
    {
        PlayReadyContentResolver() = delete;
        static auto ServiceRequest(winrt::Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader);
    };
    struct WINRT_IMPL_EMPTY_BASES PlayReadyDomain : winrt::Windows::Media::Protection::PlayReady::IPlayReadyDomain
    {
        PlayReadyDomain(std::nullptr_t) noexcept {}
        PlayReadyDomain(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::IPlayReadyDomain(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES PlayReadyDomainIterable : winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Media::Protection::PlayReady::IPlayReadyDomain>
    {
        PlayReadyDomainIterable(std::nullptr_t) noexcept {}
        PlayReadyDomainIterable(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Media::Protection::PlayReady::IPlayReadyDomain>(ptr, take_ownership_from_abi) {}
        explicit PlayReadyDomainIterable(winrt::guid const& domainAccountId);
    };
    struct WINRT_IMPL_EMPTY_BASES PlayReadyDomainIterator : winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Media::Protection::PlayReady::IPlayReadyDomain>
    {
        PlayReadyDomainIterator(std::nullptr_t) noexcept {}
        PlayReadyDomainIterator(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Media::Protection::PlayReady::IPlayReadyDomain>(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES PlayReadyDomainJoinServiceRequest : winrt::Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest
    {
        PlayReadyDomainJoinServiceRequest(std::nullptr_t) noexcept {}
        PlayReadyDomainJoinServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::IPlayReadyDomainJoinServiceRequest(ptr, take_ownership_from_abi) {}
        PlayReadyDomainJoinServiceRequest();
    };
    struct WINRT_IMPL_EMPTY_BASES PlayReadyDomainLeaveServiceRequest : winrt::Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest
    {
        PlayReadyDomainLeaveServiceRequest(std::nullptr_t) noexcept {}
        PlayReadyDomainLeaveServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::IPlayReadyDomainLeaveServiceRequest(ptr, take_ownership_from_abi) {}
        PlayReadyDomainLeaveServiceRequest();
    };
    struct WINRT_IMPL_EMPTY_BASES PlayReadyITADataGenerator : winrt::Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator
    {
        PlayReadyITADataGenerator(std::nullptr_t) noexcept {}
        PlayReadyITADataGenerator(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::IPlayReadyITADataGenerator(ptr, take_ownership_from_abi) {}
        PlayReadyITADataGenerator();
    };
    struct WINRT_IMPL_EMPTY_BASES PlayReadyIndividualizationServiceRequest : winrt::Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest
    {
        PlayReadyIndividualizationServiceRequest(std::nullptr_t) noexcept {}
        PlayReadyIndividualizationServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::IPlayReadyIndividualizationServiceRequest(ptr, take_ownership_from_abi) {}
        PlayReadyIndividualizationServiceRequest();
    };
    struct WINRT_IMPL_EMPTY_BASES PlayReadyLicense : winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicense,
        impl::require<PlayReadyLicense, winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicense2>
    {
        PlayReadyLicense(std::nullptr_t) noexcept {}
        PlayReadyLicense(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicense(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES PlayReadyLicenseAcquisitionServiceRequest : winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest,
        impl::require<PlayReadyLicenseAcquisitionServiceRequest, winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest2, winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest3>
    {
        PlayReadyLicenseAcquisitionServiceRequest(std::nullptr_t) noexcept {}
        PlayReadyLicenseAcquisitionServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseAcquisitionServiceRequest(ptr, take_ownership_from_abi) {}
        PlayReadyLicenseAcquisitionServiceRequest();
    };
    struct WINRT_IMPL_EMPTY_BASES PlayReadyLicenseIterable : winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicense>
    {
        PlayReadyLicenseIterable(std::nullptr_t) noexcept {}
        PlayReadyLicenseIterable(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicense>(ptr, take_ownership_from_abi) {}
        PlayReadyLicenseIterable();
        PlayReadyLicenseIterable(winrt::Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader, bool fullyEvaluated);
    };
    struct WINRT_IMPL_EMPTY_BASES PlayReadyLicenseIterator : winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicense>
    {
        PlayReadyLicenseIterator(std::nullptr_t) noexcept {}
        PlayReadyLicenseIterator(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicense>(ptr, take_ownership_from_abi) {}
    };
    struct PlayReadyLicenseManagement
    {
        PlayReadyLicenseManagement() = delete;
        static auto DeleteLicenses(winrt::Windows::Media::Protection::PlayReady::PlayReadyContentHeader const& contentHeader);
    };
    struct WINRT_IMPL_EMPTY_BASES PlayReadyLicenseSession : winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession,
        impl::require<PlayReadyLicenseSession, winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession2>
    {
        PlayReadyLicenseSession(std::nullptr_t) noexcept {}
        PlayReadyLicenseSession(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::IPlayReadyLicenseSession(ptr, take_ownership_from_abi) {}
        explicit PlayReadyLicenseSession(winrt::Windows::Foundation::Collections::IPropertySet const& configuration);
    };
    struct WINRT_IMPL_EMPTY_BASES PlayReadyMeteringReportServiceRequest : winrt::Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest
    {
        PlayReadyMeteringReportServiceRequest(std::nullptr_t) noexcept {}
        PlayReadyMeteringReportServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::IPlayReadyMeteringReportServiceRequest(ptr, take_ownership_from_abi) {}
        PlayReadyMeteringReportServiceRequest();
    };
    struct WINRT_IMPL_EMPTY_BASES PlayReadyRevocationServiceRequest : winrt::Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest
    {
        PlayReadyRevocationServiceRequest(std::nullptr_t) noexcept {}
        PlayReadyRevocationServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::IPlayReadyRevocationServiceRequest(ptr, take_ownership_from_abi) {}
        PlayReadyRevocationServiceRequest();
    };
    struct WINRT_IMPL_EMPTY_BASES PlayReadySecureStopIterable : winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>
    {
        PlayReadySecureStopIterable(std::nullptr_t) noexcept {}
        PlayReadySecureStopIterable(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>(ptr, take_ownership_from_abi) {}
        explicit PlayReadySecureStopIterable(array_view<uint8_t const> publisherCertBytes);
    };
    struct WINRT_IMPL_EMPTY_BASES PlayReadySecureStopIterator : winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>
    {
        PlayReadySecureStopIterator(std::nullptr_t) noexcept {}
        PlayReadySecureStopIterator(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest>(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES PlayReadySecureStopServiceRequest : winrt::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest
    {
        PlayReadySecureStopServiceRequest(std::nullptr_t) noexcept {}
        PlayReadySecureStopServiceRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::IPlayReadySecureStopServiceRequest(ptr, take_ownership_from_abi) {}
        explicit PlayReadySecureStopServiceRequest(array_view<uint8_t const> publisherCertBytes);
        PlayReadySecureStopServiceRequest(winrt::guid const& sessionID, array_view<uint8_t const> publisherCertBytes);
    };
    struct WINRT_IMPL_EMPTY_BASES PlayReadySoapMessage : winrt::Windows::Media::Protection::PlayReady::IPlayReadySoapMessage
    {
        PlayReadySoapMessage(std::nullptr_t) noexcept {}
        PlayReadySoapMessage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Protection::PlayReady::IPlayReadySoapMessage(ptr, take_ownership_from_abi) {}
    };
    struct PlayReadyStatics
    {
        PlayReadyStatics() = delete;
        [[nodiscard]] static auto DomainJoinServiceRequestType();
        [[nodiscard]] static auto DomainLeaveServiceRequestType();
        [[nodiscard]] static auto IndividualizationServiceRequestType();
        [[nodiscard]] static auto LicenseAcquirerServiceRequestType();
        [[nodiscard]] static auto MeteringReportServiceRequestType();
        [[nodiscard]] static auto RevocationServiceRequestType();
        [[nodiscard]] static auto MediaProtectionSystemId();
        [[nodiscard]] static auto PlayReadySecurityVersion();
        [[nodiscard]] static auto PlayReadyCertificateSecurityLevel();
        [[nodiscard]] static auto SecureStopServiceRequestType();
        static auto CheckSupportedHardware(winrt::Windows::Media::Protection::PlayReady::PlayReadyHardwareDRMFeatures const& hwdrmFeature);
        [[nodiscard]] static auto InputTrustAuthorityToCreate();
        [[nodiscard]] static auto ProtectionSystemId();
        [[nodiscard]] static auto HardwareDRMDisabledAtTime();
        [[nodiscard]] static auto HardwareDRMDisabledUntilTime();
        static auto ResetHardwareDRMDisabled();
    };
}
#endif

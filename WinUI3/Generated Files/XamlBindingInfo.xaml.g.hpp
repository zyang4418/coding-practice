﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "pch.h"
#include "XamlBindingInfo.xaml.g.h"

namespace winrt::WinUI3::implementation
{

using DataContextChangedEventArgs = ::winrt::Microsoft::UI::Xaml::DataContextChangedEventArgs;
using DependencyObject = ::winrt::Microsoft::UI::Xaml::DependencyObject;
using DependencyProperty = ::winrt::Microsoft::UI::Xaml::DependencyProperty;
using FrameworkElement = ::winrt::Microsoft::UI::Xaml::FrameworkElement;
using INotifyCollectionChanged = ::winrt::Microsoft::UI::Xaml::Interop::INotifyCollectionChanged;
using INotifyPropertyChanged = ::winrt::Microsoft::UI::Xaml::Data::INotifyPropertyChanged;
using PropertyChangedEventArgs = ::winrt::Microsoft::UI::Xaml::Data::PropertyChangedEventArgs;
using NotifyCollectionChangedEventArgs = ::winrt::Microsoft::UI::Xaml::Interop::NotifyCollectionChangedEventArgs;
using ContainerContentChangingEventArgs = ::winrt::Microsoft::UI::Xaml::Controls::ContainerContentChangingEventArgs;
using IComponentConnector = ::winrt::Microsoft::UI::Xaml::Markup::IComponentConnector;
using WindowActivatedEventArgs = ::winrt::Microsoft::UI::Xaml::WindowActivatedEventArgs;

// XamlBindings

XamlBindings::XamlBindings(std::shared_ptr<IXamlBindings>&& pBindings)
    : _pBindings(std::move(pBindings))
{
}

void XamlBindings::Initialize()
{
    if (!_pBindings->IsInitialized())
    { 
        _pBindings->Update();
    }
}

void XamlBindings::Update()
{
    _pBindings->Update();
}

void XamlBindings::StopTracking()
{
    _pBindings->StopTracking();
}

void XamlBindings::Loading(FrameworkElement const&, IInspectable const&)
{
    Initialize();
}

void XamlBindings::Activated(IInspectable const&, WindowActivatedEventArgs const&)
{
    Initialize();
}

void XamlBindings::DataContextChanged(
    FrameworkElement const&,
    DataContextChangedEventArgs const& args)
{
    if (_pBindings->SetDataRoot(args.NewValue()))
    {
        Update();
    }
}

void XamlBindings::SubscribeForDataContextChanged(FrameworkElement const& object)
{
    _pBindings->SubscribeForDataContextChanged(object, *this);
}

void XamlBindings::DisconnectUnloadedObject(int connectionId)
{
    _pBindings->DisconnectUnloadedObject(connectionId);
}

void XamlBindings::Connect(int connectionId, IInspectable const& target)
{
    _pBindings->Connect(connectionId, target);
}

IComponentConnector XamlBindings::GetBindingConnector(int32_t, IInspectable const&)
{
    return nullptr;
}

bool XamlBindings::ProcessBinding(unsigned int)
{
    throw ::winrt::hresult_not_implemented {};
}

int XamlBindings::ProcessBindings(ContainerContentChangingEventArgs const& args)
{
    int32_t nextPhase;
    _pBindings->ProcessBindings(args.Item(), args.ItemIndex(), args.Phase(), nextPhase);
    return nextPhase;
}

void XamlBindings::ResetTemplate()
{
    _pBindings->Recycle();
}

void XamlBindings::ProcessBindings(
    IInspectable const& item, int itemIndex, int phase, int32_t& nextPhase)
{
    _pBindings->ProcessBindings(item, itemIndex, phase, nextPhase);
}

void XamlBindings::Recycle()
{
    _pBindings->Recycle();
}

// XamlBindingTrackingBase

XamlBindingTrackingBase::XamlBindingTrackingBase()
{
}

void XamlBindingTrackingBase::SetListener(IXamlBindingTracking* pBindings)
{
    _pBindingsTrackingWeakRef = pBindings;
}

void XamlBindingTrackingBase::PropertyChanged(
    IInspectable const& sender,
    PropertyChangedEventArgs const&  e)
{
    if (_pBindingsTrackingWeakRef)
    {
        _pBindingsTrackingWeakRef->PropertyChanged(sender, e);
    }
}

void XamlBindingTrackingBase::CollectionChanged(
    IInspectable const& sender,
    NotifyCollectionChangedEventArgs const& e)
{
    if (_pBindingsTrackingWeakRef)
    {
        _pBindingsTrackingWeakRef->CollectionChanged(sender, e);
    }
}

void XamlBindingTrackingBase::DependencyPropertyChanged(
    DependencyObject const& sender,
    DependencyProperty const& prop)
{
    if (_pBindingsTrackingWeakRef)
    {
        _pBindingsTrackingWeakRef->DependencyPropertyChanged(sender, prop);
    }
}

void XamlBindingTrackingBase::VectorChanged(
    IInspectable const& sender,
    ::winrt::Windows::Foundation::Collections::IVectorChangedEventArgs const& e)
{
    if (_pBindingsTrackingWeakRef)
    {
        _pBindingsTrackingWeakRef->VectorChanged(sender, e);
    }
}

void XamlBindingTrackingBase::MapChanged(
    IInspectable const& sender,
    ::winrt::Windows::Foundation::Collections::IMapChangedEventArgs<::winrt::hstring> const& e)
{
    if (_pBindingsTrackingWeakRef)
    {
        _pBindingsTrackingWeakRef->MapChanged(sender, e);
    }
}

void XamlBindingTrackingBase::UpdatePropertyChangedListener(
    INotifyPropertyChanged const& obj,
    INotifyPropertyChanged& cache,
    ::winrt::event_token& token)
{
    if (cache && cache != obj)
    {
        cache.PropertyChanged(token);
        cache = nullptr;
    }

    if (!cache && obj)
    {
        cache = obj;
        token = obj.PropertyChanged({ this, &XamlBindingTrackingBase::PropertyChanged });
    }
}

void XamlBindingTrackingBase::UpdatePropertyChangedListener(
    INotifyPropertyChanged const& obj,
    ::winrt::weak_ref<::winrt::Microsoft::UI::Xaml::Data::INotifyPropertyChanged>& cacheRef,
    ::winrt::event_token& token)
{
    INotifyPropertyChanged cache = cacheRef.get();
    if (cache && cache != obj)
    {
        cache.PropertyChanged(token);
        cache = nullptr;
        cacheRef = nullptr;
    }

    if (!cache && obj)
    {
        cacheRef = cache = obj;
        token = obj.PropertyChanged({ this, &XamlBindingTrackingBase::PropertyChanged });
    }
}

void XamlBindingTrackingBase::UpdateCollectionChangedListener(
    INotifyCollectionChanged const& obj,
    INotifyCollectionChanged& cache,
    ::winrt::event_token& token)
{
    if (cache && cache != obj)
    {
        cache.CollectionChanged(token);
        cache = nullptr;
    }

    if (!cache && obj)
    {
        cache = obj;
        token = obj.CollectionChanged({ this, &XamlBindingTrackingBase::CollectionChanged });
    }
}

void XamlBindingTrackingBase::UpdateDependencyPropertyChangedListener(
    DependencyObject const& obj,
    DependencyProperty const& property,
    DependencyObject& cache,
    int64_t& token)
{
    if (cache && cache != obj)
    {
        cache.UnregisterPropertyChangedCallback(property, token);
        cache = nullptr;
    }

    if (!cache && obj)
    {
        cache = obj;
        token = obj.RegisterPropertyChangedCallback(property, 
            { this, &XamlBindingTrackingBase::DependencyPropertyChanged });
    }
}

void XamlBindingTrackingBase::UpdateDependencyPropertyChangedListener(
    DependencyObject const& obj,
    DependencyProperty const& property,
    winrt::weak_ref<::winrt::Microsoft::UI::Xaml::DependencyObject>& cacheRef,
    int64_t& token)
{
    DependencyObject cache = cacheRef.get();
    if (cache && cache != obj)
    {
        cache.UnregisterPropertyChangedCallback(property, token);
        cache = nullptr;
        cacheRef = nullptr;
    }

    if (!cache && obj)
    {
        cacheRef = cache = obj;
        token = obj.RegisterPropertyChangedCallback(property, 
            { this, &XamlBindingTrackingBase::DependencyPropertyChanged });
    }
}

} // namespace


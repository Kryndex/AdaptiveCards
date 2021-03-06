#include "pch.h"
#include "AdaptiveActionsConfig.h"
#include "AdaptiveShowCardActionConfig.h"
#include "Util.h"

using namespace Microsoft::WRL;
using namespace ABI::AdaptiveCards::Uwp;
using namespace ABI::Windows::UI;

namespace AdaptiveCards { namespace Uwp
{
    HRESULT AdaptiveActionsConfig::RuntimeClassInitialize() noexcept try
    {
        return S_OK;
    } CATCH_RETURN;

    HRESULT AdaptiveActionsConfig::RuntimeClassInitialize(AdaptiveCards::ActionsConfig actionsConfig) noexcept
    {
        m_sharedActionsConfig = actionsConfig;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveActionsConfig::get_ShowCard(IAdaptiveShowCardActionConfig** showCardActionConfig)
    {
        return MakeAndInitialize<AdaptiveShowCardActionConfig>(showCardActionConfig, m_sharedActionsConfig.showCard);
    }

    _Use_decl_annotations_
    HRESULT AdaptiveActionsConfig::put_ShowCard(IAdaptiveShowCardActionConfig* /*showCardActionConfig*/)
    {
        return E_NOTIMPL;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveActionsConfig::get_ButtonSpacing(UINT32* value)
    {
        *value = m_sharedActionsConfig.buttonSpacing;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveActionsConfig::put_ButtonSpacing(UINT32 value)
    {
        m_sharedActionsConfig.buttonSpacing = value;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveActionsConfig::get_MaxActions(UINT32* value)
    {
        *value = m_sharedActionsConfig.maxActions;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveActionsConfig::put_MaxActions(UINT32 value)
    {
        m_sharedActionsConfig.maxActions = value;
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveActionsConfig::get_Spacing(ABI::AdaptiveCards::Uwp::Spacing* value)
    {
        *value = static_cast<ABI::AdaptiveCards::Uwp::Spacing>(m_sharedActionsConfig.spacing);
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveActionsConfig::put_Spacing(ABI::AdaptiveCards::Uwp::Spacing value)
    {
        m_sharedActionsConfig.spacing = static_cast<AdaptiveCards::Spacing>(value);
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveActionsConfig::get_ActionAlignment(ABI::AdaptiveCards::Uwp::ActionAlignment* value)
    {
        *value = static_cast<ABI::AdaptiveCards::Uwp::ActionAlignment>(m_sharedActionsConfig.actionAlignment);
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveActionsConfig::put_ActionAlignment(ABI::AdaptiveCards::Uwp::ActionAlignment value)
    {
        m_sharedActionsConfig.actionAlignment = static_cast<AdaptiveCards::ActionAlignment>(value);
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveActionsConfig::get_ActionsOrientation(ABI::AdaptiveCards::Uwp::ActionsOrientation* value)
    {
        *value = static_cast<ABI::AdaptiveCards::Uwp::ActionsOrientation>(m_sharedActionsConfig.actionsOrientation);
        return S_OK;
    }

    _Use_decl_annotations_
    HRESULT AdaptiveActionsConfig::put_ActionsOrientation(ABI::AdaptiveCards::Uwp::ActionsOrientation value)
    {
        m_sharedActionsConfig.actionsOrientation = static_cast<AdaptiveCards::ActionsOrientation>(value);
        return S_OK;
    }
}}

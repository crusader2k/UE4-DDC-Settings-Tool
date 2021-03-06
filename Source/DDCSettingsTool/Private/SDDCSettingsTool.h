// Copyright 2020 - Trifolium Digital Limited

#pragma once

#include "CoreMinimal.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SWidget.h"
#include "Widgets/SCompoundWidget.h"
#include "SDDCInfoPanel.h"
#include "SDDCSaveToIniPanel.h"


/**
 * Slate widget to allow users to edit DDC settings for their project.
 */
class SDDCSettingsTool
	: public SCompoundWidget
{
public:

	SLATE_BEGIN_ARGS(SDDCSettingsTool) {}
		SLATE_DEFAULT_SLOT(FArguments, Content)
	SLATE_END_ARGS()

	/** The body of the slate window for our plugin settings widget. */
	void Construct(const FArguments& InArgs);

	/** Destructor */
	virtual ~SDDCSettingsTool();

private:
	//
	TSharedPtr<SDDCInfoPanel> LocalDDCInfoWidget;

	//
	TSharedPtr<SDDCInfoPanel> SharedDDCInfoWidget;

	//
	TSharedPtr<SDDCSaveToIniPanel> SaveToIniWidget;
};
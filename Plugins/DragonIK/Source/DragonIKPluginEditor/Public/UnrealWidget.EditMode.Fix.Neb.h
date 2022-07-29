// Neb
#pragma once

#include "UnrealWidget.h"

#if ENGINE_MAJOR_VERSION == 5 // Neb
	using EWidgetMode = UE::Widget::EWidgetMode;
#else
	using EWidgetMode = FWidget::EWidgetMode;
#endif	

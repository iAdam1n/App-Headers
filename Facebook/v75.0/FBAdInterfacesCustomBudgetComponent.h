/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBAdInterfacesBudget, CKComponent;

@interface FBAdInterfacesCustomBudgetComponent : CKCompositeComponent {

	FBAdInterfacesBudget* _budget;
	FBAdInterfacesBudget* _minimumBudget;
	FBAdInterfacesBudget* _maximumBudget;
	CKTypedComponentAction<> _valueChangeAction;
	CKTypedComponentAction<> _commitAction;
	CKComponent* _textFieldComponent;
	BOOL _editing;
	unsigned long long _baseBudgetValue;

}
+(id)newWithBudget:(id)arg1 minimumBudget:(id)arg2 maximumBudget:(id)arg3 baseBudgetValue:(unsigned long long)arg4 invalidEstimates:(BOOL)arg5 selected:(BOOL)arg6 estimateStyle:(unsigned long long)arg7 valueChangeAction:(CKTypedComponentAction<>)arg8 commitAction:(CKTypedComponentAction<>)arg9 ;
+(id)initialState;
-(void)customBudgetOptionSelected;
@end

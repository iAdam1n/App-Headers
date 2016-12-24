/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class NSString;

@interface FBAdInterfacesAudiencePickerComponent : CKCompositeComponent {

	CKTypedComponentAction<> _selectionChangeAction;
	NSString* _lastUsedAudienceIdentifier;

}
+(id)newWithAudienceOptions:(id)arg1 selectedOption:(id)arg2 selectionChangeAction:(CKTypedComponentAction<>)arg3 showSeeMore:(BOOL)arg4 tapSeeMoreAction:(CKTypedComponentAction<>)arg5 loading:(BOOL)arg6 imageContext:(id)arg7 toolbox:(id)arg8 predefinedAudienceInlineDescription:(BOOL)arg9 promotionAction:(unsigned long long)arg10 accessory:(id)arg11 ;
+(SEL)showCannotEditAudienceMessage;
+(id)initialState;
-(void)updateStateWithCannotEditMessage;
-(void)internalAudiencePicker:(id)arg1 didSelectAudienceOption:(id)arg2 ;
@end

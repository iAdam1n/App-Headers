/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@interface FBAdInterfacesOptionLineComponent : CKCompositeComponent {

	CKTypedComponentAction<> _optionSelectedAction;

}
+(id)newWithAttributedText:(id)arg1 selected:(BOOL)arg2 optionSelectedAction:(CKTypedComponentAction<>)arg3 context:(id)arg4 indentationLevel:(unsigned long long)arg5 accessory:(id)arg6 ;
+(id)newWithAttributedText:(id)arg1 selected:(BOOL)arg2 optionSelectedAction:(CKTypedComponentAction<>)arg3 context:(id)arg4 accessory:(id)arg5 ;
-(void)optionComponent:(id)arg1 didSelectOptionWithContext:(id)arg2 ;
@end

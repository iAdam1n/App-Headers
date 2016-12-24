/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSString;

@interface FBAccountConfirmationMegaphonePrimaryButtonComponentModel : NSObject {

	BOOL _enabled;
	NSString* _buttonTitle;
	CKTypedComponentAction<> _buttonTapAction;

}

@property (nonatomic,copy,readonly) NSString * buttonTitle;                           //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> buttonTapAction;              //@synthesize buttonTapAction=_buttonTapAction - In the implementation block
@property (nonatomic,readonly) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
+(id)newWithButtonTitle:(id)arg1 withButtonTapAction:(CKTypedComponentAction<>)arg2 withEnabled:(BOOL)arg3 ;
-(CKTypedComponentAction<>)buttonTapAction;
-(BOOL)enabled;
-(NSString *)buttonTitle;
@end

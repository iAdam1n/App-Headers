/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class CKComponent;

@interface FIGButtonTapTarget : NSObject {

	CKComponent* _component;
	CKTypedComponentAction<> _action;

}

@property (assign,nonatomic,__weak) CKComponent * component;               //@synthesize component=_component - In the implementation block
@property (assign,nonatomic) CKTypedComponentAction<> action;              //@synthesize action=_action - In the implementation block
-(void)didTapButton;
-(CKTypedComponentAction<>)action;
-(void)setAction:(CKTypedComponentAction<>)arg1 ;
-(CKComponent *)component;
-(void)setComponent:(CKComponent *)arg1 ;
@end

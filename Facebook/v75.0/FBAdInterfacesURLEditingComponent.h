/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@interface FBAdInterfacesURLEditingComponent : CKCompositeComponent {

	CKTypedComponentAction<> _urlChangedAction;

}
+(id)newWithURLString:(id)arg1 urlChangedAction:(CKTypedComponentAction<>)arg2 errorMessage:(id)arg3 placeholder:(id)arg4 ;
+(id)newWithURLString:(id)arg1 urlChangedAction:(CKTypedComponentAction<>)arg2 errorMessage:(id)arg3 ;
-(void)returnKeyTapped:(id)arg1 text:(id)arg2 ;
-(void)textFieldDidChange:(id)arg1 text:(id)arg2 ;
@end

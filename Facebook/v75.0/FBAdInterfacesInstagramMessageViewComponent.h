/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBAdInterfacesComponentToolbox;

@interface FBAdInterfacesInstagramMessageViewComponent : CKCompositeComponent {

	FBAdInterfacesComponentToolbox* _toolbox;

}

@property (assign,nonatomic) FBAdInterfacesComponentToolbox * toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithMessage:(id)arg1 actionText:(id)arg2 tapAction:(CKTypedComponentAction<>)arg3 toolbox:(id)arg4 ;
-(FBAdInterfacesComponentToolbox *)toolbox;
-(void)setToolbox:(FBAdInterfacesComponentToolbox *)arg1 ;
-(void)linkTapped:(id)arg1 withCheckingResults:(id)arg2 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponent.h>

@class CKComponent, FBPhotoViewerPhotoComponent;

@interface FBPhotoViewerCenteringPhotoComponent : CKComponent {

	long long _theme;
	CKComponent* _spacingComponent;
	FBPhotoViewerPhotoComponent* _photoComponent;

}
+(double)verticalSpacingToCenterPhotoWithHeight:(double)arg1 theme:(long long)arg2 ;
+(id)newWithPhoto:(id)arg1 theme:(long long)arg2 dismissPhotoViewerAction:(CKTypedComponentAction<>)arg3 didLongPressPhotoAction:(CKTypedComponentAction<>)arg4 dimmingController:(id)arg5 orientationAnnouncer:(id)arg6 presentationController:(id)arg7 dismissalTypeDecider:(id)arg8 zoomingPhotoView:(id)arg9 toolbox:(id)arg10 ;
-(CKComponentLayout*)computeLayoutThatFits:(CKSizeRange)arg1 ;
@end

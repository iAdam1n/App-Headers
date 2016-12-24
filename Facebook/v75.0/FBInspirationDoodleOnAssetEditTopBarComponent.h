/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBInspirationToolbox, FBInspirationDoodleContext, FBCaptureCoordinatorFilter;

@interface FBInspirationDoodleOnAssetEditTopBarComponent : CKCompositeComponent {

	FBInspirationToolbox* _toolbox;
	FBInspirationDoodleContext* _doodleContext;
	FBCaptureCoordinatorFilter* _doodleFilter;

}
+(id)newWithAuthor:(id)arg1 doodleContext:(id)arg2 canUndoDoodle:(BOOL)arg3 toolbox:(id)arg4 ;
-(void)_didTapDoodleUndo;
-(void)_didTapDoodleDone;
-(void)_setDoodleFilter;
@end

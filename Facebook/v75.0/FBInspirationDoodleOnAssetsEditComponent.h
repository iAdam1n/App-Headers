/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBInspirationToolbox, FBCaptureCoordinatorFilter;

@interface FBInspirationDoodleOnAssetsEditComponent : CKCompositeComponent {

	FBInspirationToolbox* _toolbox;
	FBCaptureCoordinatorFilter* _doodleFilter;

}
+(id)newWithDoodleContext:(id)arg1 author:(id)arg2 toolbox:(id)arg3 ;
-(void)colorScrubber:(id)arg1 didChooseSize:(double)arg2 ;
-(void)colorScrubber:(id)arg1 didChooseColor:(id)arg2 ;
-(void)_setDoodleFilter;
@end

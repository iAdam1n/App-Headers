/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollImpressionLogging.h>

@class FBPhotoRemindersAsset;

@interface FBPromptPhotoRemindersAssetComponent : CKCompositeComponent <FBHScrollImpressionLogging> {

	BOOL _enableToMultiSelect;
	FBPhotoRemindersAsset* _photoRemindersAsset;

}

@property (nonatomic,readonly) FBPhotoRemindersAsset * photoRemindersAsset;              //@synthesize photoRemindersAsset=_photoRemindersAsset - In the implementation block
@property (nonatomic,readonly) BOOL enableToMultiSelect;                                 //@synthesize enableToMultiSelect=_enableToMultiSelect - In the implementation block
+(id)newWithPhotoRemindersAsset:(id)arg1 tapAction:(SEL)arg2 size:(double)arg3 toolbox:(id)arg4 ;
-(FBPhotoRemindersAsset *)photoRemindersAsset;
-(BOOL)enableToMultiSelect;
@end

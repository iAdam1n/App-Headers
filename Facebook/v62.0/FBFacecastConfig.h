/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBComposerPrivacySetting;

@interface FBFacecastConfig : NSObject {

	BOOL _appShouldAllowPrivacySelection;
	unsigned long long _defaultFacecastPublisherAuthorType;
	unsigned long long _defaultFacecastPublisherTargetType;
	FBComposerPrivacySetting* _appWideForcedPrivacySetting;

}

@property (assign,nonatomic) BOOL appShouldAllowPrivacySelection;                                 //@synthesize appShouldAllowPrivacySelection=_appShouldAllowPrivacySelection - In the implementation block
@property (assign,nonatomic) unsigned long long defaultFacecastPublisherAuthorType;               //@synthesize defaultFacecastPublisherAuthorType=_defaultFacecastPublisherAuthorType - In the implementation block
@property (assign,nonatomic) unsigned long long defaultFacecastPublisherTargetType;               //@synthesize defaultFacecastPublisherTargetType=_defaultFacecastPublisherTargetType - In the implementation block
@property (nonatomic,retain) FBComposerPrivacySetting * appWideForcedPrivacySetting;              //@synthesize appWideForcedPrivacySetting=_appWideForcedPrivacySetting - In the implementation block
-(unsigned long long)defaultFacecastPublisherTargetType;
-(BOOL)appShouldAllowPrivacySelection;
-(id)initWithAppShouldAllowPrivacySelection:(BOOL)arg1 appWideForcedPrivacySetting:(id)arg2 defaultFacecastPublisherAuthorType:(unsigned long long)arg3 defaultFacecastPublisherTargetType:(unsigned long long)arg4 ;
-(BOOL)shouldAllowPrivacySelectionForCompositionState:(id)arg1 ;
-(BOOL)shouldAllowGeotargetingSelectionForTargetType:(unsigned long long)arg1 withExperimentContext:(id)arg2 ;
-(id)privacySettingForCompositionState:(id)arg1 ;
-(unsigned long long)defaultFacecastPublisherAuthorType;
-(void)setDefaultFacecastPublisherAuthorType:(unsigned long long)arg1 ;
-(void)setDefaultFacecastPublisherTargetType:(unsigned long long)arg1 ;
-(void)setAppShouldAllowPrivacySelection:(BOOL)arg1 ;
-(FBComposerPrivacySetting *)appWideForcedPrivacySetting;
-(void)setAppWideForcedPrivacySetting:(FBComposerPrivacySetting *)arg1 ;
@end

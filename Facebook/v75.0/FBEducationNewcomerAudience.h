/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComposerNewcomerEducationViewControllerDelegate.h>
#import <Facebook/FBComposerAudienceEducationProtocol.h>

@protocol FBComposerAudienceEducationProtocolDelegate;
@class FBUserSession, FBMemAudienceInfo, FBComposerAuthor, FBTypedNSArrayOfFBComposerPrivacySetting, FBComposerNewcomerEducationViewController, NSString;

@interface FBEducationNewcomerAudience : NSObject <FBComposerNewcomerEducationViewControllerDelegate, FBComposerAudienceEducationProtocol> {

	FBUserSession* _session;
	FBMemAudienceInfo* _audienceInfo;
	FBComposerAuthor* _author;
	FBTypedNSArrayOfFBComposerPrivacySetting* _availablePrivacySettings;
	FBComposerNewcomerEducationViewController* _newcomerEducationViewController;
	id<FBComposerAudienceEducationProtocolDelegate> _delegate;
	unsigned long long _platform;

}

@property (assign,nonatomic,__weak) id<FBComposerAudienceEducationProtocolDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long platform;                                                //@synthesize platform=_platform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldShowTooltip;
-(unsigned long long)audienceEducationViewType;
-(void)sendAudienceEducationRequestForEvent:(unsigned long long)arg1 ;
-(id)initWithSession:(id)arg1 audienceinfo:(id)arg2 forAuthor:(id)arg3 availablePrivacySettings:(id)arg4 ;
-(id)tooltipIdentifier;
-(id)viewForInterstitialWithFrame:(CGRect)arg1 ;
-(unsigned long long)audienceEducationType;
-(BOOL)showEducationForPrivacySetting:(id)arg1 ;
-(unsigned long long)tooltipType;
-(void)didInsertAudienceEducationToView;
-(BOOL)_isValidInputParameters;
-(void)_sendNewcomerAlignmentRequestForEvent:(unsigned long long)arg1 ;
-(id)audienceEducationData;
-(void)newcomerEducationViewController:(id)arg1 userDidSelectActionWithPrivacy:(id)arg2 ;
-(void)newcomerEducationViewControllerUserDidSelectMoreOptions:(id)arg1 ;
-(void)newcomerEducationViewControllerUserDidSelectLearnMore:(id)arg1 ;
-(void)newcomerEducationViewControllerUserDidTapBackgroundOfView:(id)arg1 ;
-(void)newcomerEducationViewControllerUserDidSelectHelpCenterLink:(id)arg1 ;
-(void)setDelegate:(id<FBComposerAudienceEducationProtocolDelegate>)arg1 ;
-(void)dealloc;
-(id<FBComposerAudienceEducationProtocolDelegate>)delegate;
-(unsigned long long)platform;
@end

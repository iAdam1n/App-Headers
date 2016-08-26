/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Facebook/FBPopoverControllerDelegate.h>
#import <Facebook/FBComposerFlowDelegate.h>

@protocol FBNavigationCoordinator, NSObject, FBQueriedActorFieldsProtocol, FBQueriedGoodwillCampaignFieldsProtocol, FBShareable;
@class FBUserSession, NSString, NSDictionary, FBPopoverActionSheet, FBShareToFriendFlowCoordinator, FBComposerPublisherData, FBMemModelObject, FBMemFeedStory, NSURL, NSArray, FBComposerPrivacySetting, FBMemGoodwillThrowbackPromotionFeedUnit, FBFeedToolbox, UIImage;

@interface FBThrowbackShareHandler : NSObject <UIActionSheetDelegate, FBPopoverControllerDelegate, FBComposerFlowDelegate> {

	FBUserSession* _session;
	NSString* _analyticsModule;
	NSDictionary* _extraAnalyticsData;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBPopoverActionSheet* _popoverActionSheet;
	id<NSObject> _statusBarChangeObserver;
	FBShareToFriendFlowCoordinator* _friendShareFlowCoordinator;
	FBComposerPublisherData* _publicationForShareNow;
	FBMemModelObject*<FBQueriedActorFieldsProtocol> _actor;
	FBMemFeedStory* _storyToShare;
	FBMemModelObject*<FBQueriedGoodwillCampaignFieldsProtocol> _campaignToShare;
	id<FBShareable> _shareable;
	NSURL* _linkURL;
	NSArray* _trackingCodes;
	FBComposerPrivacySetting* _shareNowPrivacySetting;
	BOOL _allowSharing;
	NSArray* _shareActionsSequence;
	NSString* _graphQLID;
	FBMemGoodwillThrowbackPromotionFeedUnit* _unit;
	FBFeedToolbox* _toolbox;
	UIImage* _image;
	NSString* _friendID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)composerCompletedWithResult:(id)arg1 ;
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 analyticsModule:(id)arg3 extraAnalyticsData:(id)arg4 ;
-(void)presentActionsForUnit:(id)arg1 toolbox:(id)arg2 previewImage:(id)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
-(void)_presentPopoverfromRect:(CGRect)arg1 inView:(id)arg2 ;
-(id)_popoverItems:(id)arg1 target:(id)arg2 ;
-(id)_actionItemsForAllowedActions:(id)arg1 ;
-(SEL)_selectorForShareAction:(unsigned long long)arg1 ;
-(void)_openShareModalForStory;
-(void)_openShareModalForCampaign;
-(void)_openSendModal;
-(void)_concludeShareAction:(id)arg1 compositionID:(id)arg2 ;
-(void)_dismissPopoverAndCleanup;
-(void)_handleShareCancelled;
-(void)_handleShareAction:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end

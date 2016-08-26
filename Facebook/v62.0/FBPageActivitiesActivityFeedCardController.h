/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPageActivitiesCardController.h>
#import <Facebook/FBPageBadgeCountListener.h>
#import <Facebook/FBPageActivitiesActivityFeedCardCellDelegate.h>
#import <Facebook/FBWebViewControllerDelegate.h>
#import <Facebook/FBCardViewProvider.h>

@protocol FBPageBadgeCountManagerProtocol;
@class FBPageActivitiesActivityFeedCardCell, FBUserSession, FBScenePathContext, FBPageActivityFeedViewModel, FBPageCTALogger, FBNuxController, NSString;

@interface FBPageActivitiesActivityFeedCardController : FBPageActivitiesCardController <FBPageBadgeCountListener, FBPageActivitiesActivityFeedCardCellDelegate, FBWebViewControllerDelegate, FBCardViewProvider> {

	FBPageActivitiesActivityFeedCardCell* _cardCell;
	id<FBPageBadgeCountManagerProtocol> _badgeCountManager;
	FBUserSession* _userSession;
	FBScenePathContext* _scenePathContext;
	FBPageActivityFeedViewModel* _activityFeedViewModel;
	FBPageCTALogger* _ctaLogger;
	FBNuxController* _contactUsRequestsNuxController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<FBPageCardProtocol> cardView; 
-(void)cellHeightDidChange;
-(void)openActivity;
-(void)openMentions;
-(void)openShares;
-(void)openReviews;
-(void)openCheckins;
-(void)openContactUsRequests;
-(void)_showContactUsRequestsEntryNuxIfNecessary;
-(id)_webViewControllerWithTitle:(id)arg1 activityLinkType:(unsigned long long)arg2 ;
-(int)_isEligibleForContactUsRequestsEntryNux;
-(void)_markCancelActivityFeedEvent:(id)arg1 ;
-(void)_markStartActivityFeedEvent:(id)arg1 ;
-(void)_openActivityLink:(unsigned long long)arg1 withTitle:(id)arg2 ;
-(void)_markStopActivityFeedEvent:(id)arg1 ;
-(void)webViewController:(id)arg1 didFinishLoadURL:(id)arg2 ;
-(void)webViewController:(id)arg1 disappearedBeforeFinishedLoadingURL:(id)arg2 ;
-(void)configureWithPage:(id)arg1 ;
-(void)pageAdminBadgeCountManager:(id)arg1 countDidChangeForPageFBID:(id)arg2 type:(int)arg3 count:(long long)arg4 ;
-(id)initWithPage:(id)arg1 analyticsUUID:(id)arg2 delegate:(id)arg3 userSession:(id)arg4 badgeCountManaget:(id)arg5 scenePath:(id)arg6 scenePathContext:(id)arg7 ;
-(void)closeNuxIfNecessary;
-(void)prepareForCardCellDisplay;
-(void)dealloc;
-(UIView*<FBPageCardProtocol>)cardView;
@end

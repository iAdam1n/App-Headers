/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPageActivitiesCardController.h>
#import <Facebook/FBPageActivitiesPostLinksCardCellDelegate.h>
#import <Facebook/FBPageBadgeCountListener.h>
#import <Facebook/FBCardViewProvider.h>

@protocol FBPageBadgeCountManagerProtocol;
@class FBPageActivitiesPostLinksCardCell, NSString;

@interface FBPageActivitiesPostLinksCardController : FBPageActivitiesCardController <FBPageActivitiesPostLinksCardCellDelegate, FBPageBadgeCountListener, FBCardViewProvider> {

	id<FBPageBadgeCountManagerProtocol> _badgeCountManager;
	FBPageActivitiesPostLinksCardCell* _cardCell;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<FBPageCardProtocol> cardView; 
-(void)cellHeightDidChange;
-(void)configureWithPage:(id)arg1 ;
-(void)pageAdminBadgeCountManager:(id)arg1 countDidChangeForPageFBID:(id)arg2 type:(int)arg3 count:(long long)arg4 ;
-(void)_loadScheduledPostsCount;
-(void)_loadDraftPostsCount;
-(void)openScheduledPosts;
-(void)openDraftPosts;
-(id)initWithPage:(id)arg1 analyticsUUID:(id)arg2 delegate:(id)arg3 userSession:(id)arg4 badgeCountManager:(id)arg5 ;
-(void)reloadBadgeCounts;
-(void)dealloc;
-(UIView*<FBPageCardProtocol>)cardView;
@end

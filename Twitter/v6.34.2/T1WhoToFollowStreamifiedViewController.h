/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1LegacyWhoToFollowViewController.h>

@class NSString, NSArray, TFNGenericItem, TFNTwitterUserRecommendationsList;

@interface T1WhoToFollowStreamifiedViewController : T1LegacyWhoToFollowViewController {

	BOOL _showFindAndDiscover;
	BOOL _showRecommendationsIfAddressBookNotImported;
	NSString* _displayLocation;
	NSArray* _findFriendsSectionItems;
	TFNGenericItem* _findFriendsFooterItem;
	TFNTwitterUserRecommendationsList* _recommendationsList;

}

@property (assign,nonatomic) BOOL showRecommendationsIfAddressBookNotImported;                     //@synthesize showRecommendationsIfAddressBookNotImported=_showRecommendationsIfAddressBookNotImported - In the implementation block
@property (nonatomic,retain) TFNTwitterUserRecommendationsList * recommendationsList;              //@synthesize recommendationsList=_recommendationsList - In the implementation block
-(id)scribePage;
-(BOOL)isLoadingTop;
-(void)loadTop:(id)arg1 ;
-(void)setDisplayLocation:(id)arg1 ;
-(void)_recommendationsListDidUpdate:(id)arg1 ;
-(id)backingObjectAtIndexPath:(id)arg1 ;
-(void)requestUsers;
-(id)indexPathForBackingObject:(id)arg1 ;
-(unsigned long long)indexOfSectionWithID:(unsigned long long)arg1 ;
-(id)noUsersLabel;
-(unsigned long long)sectionIdentifierForIndex:(unsigned long long)arg1 ;
-(BOOL)shouldShowBioForUserOrRecommendation:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)showRecommendationsIfAddressBookNotImported;
-(void)_addressBookImportDidUpdate:(id)arg1 ;
-(id)_setupFindFriendsItems;
-(void)setFindFriendsSectionItems:(id)arg1 ;
-(void)seedUsers:(id)arg1 ;
-(id)_setupBrowseSectionItems;
-(BOOL)showFindAndDiscover;
-(void)setShowFindAndDiscover:(BOOL)arg1 ;
-(id)findFriendsSectionItems;
-(id)findFriendsFooterItem;
-(void)setFindFriendsFooterItem:(id)arg1 ;
-(void)setShowRecommendationsIfAddressBookNotImported:(BOOL)arg1 ;
-(TFNTwitterUserRecommendationsList *)recommendationsList;
-(void)setRecommendationsList:(TFNTwitterUserRecommendationsList *)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)update;
-(void)_reset;
-(id)displayLocation;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBPagePresenceNewVCExperimentContext : FBExperimentContext {

	BOOL _backButtonGoHome;
	BOOL _backButtonNavigateInTab;
	BOOL _centerCurrentTab;
	BOOL _dontPinTabsToTop;
	BOOL _showNewActionBarStyle3Buttons;
	BOOL _nestedAdminTabs;
	BOOL _tapTabScrollToTop;
	BOOL _adminTabEnabled;
	BOOL _landOnHomeTab;
	BOOL _showFirstMetaboxLine;
	BOOL _showMetaboxCity;
	BOOL _showRatingCount;
	BOOL _hideAdminMetabox;
	float _coverPhotoScrollFraction;
	NSString* _useSegmentedViewBool;
	NSString* _showTabBarBool;
	NSString* _showLocalCardBool;
	NSString* _insertInfoCardIntoListviewBool;
	unsigned long long _listViewInitialBatchSize;
	unsigned long long _listViewSubsequentBatchSize;
	unsigned long long _maxNumOfConsecutiveInitialNetworkRequests;
	NSString* _showNewCoverPhotoAndProfileBool;
	NSString* _showNewCTAStyleBool;
	NSString* _showNewActionBarStyleBool;
	NSString* _showMetaboxBool;

}

@property (nonatomic,copy) NSString * useSegmentedViewBool;                                               //@synthesize useSegmentedViewBool=_useSegmentedViewBool - In the implementation block
@property (nonatomic,copy) NSString * showTabBarBool;                                                     //@synthesize showTabBarBool=_showTabBarBool - In the implementation block
@property (nonatomic,readonly) BOOL backButtonGoHome;                                                     //@synthesize backButtonGoHome=_backButtonGoHome - In the implementation block
@property (nonatomic,readonly) BOOL backButtonNavigateInTab;                                              //@synthesize backButtonNavigateInTab=_backButtonNavigateInTab - In the implementation block
@property (nonatomic,readonly) BOOL centerCurrentTab;                                                     //@synthesize centerCurrentTab=_centerCurrentTab - In the implementation block
@property (nonatomic,copy) NSString * showLocalCardBool;                                                  //@synthesize showLocalCardBool=_showLocalCardBool - In the implementation block
@property (nonatomic,copy) NSString * insertInfoCardIntoListviewBool;                                     //@synthesize insertInfoCardIntoListviewBool=_insertInfoCardIntoListviewBool - In the implementation block
@property (nonatomic,readonly) BOOL dontPinTabsToTop;                                                     //@synthesize dontPinTabsToTop=_dontPinTabsToTop - In the implementation block
@property (nonatomic,readonly) unsigned long long listViewInitialBatchSize;                               //@synthesize listViewInitialBatchSize=_listViewInitialBatchSize - In the implementation block
@property (nonatomic,readonly) unsigned long long listViewSubsequentBatchSize;                            //@synthesize listViewSubsequentBatchSize=_listViewSubsequentBatchSize - In the implementation block
@property (nonatomic,readonly) unsigned long long maxNumOfConsecutiveInitialNetworkRequests;              //@synthesize maxNumOfConsecutiveInitialNetworkRequests=_maxNumOfConsecutiveInitialNetworkRequests - In the implementation block
@property (nonatomic,copy) NSString * showNewCoverPhotoAndProfileBool;                                    //@synthesize showNewCoverPhotoAndProfileBool=_showNewCoverPhotoAndProfileBool - In the implementation block
@property (nonatomic,copy) NSString * showNewCTAStyleBool;                                                //@synthesize showNewCTAStyleBool=_showNewCTAStyleBool - In the implementation block
@property (nonatomic,copy) NSString * showNewActionBarStyleBool;                                          //@synthesize showNewActionBarStyleBool=_showNewActionBarStyleBool - In the implementation block
@property (nonatomic,readonly) BOOL showNewActionBarStyle3Buttons;                                        //@synthesize showNewActionBarStyle3Buttons=_showNewActionBarStyle3Buttons - In the implementation block
@property (nonatomic,copy) NSString * showMetaboxBool;                                                    //@synthesize showMetaboxBool=_showMetaboxBool - In the implementation block
@property (nonatomic,readonly) BOOL nestedAdminTabs;                                                      //@synthesize nestedAdminTabs=_nestedAdminTabs - In the implementation block
@property (nonatomic,readonly) BOOL tapTabScrollToTop;                                                    //@synthesize tapTabScrollToTop=_tapTabScrollToTop - In the implementation block
@property (nonatomic,readonly) BOOL adminTabEnabled;                                                      //@synthesize adminTabEnabled=_adminTabEnabled - In the implementation block
@property (nonatomic,readonly) BOOL landOnHomeTab;                                                        //@synthesize landOnHomeTab=_landOnHomeTab - In the implementation block
@property (nonatomic,readonly) BOOL showFirstMetaboxLine;                                                 //@synthesize showFirstMetaboxLine=_showFirstMetaboxLine - In the implementation block
@property (nonatomic,readonly) BOOL showMetaboxCity;                                                      //@synthesize showMetaboxCity=_showMetaboxCity - In the implementation block
@property (nonatomic,readonly) BOOL showRatingCount;                                                      //@synthesize showRatingCount=_showRatingCount - In the implementation block
@property (nonatomic,readonly) float coverPhotoScrollFraction;                                            //@synthesize coverPhotoScrollFraction=_coverPhotoScrollFraction - In the implementation block
@property (nonatomic,readonly) BOOL hideAdminMetabox;                                                     //@synthesize hideAdminMetabox=_hideAdminMetabox - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned long long)getListViewInitialBatchSize:(id)arg1 ;
+(unsigned long long)getListViewSubsequentBatchSize:(id)arg1 ;
+(double)fractionOfCovorPhotoToHideViaScroll:(id)arg1 ;
+(unsigned long long)getMaxNumOfConsecutiveInitialNetworkRequests:(id)arg1 ;
-(BOOL)showNewCTAStyle;
-(unsigned long long)maxNumOfConsecutiveInitialNetworkRequests;
-(unsigned long long)listViewInitialBatchSize;
-(unsigned long long)listViewSubsequentBatchSize;
-(float)coverPhotoScrollFraction;
-(NSString *)useSegmentedViewBool;
-(NSString *)insertInfoCardIntoListviewBool;
-(NSString *)showLocalCardBool;
-(NSString *)showTabBarBool;
-(NSString *)showNewCoverPhotoAndProfileBool;
-(NSString *)showNewCTAStyleBool;
-(NSString *)showNewActionBarStyleBool;
-(NSString *)showMetaboxBool;
-(BOOL)useSegmentedView;
-(BOOL)insertInfoCardIntoListview;
-(BOOL)showLocalCard;
-(BOOL)showTabBar;
-(BOOL)showNewCoverPhotoAndProfile;
-(BOOL)showNewActionBarStyle;
-(BOOL)showMetabox;
-(void)setUseSegmentedViewBool:(NSString *)arg1 ;
-(void)setShowTabBarBool:(NSString *)arg1 ;
-(BOOL)backButtonGoHome;
-(BOOL)backButtonNavigateInTab;
-(BOOL)centerCurrentTab;
-(void)setShowLocalCardBool:(NSString *)arg1 ;
-(void)setInsertInfoCardIntoListviewBool:(NSString *)arg1 ;
-(BOOL)dontPinTabsToTop;
-(void)setShowNewCoverPhotoAndProfileBool:(NSString *)arg1 ;
-(void)setShowNewCTAStyleBool:(NSString *)arg1 ;
-(void)setShowNewActionBarStyleBool:(NSString *)arg1 ;
-(BOOL)showNewActionBarStyle3Buttons;
-(void)setShowMetaboxBool:(NSString *)arg1 ;
-(BOOL)nestedAdminTabs;
-(BOOL)tapTabScrollToTop;
-(BOOL)adminTabEnabled;
-(BOOL)landOnHomeTab;
-(BOOL)showFirstMetaboxLine;
-(BOOL)showMetaboxCity;
-(BOOL)showRatingCount;
-(BOOL)hideAdminMetabox;
@end

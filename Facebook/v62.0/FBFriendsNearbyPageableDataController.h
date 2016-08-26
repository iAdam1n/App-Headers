/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFriendsNearbyLocationPrefetchDelegate.h>
#import <Facebook/FBFriendsNearbyDataController.h>

@class NSMutableArray, FBMemLocationSharing, NSOrderedSet, FBFNSettingsDataController, NSArray, NSSet, NSDictionary, FBUserSession, NSMutableDictionary, NSMutableSet, FBExperimentManager, FBFriendsNearbyLocationPrefetch, FBFriendsNearbyPingDataHelper, FBNearbySection, NSString, NSNumber, CLLocation;

@interface FBFriendsNearbyPageableDataController : NSObject <FBFriendsNearbyLocationPrefetchDelegate, FBFriendsNearbyDataController> {

	FBUserSession* _session;
	NSMutableDictionary* _dashboardFriendDictionary;
	NSMutableSet* _blockedFbids;
	FBExperimentManager* _experimentManager;
	FBFriendsNearbyLocationPrefetch* _locationFetch;
	FBFriendsNearbyPingDataHelper* _pingHelper;
	NSArray* _highlightFBIDs;
	/*^block*/id _previewCompletionBlock;
	/*^block*/id _dataCompletionBlock;
	BOOL _loadingHighlight;
	FBNearbySection* _outPingSection;
	FBNearbySection* _highlightSection;
	NSDictionary* _highlightDictionary;
	NSString* _regionTopicId;
	NSNumber* _regionLatitude;
	NSNumber* _regionLongitude;
	NSNumber* _regionAccuracy;
	NSNumber* _regionAge;
	NSString* _regionPageId;
	CLLocation* _previewLocation;
	BOOL _isInitialized;
	FBFNSettingsDataController* _settingsDataController;
	long long _state;
	NSMutableArray* _dashboardSections;
	NSOrderedSet* _inPingSet;
	NSOrderedSet* _outPingSet;
	FBMemLocationSharing* _locationSharing;

}

@property (nonatomic,retain) NSOrderedSet * inPingSet;                                           //@synthesize inPingSet=_inPingSet - In the implementation block
@property (nonatomic,retain) NSOrderedSet * outPingSet;                                          //@synthesize outPingSet=_outPingSet - In the implementation block
@property (nonatomic,retain) FBMemLocationSharing * locationSharing;                             //@synthesize locationSharing=_locationSharing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSMutableArray * dashboardSections;                        //@synthesize dashboardSections=_dashboardSections - In the implementation block
@property (nonatomic,readonly) long long state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL isInitialized;                                               //@synthesize isInitialized=_isInitialized - In the implementation block
@property (nonatomic,readonly) FBFNSettingsDataController * settingsDataController;              //@synthesize settingsDataController=_settingsDataController - In the implementation block
@property (nonatomic,readonly) BOOL hasEmptyDashboard; 
@property (nonatomic,copy,readonly) NSArray * fbidsInDashboard; 
@property (nonatomic,copy,readonly) NSSet * fbidsBlockedInDashboard; 
@property (nonatomic,copy,readonly) NSDictionary * nearbyFriendsInDashboard; 
+(id)_parseContactSetItemEdge:(id)arg1 ;
+(id)parseContactsTab:(id)arg1 ;
+(id)friendDictionaryForNearbySections:(id)arg1 ;
+(long long)_parseLocationStateContext:(id)arg1 ;
-(void)loadDataWithHighlightFBIDs:(id)arg1 previewCompletion:(/*^block*/id)arg2 dataCompletion:(/*^block*/id)arg3 ;
-(void)_loadHighlightSectionWithFBIDs:(id)arg1 ;
-(void)_handleLoadMoreError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleLoadMoreResponse:(id)arg1 nearbySection:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_loadDataWithLocation:(id)arg1 isPreview:(BOOL)arg2 ;
-(void)_handleLoadDataError:(id)arg1 ;
-(void)_handleHighlightResponse:(id)arg1 ;
-(void)_resetRegionInfo:(id)arg1 ;
-(void)_handleResponse:(id)arg1 isPreview:(BOOL)arg2 ;
-(void)_handleSectionResponse:(id)arg1 ;
-(void)_handleLoadDataCompletion;
-(FBMemLocationSharing *)locationSharing;
-(id)_createFBMemPerson:(id)arg1 name:(id)arg2 profile:(id)arg3 ;
-(id)_findAndModifyPing:(id)arg1 fromSet:(id)arg2 ;
-(void)_loadSectionsWithContactsID:(id)arg1 cursor:(id)arg2 ;
-(void)removePersonWithFBID:(id)arg1 ;
-(void)setInPingSet:(NSOrderedSet *)arg1 ;
-(void)setOutPingSet:(NSOrderedSet *)arg1 ;
-(void)loadMoreInNearbySection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)reportIncorrectRegion;
-(void)claimUnknownRegion;
-(NSMutableArray *)dashboardSections;
-(NSOrderedSet *)inPingSet;
-(NSOrderedSet *)outPingSet;
-(FBFNSettingsDataController *)settingsDataController;
-(BOOL)hasEmptyDashboard;
-(NSArray *)fbidsInDashboard;
-(NSSet *)fbidsBlockedInDashboard;
-(NSDictionary *)nearbyFriendsInDashboard;
-(void)setLocationSharing:(FBMemLocationSharing *)arg1 ;
-(void)finishFetchLocation:(id)arg1 ;
-(void)sendPing:(id)arg1 onDone:(/*^block*/id)arg2 ;
-(void)deletePing:(id)arg1 onDone:(/*^block*/id)arg2 ;
-(id)initWithSession:(id)arg1 settingsDataController:(id)arg2 ;
-(id)locationPingForPerson:(id)arg1 ;
-(long long)state;
-(BOOL)isInitialized;
-(void)updateLocation:(id)arg1 ;
-(void)loadData:(/*^block*/id)arg1 ;
@end

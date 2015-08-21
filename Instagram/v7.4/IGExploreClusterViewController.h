/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:13 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGExploreFeedViewController.h>
#import <Instagram/IGFeedStatusViewDataSource.h>
#import <Instagram/IGNetworkSourceDelegate.h>

@class IGNetworkSource, NSMutableSet, NSString;

@interface IGExploreClusterViewController : IGExploreFeedViewController <IGFeedStatusViewDataSource, IGNetworkSourceDelegate> {

	IGNetworkSource* _networkSource;
	long long _networkSourceStatus;
	NSMutableSet* _loggedImpressions;
	NSString* _clusterKey;

}

@property (nonatomic,retain) IGNetworkSource * networkSource;               //@synthesize networkSource=_networkSource - In the implementation block
@property (assign,nonatomic) long long networkSourceStatus;                 //@synthesize networkSourceStatus=_networkSourceStatus - In the implementation block
@property (nonatomic,retain) NSMutableSet * loggedImpressions;              //@synthesize loggedImpressions=_loggedImpressions - In the implementation block
@property (nonatomic,retain) NSString * clusterKey;                         //@synthesize clusterKey=_clusterKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long status; 
-(id)analyticsModule;
-(BOOL)enableNavState;
-(BOOL)loadedOnce;
-(IGNetworkSource *)networkSource;
-(void)setNetworkSource:(IGNetworkSource *)arg1 ;
-(NSMutableSet *)loggedImpressions;
-(id)initWithClusterKey:(id)arg1 type:(id)arg2 ;
-(void)setLoggedImpressions:(NSMutableSet *)arg1 ;
-(void)followStatusNotification:(id)arg1 ;
-(void)setNetworkSourceStatus:(long long)arg1 ;
-(void)fetchMoreData;
-(void)logTap:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)logMediaClick:(id)arg1 atIndex:(long long)arg2 mediaIndex:(unsigned long long)arg3 ;
-(void)logFollow:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)logImpression:(id)arg1 viewed:(BOOL)arg2 atIndex:(unsigned long long)arg3 ;
-(void)logMediaImpression:(id)arg1 viewed:(BOOL)arg2 atIndex:(long long)arg3 mediaIndex:(unsigned long long)arg4 ;
-(long long)networkSourceStatus;
-(void)logEvent:(id)arg1 item:(id)arg2 atPosition:(unsigned long long)arg3 fullScreen:(BOOL)arg4 ;
-(NSString *)clusterKey;
-(BOOL)failedWithAuthorizationError;
-(id)emptyMessage;
-(void)networkSource:(id)arg1 didFetchObject:(id)arg2 ;
-(void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 ;
-(void)networkSource:(id)arg1 didFailWithError:(id)arg2 ;
-(id)feedStatusViewDataSource;
-(id)exploreViewModelForObject:(id)arg1 ;
-(void)didSelectObject:(id)arg1 atIndex:(long long)arg2 ;
-(void)didSelectObject:(id)arg1 atIndex:(long long)arg2 mediaIndex:(unsigned long long)arg3 ;
-(void)didFollowObject:(id)arg1 atIndex:(long long)arg2 ;
-(void)didUnfollowObject:(id)arg1 atIndex:(long long)arg2 ;
-(void)willDisplayObject:(id)arg1 atIndex:(long long)arg2 ;
-(void)didDisplayObject:(id)arg1 atIndex:(long long)arg2 ;
-(void)willDisplayObject:(id)arg1 atIndex:(long long)arg2 mediaIndex:(unsigned long long)arg3 ;
-(void)didDisplayObject:(id)arg1 atIndex:(long long)arg2 mediaIndex:(unsigned long long)arg3 ;
-(void)setClusterKey:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(int)viewType;
-(long long)status;
-(unsigned long long)itemCount;
-(BOOL)moreAvailable;
-(id)errorMessage;
-(void)fetchData;
@end


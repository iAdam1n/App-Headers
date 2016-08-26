/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFNInlineUpsellDataFetcher.h>
#import <Facebook/FBFNFacepileViewDataSource.h>

@protocol FBFNInlineUpsellNuxManager;
@class FBUserSession, FBScenePath, NSDate, NSString, FBMemPerson, NSArray;

@interface FBFNInlineUpsellDataSource : NSObject <FBFNInlineUpsellDataFetcher, FBFNFacepileViewDataSource> {

	unsigned long long _totalCount;
	FBScenePath* _scenePath;
	NSDate* _lastDownloadDate;
	NSString* _inviteRequestFBId;
	id<FBFNInlineUpsellNuxManager> _nuxManager;
	FBMemPerson* _inviter;
	BOOL _isLoaded;
	BOOL _isTraveling;
	FBUserSession* _session;
	NSArray* _people;
	NSString* _currentCity;
	NSString* _userShortName;
	NSString* _inviteRequestUserShortName;

}

@property (nonatomic,copy) NSArray * people;                                            //@synthesize people=_people - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentCity;                             //@synthesize currentCity=_currentCity - In the implementation block
@property (nonatomic,readonly) unsigned long long totalCount;                           //@synthesize totalCount=_totalCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * userShortName;                           //@synthesize userShortName=_userShortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * inviteRequestUserShortName;              //@synthesize inviteRequestUserShortName=_inviteRequestUserShortName - In the implementation block
@property (nonatomic,readonly) BOOL isTraveling;                                        //@synthesize isTraveling=_isTraveling - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isLoaded;                                           //@synthesize isLoaded=_isLoaded - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                 //@synthesize session=_session - In the implementation block
-(void)loadUpsellData:(id)arg1 ;
-(void)fetchUpsellInfo:(/*^block*/id)arg1 ;
-(NSString *)inviteRequestUserShortName;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 nuxManager:(id)arg3 inviteRequestFBId:(id)arg4 ;
-(void)presentNuxForInlineUpsellView:(id)arg1 ;
-(unsigned long long)numberOfFriendsWithNearbyFriends:(id)arg1 ;
-(id)facepileView:(id)arg1 shortNamePersonAtIndex:(unsigned long long)arg2 ;
-(id)facepileViewImageDownloader;
-(unsigned long long)numberOfPeopleInFacepile:(id)arg1 ;
-(id)facepileView:(id)arg1 imageURLForPersonAtIndex:(unsigned long long)arg2 ;
-(void)_fetchUpsellInfo:(double)arg1 requiresCity:(id)arg2 responseCallback:(/*^block*/id)arg3 ;
-(void)_processUpsellResponse:(id)arg1 downloadDate:(id)arg2 ;
-(BOOL)_shouldFetchCache;
-(void)prefetchUpsellInfo;
-(NSString *)userShortName;
-(BOOL)isLoaded;
-(BOOL)isTraveling;
-(void)setPeople:(NSArray *)arg1 ;
-(NSArray *)people;
-(FBUserSession *)session;
-(NSString *)currentCity;
-(unsigned long long)totalCount;
@end

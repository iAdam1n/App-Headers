/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBMemGraphSearchQuery, FBGraphQLQuery, NSString, NSArray;


@protocol FBSearchGeneralDownloadControllerProtocol <NSObject>
@property (nonatomic,readonly) BOOL hasMoreData; 
@property (nonatomic,readonly) BOOL searchResultsIsEmpty; 
@property (nonatomic,readonly) FBMemGraphSearchQuery * lastGraphSearchQuery; 
@property (nonatomic,readonly) FBGraphQLQuery * lastGraphQLQuery; 
@property (nonatomic,copy,readonly) NSString * resultsSessionID; 
@property (nonatomic,copy,readonly) NSString * verticalToLog; 
@property (nonatomic,copy,readonly) NSString * postSearchIntentLog; 
@property (nonatomic,copy,readonly) NSArray * edgesToLog; 
@property (nonatomic,copy,readonly) NSArray * clientModuleRolesToLog; 
@property (nonatomic,readonly) FBMemGraphSearchQuery * currentQuery; 
@property (nonatomic,copy,readonly) NSString * requestTracker; 
@required
-(void)loadTail;
-(NSString *)resultsSessionID;
-(NSString *)verticalToLog;
-(NSString *)postSearchIntentLog;
-(NSArray *)clientModuleRolesToLog;
-(BOOL)searchResultsIsEmpty;
-(NSString *)requestTracker;
-(void)loadHeadIfEmpty;
-(void)releaseAllCachedData;
-(NSArray *)edgesToLog;
-(FBMemGraphSearchQuery *)lastGraphSearchQuery;
-(FBGraphQLQuery *)lastGraphQLQuery;
-(void)retry;
-(FBMemGraphSearchQuery *)currentQuery;
-(BOOL)hasMoreData;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLConnectionSectionComponentConfiguration.h>
#import <Facebook/FBFeedGraphQLConnectionSectionComponentConfiguring.h>

@class NSString, FBConnectionPageLoadLimits, NSDictionary, FBGraphQLConnectionControllerConfiguration, FBGraphQLConnectionStoreConfiguration, FBGraphQLConnectionStorePersistenceCoordinator, FBConnectionSectionComponentSpinnerConfiguration, FBGraphQLConnectionController, FBConnectionPollingConfiguration;

@interface FBFeedGraphQLConnectionSectionComponentConfiguration : FBGraphQLConnectionSectionComponentConfiguration <FBFeedGraphQLConnectionSectionComponentConfiguring> {

	Class _componentProviderClass;
	NSString* _targetID;
	long long _feedType;

}

@property (nonatomic,copy) NSString * targetID;                                                                           //@synthesize targetID=_targetID - In the implementation block
@property (assign,nonatomic) long long feedType;                                                                          //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,retain) Class componentProviderClass;                                                                //@synthesize componentProviderClass=_componentProviderClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) /*function pointer*/void* connectionEdgeToModelTransformer; 
@property (nonatomic,copy) FBConnectionPageLoadLimits * pageLoadLimits; 
@property (nonatomic,copy) NSDictionary * pageLoadUserInfo; 
@property (nonatomic,retain) FBGraphQLConnectionControllerConfiguration * connectionControllerConfiguration; 
@property (nonatomic,retain) FBGraphQLConnectionStoreConfiguration * connectionStoreConfiguration; 
@property (nonatomic,retain) id componentContext; 
@property (nonatomic,retain) FBGraphQLConnectionStorePersistenceCoordinator * persistenceCoordinator; 
@property (assign,nonatomic) BOOL loadOnScrollToTop; 
@property (assign,nonatomic) BOOL reloadOnPullToRefresh; 
@property (assign,nonatomic) BOOL headloadOnReappear; 
@property (assign,nonatomic) BOOL headloadOnForeground; 
@property (nonatomic,retain) FBConnectionSectionComponentSpinnerConfiguration * spinnerConfiguration; 
@property (nonatomic,retain) FBGraphQLConnectionController * connectionController; 
@property (nonatomic,retain) id scopeKey; 
@property (nonatomic,retain) FBConnectionPollingConfiguration * pollingConfiguration; 
@property (assign,nonatomic) BOOL shouldTransitionViewStateManager; 
@property (assign,nonatomic) BOOL shouldShowNoContentOnEmptyResult; 
@property (nonatomic,copy) NSString * loggableName; 
@property (assign,nonatomic,__weak) id<FBGraphQLConnectionFetchStatusListener> fetchStatusListener; 
+(id)newWithQueryFactory:(/*function pointer*/void*)arg1 fieldSet:(const FBGraphQLFieldSetRef)arg2 targetID:(id)arg3 feedType:(long long)arg4 configurationBlock:(/*^block*/id)arg5 ;
+(id)newWithQueryFactory:(/*function pointer*/void*)arg1 fieldSet:(const FBGraphQLFieldSetRef)arg2 targetID:(id)arg3 feedType:(long long)arg4 ;
-(Class)componentProviderClass;
-(id)initWithQueryFactory:(/*function pointer*/void*)arg1 fieldSet:(const FBGraphQLFieldSetRef)arg2 targetID:(id)arg3 feedType:(long long)arg4 configurationBlock:(/*^block*/id)arg5 ;
-(void)setComponentProviderClass:(Class)arg1 ;
-(void)setTargetID:(NSString *)arg1 ;
-(NSString *)targetID;
-(long long)feedType;
-(void)setFeedType:(long long)arg1 ;
@end

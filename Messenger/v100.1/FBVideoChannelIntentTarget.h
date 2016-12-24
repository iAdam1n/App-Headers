/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBIntentTarget.h>

@class NSString, NSArray, FBReactionComponentDataModel;

@interface FBVideoChannelIntentTarget : FBIntentTarget {

	NSString* _FBID;
	NSString* _caller;
	NSString* _playerOrigin;
	NSString* _playerSubOrigin;
	NSString* _pinnedVideoFBID;

}

@property (nonatomic,copy,readonly) NSArray * channelConfigs; 
@property (nonatomic,readonly) FBMemModelObject*<FBQueriedNodeFieldsProtocol> channelPublisher; 
@property (nonatomic,readonly) unsigned long long headerStyle; 
@property (nonatomic,readonly) long long openAtIndex; 
@property (nonatomic,readonly) id<FBVideoPlaybackLoggingDataProviderInitializer> loggingProviderInitializer; 
@property (nonatomic,readonly) FBReactionComponentDataModel * creatorHScrollDataModel; 
@property (nonatomic,readonly) BOOL forceDismissIntoWNSEnabled; 
@property (nonatomic,copy,readonly) NSString * FBID;                                                                      //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * caller;                                                                    //@synthesize caller=_caller - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerOrigin;                                                              //@synthesize playerOrigin=_playerOrigin - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerSubOrigin;                                                           //@synthesize playerSubOrigin=_playerSubOrigin - In the implementation block
@property (nonatomic,copy,readonly) NSString * pinnedVideoFBID;                                                           //@synthesize pinnedVideoFBID=_pinnedVideoFBID - In the implementation block
+(id)videoChannelTargetWithChannelConfigs:(id)arg1 intentConfig:(const FBVideoChannelIntentConfig*)arg2 ;
+(id)videoChannelTargetWithFBID:(id)arg1 caller:(id)arg2 playerOrigin:(id)arg3 playerSubOrigin:(id)arg4 pinnedVideoFBID:(id)arg5 ;
-(NSString *)FBID;
-(id)fallbackURLs;
-(id<FBVideoPlaybackLoggingDataProviderInitializer>)loggingProviderInitializer;
-(NSString *)playerOrigin;
-(NSString *)playerSubOrigin;
-(NSArray *)channelConfigs;
-(FBMemModelObject*<FBQueriedNodeFieldsProtocol>)channelPublisher;
-(long long)openAtIndex;
-(FBReactionComponentDataModel *)creatorHScrollDataModel;
-(BOOL)forceDismissIntoWNSEnabled;
-(NSString *)pinnedVideoFBID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)headerStyle;
-(NSString *)caller;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBVideoPlaybackLoggingDataProviderInitializer.h>

@protocol FBVideoPlaybackKitLoggingDataSessionIDProvider;
@class NSString;

@interface FBSimpleVideoPlaybackLoggingDataProviderInitializer : NSObject <FBVideoPlaybackLoggingDataProviderInitializer> {

	NSString* _videoChannelID;
	id<FBVideoPlaybackKitLoggingDataSessionIDProvider> _videoHomeSession;
	NSString* _videoHomeSessionID;
	NSString* _externalLogID;
	NSString* _externalLogType;
	NSString* _reactionComponentTrackingData;
	NSString* _hostVideoID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBVideoPlaybackKitLoggingDataSessionIDProvider> videoHomeSession;              //@synthesize videoHomeSession=_videoHomeSession - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoHomeSessionID;                                               //@synthesize videoHomeSessionID=_videoHomeSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoChannelID;                                                   //@synthesize videoChannelID=_videoChannelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalLogID;                                                    //@synthesize externalLogID=_externalLogID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalLogType;                                                  //@synthesize externalLogType=_externalLogType - In the implementation block
@property (nonatomic,copy,readonly) NSString * reactionComponentTrackingData;                                    //@synthesize reactionComponentTrackingData=_reactionComponentTrackingData - In the implementation block
@property (nonatomic,copy,readonly) NSString * hostVideoID;                                                      //@synthesize hostVideoID=_hostVideoID - In the implementation block
-(NSString *)videoHomeSessionID;
-(id<FBVideoPlaybackKitLoggingDataSessionIDProvider>)videoHomeSession;
-(NSString *)reactionComponentTrackingData;
-(id)initWithVideoChannelID:(id)arg1 videoHomeSession:(id)arg2 externalLogID:(id)arg3 externalLogType:(id)arg4 reactionComponentTrackingData:(id)arg5 ;
-(NSString *)videoChannelID;
-(NSString *)externalLogID;
-(NSString *)externalLogType;
-(id)initWithHostVideoID:(id)arg1 ;
-(id)initWithVideoChannelID:(id)arg1 videoHomeSessionID:(id)arg2 externalLogID:(id)arg3 externalLogType:(id)arg4 ;
-(NSString *)hostVideoID;
@end

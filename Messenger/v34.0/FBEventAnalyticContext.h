/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSArray;

@interface FBEventAnalyticContext : NSObject {

	long long _surface;
	long long _mechanism;
	NSString* _sessionId;
	NSArray* _trackingCodes;

}

@property (nonatomic,readonly) long long surface;                         //@synthesize surface=_surface - In the implementation block
@property (nonatomic,readonly) long long mechanism;                       //@synthesize mechanism=_mechanism - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionId;                 //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;              //@synthesize trackingCodes=_trackingCodes - In the implementation block
+(id)contextWithSurface:(long long)arg1 mechanism:(long long)arg2 sessionId:(id)arg3 trackingCodes:(id)arg4 ;
+(id)contextWithSurface:(long long)arg1 mechanism:(long long)arg2 sessionId:(id)arg3 ;
+(id)contextWithSurface:(long long)arg1 mechanism:(long long)arg2 ;
+(id)contextWithMechanism:(long long)arg1 ;
-(NSArray *)trackingCodes;
-(long long)mechanism;
-(id)initWithSurface:(long long)arg1 mechanism:(long long)arg2 sessionId:(id)arg3 trackingCodes:(id)arg4 ;
-(id)description;
-(NSString *)sessionId;
-(long long)surface;
@end


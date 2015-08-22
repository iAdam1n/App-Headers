/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:19 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol IGRealtimeSubscriptionDelegate;
@class NSString, NSURL, IGSequence;

@interface IGRealtimeSubscription : NSObject {

	id<IGRealtimeSubscriptionDelegate> _delegate;
	NSString* _topic;
	NSURL* _url;
	IGSequence* _sequence;
	NSString* _authToken;
	unsigned long long _status;

}

@property (assign,nonatomic,__weak) id<IGRealtimeSubscriptionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * topic;                                         //@synthesize topic=_topic - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) IGSequence * sequence;                                    //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,copy,readonly) NSString * authToken;                                     //@synthesize authToken=_authToken - In the implementation block
@property (assign,nonatomic) unsigned long long status;                                       //@synthesize status=_status - In the implementation block
-(void)updateSequence:(id)arg1 ;
-(void)updateWithSubscription:(id)arg1 ;
-(IGSequence *)sequence;
-(void)setDelegate:(id<IGRealtimeSubscriptionDelegate>)arg1 ;
-(id<IGRealtimeSubscriptionDelegate>)delegate;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)updateStatus:(unsigned long long)arg1 ;
-(NSString *)topic;
-(NSString *)authToken;
@end

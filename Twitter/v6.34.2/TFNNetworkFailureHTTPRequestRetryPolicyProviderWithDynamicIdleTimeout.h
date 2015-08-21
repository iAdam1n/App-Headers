/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNHTTPRequestBasicRetryPolicyProvider.h>

@interface TFNNetworkFailureHTTPRequestRetryPolicyProviderWithDynamicIdleTimeout : TFNHTTPRequestBasicRetryPolicyProvider {

	double _lastRetryDelay;
	double _lastRetry;
	double _minRetryDelay;
	double _maxRetryDelay;
	double _minIdleTimeout;
	double _maxIdleTimeout;

}

@property (nonatomic,readonly) double minRetryDelay;               //@synthesize minRetryDelay=_minRetryDelay - In the implementation block
@property (nonatomic,readonly) double maxRetryDelay;               //@synthesize maxRetryDelay=_maxRetryDelay - In the implementation block
@property (nonatomic,readonly) double minIdleTimeout;              //@synthesize minIdleTimeout=_minIdleTimeout - In the implementation block
@property (nonatomic,readonly) double maxIdleTimeout;              //@synthesize maxIdleTimeout=_maxIdleTimeout - In the implementation block
-(BOOL)shouldRetryHTTPRequest:(id)arg1 ;
-(double)delayBeforeRetryForHTTPRequest:(id)arg1 ;
-(double)packetTimeoutOfRetryForHTTPRequest:(id)arg1 ;
-(void)willBeginRetryForHTTPRequest:(id)arg1 ;
-(void)didBeginRetryForHTTPRequest:(id)arg1 ;
-(id)initWithBackoffMinRetryDelay:(double)arg1 maxRetryDelay:(double)arg2 minIdleTimeout:(double)arg3 maxIdleTimeout:(double)arg4 ;
-(double)minRetryDelay;
-(double)maxRetryDelay;
-(double)minIdleTimeout;
-(double)maxIdleTimeout;
-(BOOL)_HTTPRequestPacketTimedOut:(id)arg1 ;
-(void)reset;
@end


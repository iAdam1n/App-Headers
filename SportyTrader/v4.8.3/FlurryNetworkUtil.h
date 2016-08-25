/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface FlurryNetworkUtil : NSObject {

	NSError* lastNetworkOperationError;

}

@property (retain) NSError * lastNetworkOperationError; 
+(int)networkStatus;
+(id)adServerUrl;
+(void)setNetworkLikelyNotReachable;
+(void)setAdLogServerUrl:(id)arg1 ;
+(void)setAdServerUrl:(id)arg1 ;
+(id)adLogServerUrl;
+(BOOL)isNetworkLikelyNotReachable;
+(void)setLastNetworkOperationError:(id)arg1 ;
+(void)initNetworkReachability;
+(void)updateNetworkStatus:(id)arg1 ;
+(void)setPulseServerUrl:(id)arg1 ;
+(void)setPulseCBServerUrl:(id)arg1 ;
+(id)pulseServerUrl;
+(id)pulseCBServerUrl;
+(void)setSecureTransportEnabledDeprecated:(BOOL)arg1 ;
+(void)setAppCloudServerToStaging:(BOOL)arg1 ;
+(id)appCloudServerUrl;
+(id)serverURL;
+(BOOL)isNetworkReachable;
+(void)setServerURL:(id)arg1 ;
+(id)instance;
-(void)setLastNetworkOperationError:(NSError *)arg1 ;
-(NSError *)lastNetworkOperationError;
@end


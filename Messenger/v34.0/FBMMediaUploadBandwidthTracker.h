/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:38 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBSingletonClassProvidable.h>

@class FBCache, FBReachabilityAnnouncer, NSString;

@interface FBMMediaUploadBandwidthTracker : NSObject <FBSingletonClassProvidable> {

	FBCache* _cache;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_getNetworkId;
-(id)_getNetworkQualityMeasurement:(id)arg1 ;
-(FBMUploadConnectionQualityMeasurement)currentUploadConnectionQuality;
-(void)recordUploadFailure;
-(void)addNewBandwidthMeasurement:(double)arg1 ;
-(id)init;
@end


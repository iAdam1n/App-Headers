/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBNetworkConditionSource.h>

@protocol FBNetworkConditionSource <NSObject>
@required
-(unsigned long long)currentReachabilityState;
-(unsigned long long)currentDownloadBandwidthEstimate;
-(unsigned long long)currentUploadBandwidthEstimate;
-(double)currentLatencyEstimate;

@end


@class FBReachabilityAnnouncer, NSString;

@interface FBNetworkConditionSource : NSObject <FBNetworkConditionSource> {

	FBReachabilityAnnouncer* _reachabilityAnnouncer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)currentReachabilityState;
-(unsigned long long)currentDownloadBandwidthEstimate;
-(unsigned long long)currentUploadBandwidthEstimate;
-(double)currentLatencyEstimate;
-(id)initWithReachabilityAnnouncer:(id)arg1 ;
@end


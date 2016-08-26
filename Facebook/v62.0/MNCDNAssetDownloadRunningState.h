/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNCDNAssetDownloadRunning;
@class MNCDNAssetIdentifier;

@interface MNCDNAssetDownloadRunningState : NSObject {

	BOOL _hasRetried;
	id<MNCDNAssetDownloadRunning> _runner;
	MNCDNAssetIdentifier* _assetIdentifier;
	unsigned long long _fulfillmentPolicy;

}

@property (nonatomic,readonly) id<MNCDNAssetDownloadRunning> runner;                     //@synthesize runner=_runner - In the implementation block
@property (nonatomic,copy,readonly) MNCDNAssetIdentifier * assetIdentifier;              //@synthesize assetIdentifier=_assetIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRetried;                                          //@synthesize hasRetried=_hasRetried - In the implementation block
@property (nonatomic,readonly) unsigned long long fulfillmentPolicy;                     //@synthesize fulfillmentPolicy=_fulfillmentPolicy - In the implementation block
-(unsigned long long)fulfillmentPolicy;
-(id)initWithRunner:(id)arg1 assetIdentifier:(id)arg2 withFulfillmentPolicy:(unsigned long long)arg3 ;
-(void)setHasRetried;
-(id<MNCDNAssetDownloadRunning>)runner;
-(MNCDNAssetIdentifier *)assetIdentifier;
-(BOOL)hasRetried;
@end

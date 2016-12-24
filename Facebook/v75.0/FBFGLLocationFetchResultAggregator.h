/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBInvalidating.h>

@protocol FBFGLFetchResultAggregatorDelegate;
@class FBFGLMultiSignalsResult, NSMutableSet, FBFGLLocationServiceConfig, NSString;

@interface FBFGLLocationFetchResultAggregator : NSObject <FBInvalidating> {

	id<FBFGLFetchResultAggregatorDelegate> _locationService;
	FBFGLMultiSignalsResult* _multiSignalsResult;
	NSMutableSet* _fetcherIds;
	mutex _mutex;
	FBFGLLocationServiceConfig* _config;
	BOOL _valid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid;              //@synthesize valid=_valid - In the implementation block
-(void)_dataFetchDone:(id)arg1 ;
-(void)_allFetchersDone;
-(void)setLocation:(id)arg1 fetcherId:(id)arg2 ;
-(id)initWithLocationService:(id)arg1 config:(id)arg2 multiSignalResults:(id)arg3 ;
-(void)setBluetoothData:(id)arg1 fetcherId:(id)arg2 ;
-(void)setCaptiveWifi:(id)arg1 fetcherId:(id)arg2 ;
-(void)invalidate;
-(BOOL)isValid;
@end

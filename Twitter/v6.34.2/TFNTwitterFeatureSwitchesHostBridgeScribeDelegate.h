/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFSFeatureSwitchesEventLogging.h>

@protocol TFNTwitterAuthenticatedScribeDelegate;
@class NSString;

@interface TFNTwitterFeatureSwitchesHostBridgeScribeDelegate : NSObject <TFSFeatureSwitchesEventLogging> {

	id<TFNTwitterAuthenticatedScribeDelegate> _bridgingDelegate;

}

@property (assign,nonatomic,__weak) id<TFNTwitterAuthenticatedScribeDelegate> bridgingDelegate;              //@synthesize bridgingDelegate=_bridgingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logEvent:(id)arg1 parameters:(id)arg2 ;
-(id)initWithAuthenticatedScribeDelegate:(id)arg1 ;
-(void)logDownload;
-(void)logDownloadRequest;
-(id<TFNTwitterAuthenticatedScribeDelegate>)bridgingDelegate;
-(void)indicateForcedRestartWithIsV1:(BOOL)arg1 ;
-(void)logImpressionForExperiment:(id)arg1 bucket:(id)arg2 version:(int)arg3 ;
-(void)setBridgingDelegate:(id<TFNTwitterAuthenticatedScribeDelegate>)arg1 ;
-(id)init;
@end


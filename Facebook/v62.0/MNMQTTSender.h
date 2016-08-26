/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBViewerContextClassProvidable.h>
#import <Facebook/MNMQTTSending.h>

@protocol OS_dispatch_queue;
@class FBMQTTClientManager, FBDelayer, NSObject, NSString;

@interface MNMQTTSender : NSObject <FBViewerContextClassProvidable, MNMQTTSending> {

	FBMQTTClientManager* _clientManager;
	FBDelayer* _configurationDelayer;
	NSObject*<OS_dispatch_queue> _delayerQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)configureWithClientManager:(id)arg1 ;
-(void)sendJSONMessage:(id)arg1 ;
-(void)sendEncodedMessage:(id)arg1 ;
-(void)addPublisher:(id)arg1 ;
-(id)initWithDelayQueue:(id)arg1 ;
-(void)_addPublisher:(id)arg1 ;
-(id)init;
@end

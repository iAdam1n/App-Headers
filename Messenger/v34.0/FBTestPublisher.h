/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBComposerPublisher.h>

@protocol FBComposerPublisherStatusListener;
@class NSArray, NSString;

@interface FBTestPublisher : NSObject <FBComposerPublisher> {

	id<FBComposerPublisherStatusListener> _listener;
	NSArray* _events;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)executePublishOfPublication:(id)arg1 ;
-(void)firePublishEvents:(id)arg1 ;
-(void)retryPublishingPublisherData:(id)arg1 withSource:(unsigned long long)arg2 ;
-(void)cancelPublishingPublication:(id)arg1 withReason:(id)arg2 ;
-(void)pausePublication:(id)arg1 ;
-(void)restorePausedPublication:(id)arg1 ;
-(void)stoppingPublishingDueToUnexpectedReason;
-(id)initWithListener:(id)arg1 ;
-(void)publish:(id)arg1 ;
@end

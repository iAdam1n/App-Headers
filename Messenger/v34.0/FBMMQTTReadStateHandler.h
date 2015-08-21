/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNMQTTMessagingEventHandler.h>
#import <Messenger/FBSessionClassProvidable.h>

@protocol MNAuthenticationManager;
@class FBLazyCreator, NSString;

@interface FBMMQTTReadStateHandler : NSObject <MNMQTTMessagingEventHandler, FBSessionClassProvidable> {

	FBLazyCreator* _threadSetCreator;
	FBLazyCreator* _badgeCounterCreator;
	FBLazyCreator* _announcerCreator;
	id<MNAuthenticationManager> _authenticationManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)didReceivePayload:(id)arg1 forEvent:(id)arg2 ;
-(id)initWithThreadSetCreator:(/*^block*/id)arg1 badgeCounterCreator:(/*^block*/id)arg2 announcerCreator:(/*^block*/id)arg3 authenticationManager:(id)arg4 ;
-(void)_handlePayload:(id)arg1 isUnread:(BOOL)arg2 ;
-(void)handleReadPayload:(id)arg1 ;
-(id)_parseThreadsFromPayload:(id)arg1 ;
-(void)handleUnreadPayload:(id)arg1 ;
@end


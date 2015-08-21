/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNServiceControllable.h>

@protocol FBProvider;
@class MNThreadNavigationCoordinator, FBWebRTCCallInitiator, MNSimpleSingleThreadFetcher, FBMThreadMessageSender, NSString;

@interface MNVoipCoordinator : NSObject <FBClassProvidable, MNServiceControllable> {

	BOOL _stopped;
	id<FBProvider> _callInitiatorProvider;
	id<FBProvider> _threadMessageSenderProvider;
	id<FBProvider> _threadFetcherProvider;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	FBWebRTCCallInitiator* _callInitiator;
	MNSimpleSingleThreadFetcher* _threadFetcher;
	FBMThreadMessageSender* _threadMessageSender;

}

@property (nonatomic,retain) MNThreadNavigationCoordinator * threadNavigationCoordinator;              //@synthesize threadNavigationCoordinator=_threadNavigationCoordinator - In the implementation block
@property (nonatomic,retain) FBWebRTCCallInitiator * callInitiator;                                    //@synthesize callInitiator=_callInitiator - In the implementation block
@property (nonatomic,retain) MNSimpleSingleThreadFetcher * threadFetcher;                              //@synthesize threadFetcher=_threadFetcher - In the implementation block
@property (nonatomic,retain) FBMThreadMessageSender * threadMessageSender;                             //@synthesize threadMessageSender=_threadMessageSender - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)handleIdle;
-(FBWebRTCCallInitiator *)callInitiator;
-(void)setCallInitiator:(FBWebRTCCallInitiator *)arg1 ;
-(void)setThreadFetcher:(MNSimpleSingleThreadFetcher *)arg1 ;
-(MNSimpleSingleThreadFetcher *)threadFetcher;
-(MNThreadNavigationCoordinator *)threadNavigationCoordinator;
-(void)setThreadNavigationCoordinator:(MNThreadNavigationCoordinator *)arg1 ;
-(void)_openVoice:(id)arg1 ;
-(void)_openMessage:(id)arg1 ;
-(void)_sendCannedMessage:(id)arg1 ;
-(void)_startCall:(id)arg1 ;
-(FBMThreadMessageSender *)threadMessageSender;
-(void)setThreadMessageSender:(FBMThreadMessageSender *)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start:(id)arg1 ;
@end


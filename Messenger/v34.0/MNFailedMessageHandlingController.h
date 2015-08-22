/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol MNFailedMessageHandlingListener;
@class MNMessageFailureHandlingManager;

@interface MNFailedMessageHandlingController : NSObject {

	MNMessageFailureHandlingManager* _messageFailureHandlingManager;
	id<MNFailedMessageHandlingListener> _failedMessageHandlingListener;

}
-(void)handleFailedMessage:(id)arg1 fromView:(id)arg2 ;
-(void)_handleResult:(long long)arg1 forFailedMessage:(id)arg2 ;
-(void)_handleSelectRetrySendMessage:(id)arg1 ;
-(void)_handleSelectRetrySendAllMessages;
-(void)_handleCancelFailedMessage:(id)arg1 ;
-(void)_handleViewFailedPhoto:(id)arg1 ;
-(void)_handlePlayFailedVideo:(id)arg1 ;
-(void)_handleListenToFailedAudio:(id)arg1 ;
-(id)initWithMessageFailureHandlingManager:(id)arg1 failedMessageHandlingListener:(id)arg2 ;
@end

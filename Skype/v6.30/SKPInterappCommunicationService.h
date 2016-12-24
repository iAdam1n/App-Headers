/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPInterappCommunicationServiceTransitingDelegate.h>

@protocol SKPInterappCommunicationServiceTransiting;
@class NSMutableDictionary, NSNotificationCenter, NSString;

@interface SKPInterappCommunicationService : NSObject <SKPInterappCommunicationServiceTransitingDelegate> {

	id<SKPInterappCommunicationServiceTransiting> _messenger;
	NSMutableDictionary* _listenerBlocks;
	NSNotificationCenter* _notificationCenter;

}

@property (nonatomic,retain) NSMutableDictionary * listenerBlocks;                                 //@synthesize listenerBlocks=_listenerBlocks - In the implementation block
@property (nonatomic,retain) NSNotificationCenter * notificationCenter;                            //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) id<SKPInterappCommunicationServiceTransiting> messenger;              //@synthesize messenger=_messenger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithApplicationGroupIdentifier:(id)arg1 optionalDirectory:(id)arg2 ;
-(void)setMessenger:(id<SKPInterappCommunicationServiceTransiting>)arg1 ;
-(id<SKPInterappCommunicationServiceTransiting>)messenger;
-(void)notifyIdentifier:(id)arg1 withMessageObject:(id)arg2 ;
-(void)didReceiveMessageNotification:(id)arg1 ;
-(void)unregisterForNotificationsWithIdentifier:(id)arg1 ;
-(id)listenerBlockForIdentifier:(id)arg1 ;
-(BOOL)notifyListenerForMessageWithIdentifier:(id)arg1 message:(id)arg2 ;
-(NSMutableDictionary *)listenerBlocks;
-(void)sendNotificationForMessageWithIdentifier:(id)arg1 ;
-(void)registerForNotificationsWithIdentifier:(id)arg1 ;
-(void)requestDataFromExtensionWithUserInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)passMessageObject:(id)arg1 identifier:(id)arg2 ;
-(void)clearMessageContentsForIdentifier:(id)arg1 ;
-(void)clearMessageContentsForIdentifierWithPrefix:(id)arg1 ;
-(void)clearAllMessageContents;
-(void)listenForMessageWithIdentifier:(id)arg1 listener:(/*^block*/id)arg2 ;
-(void)stopListeningForMessageWithIdentifier:(id)arg1 ;
-(id)archiveObject:(id)arg1 setClassName:(id)arg2 forClass:(Class)arg3 ;
-(id)unarchiveData:(id)arg1 setClass:(Class)arg2 forClassName:(id)arg3 ;
-(void)setListenerBlocks:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(NSNotificationCenter *)notificationCenter;
-(id)messageWithIdentifier:(id)arg1 ;
@end

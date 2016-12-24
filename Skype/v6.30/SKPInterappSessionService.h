/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPInterappCommunicationServiceTransiting.h>
#import <Skype/WCSessionDelegate.h>

@protocol SKPInterappCommunicationServiceTransitingDelegate;
@class WCSession, NSMutableDictionary, NSString;

@interface SKPInterappSessionService : NSObject <SKPInterappCommunicationServiceTransiting, WCSessionDelegate> {

	WCSession* _session;
	id<SKPInterappCommunicationServiceTransitingDelegate> _delegate;
	double _lastUpdate;
	NSMutableDictionary* _lastContext;

}

@property (nonatomic,retain) WCSession * session;                                                                //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) double lastUpdate;                                                                  //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lastContext;                                                  //@synthesize lastContext=_lastContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKPInterappCommunicationServiceTransitingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)deleteContentForAllMessages;
-(BOOL)notifyIdentifier:(id)arg1 withMessageObject:(id)arg2 ;
-(id)messageObjectForIdentifier:(id)arg1 ;
-(BOOL)writeMessageObject:(id)arg1 forIdentifier:(id)arg2 ;
-(void)deleteContentForIdentifier:(id)arg1 ;
-(void)deleteContentForIdentifierWithPrefix:(id)arg1 ;
-(BOOL)shouldRegisterForNotifications;
-(void)requestDataFromExtensionWithUserInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)init;
-(void)setDelegate:(id<SKPInterappCommunicationServiceTransitingDelegate>)arg1 ;
-(id<SKPInterappCommunicationServiceTransitingDelegate>)delegate;
-(double)lastUpdate;
-(void)setSession:(WCSession *)arg1 ;
-(void)setLastContext:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)lastContext;
-(WCSession *)session;
-(void)session:(id)arg1 activationDidCompleteWithState:(long long)arg2 error:(id)arg3 ;
-(void)session:(id)arg1 didReceiveMessage:(id)arg2 replyHandler:(/*^block*/id)arg3 ;
-(void)session:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)session:(id)arg1 didReceiveApplicationContext:(id)arg2 ;
-(void)setLastUpdate:(double)arg1 ;
@end

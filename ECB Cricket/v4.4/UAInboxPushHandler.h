/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:19:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/08508F9E-DA8B-4AFD-AB09-7444BD482D44/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UAInboxPushHandlerDelegate;
@class NSString;

@interface UAInboxPushHandler : NSObject {

	BOOL _hasLaunchMessage;
	NSString* _viewingMessageID;
	id<UAInboxPushHandlerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL hasLaunchMessage;                                       //@synthesize hasLaunchMessage=_hasLaunchMessage - In the implementation block
@property (nonatomic,copy) NSString * viewingMessageID;                                   //@synthesize viewingMessageID=_viewingMessageID - In the implementation block
@property (assign,nonatomic,__weak) id<UAInboxPushHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSString *)viewingMessageID;
-(BOOL)hasLaunchMessage;
-(void)setHasLaunchMessage:(BOOL)arg1 ;
-(void)setViewingMessageID:(NSString *)arg1 ;
-(void)messageListLoadSucceeded;
-(void)setDelegate:(id<UAInboxPushHandlerDelegate>)arg1 ;
-(id<UAInboxPushHandlerDelegate>)delegate;
@end

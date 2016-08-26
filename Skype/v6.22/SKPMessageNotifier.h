/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/ALESkyLibProtocol.h>

@class NSDate, NSString, NSMutableArray;

@interface SKPMessageNotifier : NSObject <ALESkyLibProtocol> {

	BOOL _isObserving;
	NSDate* _sessionStartDate;
	NSString* _loggedInSkypeName;
	NSDate* _foregroundTime;
	NSMutableArray* _messagePresenters;

}

@property (assign,nonatomic) BOOL isObserving;                                //@synthesize isObserving=_isObserving - In the implementation block
@property (nonatomic,readonly) NSDate * sessionStartDate;                     //@synthesize sessionStartDate=_sessionStartDate - In the implementation block
@property (nonatomic,readonly) NSString * loggedInSkypeName;                  //@synthesize loggedInSkypeName=_loggedInSkypeName - In the implementation block
@property (nonatomic,retain) NSDate * foregroundTime;                         //@synthesize foregroundTime=_foregroundTime - In the implementation block
@property (nonatomic,retain) NSMutableArray * messagePresenters;              //@synthesize messagePresenters=_messagePresenters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)OnMessage:(id)arg1 andMessageobjectid:(unsigned)arg2 andChangesinboxtimestamp:(BOOL)arg3 andSupersedeshistorymessageobjectid:(unsigned)arg4 andConversationobjectid:(unsigned)arg5 andShownotification:(BOOL)arg6 ;
-(void)setForegroundTime:(NSDate *)arg1 ;
-(void)setMessagePresenters:(NSMutableArray *)arg1 ;
-(NSMutableArray *)messagePresenters;
-(void)processMessage:(id)arg1 conversation:(id)arg2 ;
-(NSString *)loggedInSkypeName;
-(BOOL)shouldNotifyAboutMessage:(id)arg1 conversation:(id)arg2 ;
-(NSDate *)foregroundTime;
-(void)addMessagePresenter:(id)arg1 ;
-(BOOL)wasMessageReceivedInTheBackground:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)debugDescription;
-(void)invalidate;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(BOOL)isObserving;
-(void)setIsObserving:(BOOL)arg1 ;
-(NSDate *)sessionStartDate;
@end

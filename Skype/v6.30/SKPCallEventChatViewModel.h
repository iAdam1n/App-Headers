/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPChatViewModel.h>

@class NSString, SKPCallEventCompoundMessage;

@interface SKPCallEventChatViewModel : SKPChatViewModel {

	BOOL _highlighted;
	NSString* _icon;
	NSString* _messageText;
	NSString* _duration;
	long long _failureReason;
	long long _eventType;

}

@property (nonatomic,readonly) long long failureReason;                            //@synthesize failureReason=_failureReason - In the implementation block
@property (nonatomic,readonly) SKPCallEventCompoundMessage * message; 
@property (nonatomic,copy) NSString * icon;                                        //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * messageText;                                 //@synthesize messageText=_messageText - In the implementation block
@property (nonatomic,copy) NSString * duration;                                    //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL highlighted;                                     //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) long long eventType;                                  //@synthesize eventType=_eventType - In the implementation block
+(long long)encodingVersion;
+(Class)defaultCellClass;
+(BOOL)highlightForEventType:(long long)arg1 ;
+(id)messageTextForEventType:(long long)arg1 eventCount:(unsigned long long)arg2 duration:(unsigned long long)arg3 ;
+(id)iconForEventType:(long long)arg1 ;
+(id)observedKeyPaths;
-(long long)refreshDueToChangeInModelProperty:(id)arg1 ;
-(id)avatarImage;
-(id)authorSkypeName;
-(BOOL)representsEndedCallAndContainsTimestamp:(id)arg1 ;
-(void)refreshDuration;
-(void)refreshMessageText;
-(void)refreshIcon;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)duration;
-(void)setDuration:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setIcon:(NSString *)arg1 ;
-(SKPCallEventCompoundMessage *)message;
-(BOOL)highlighted;
-(NSString *)icon;
-(long long)eventType;
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(void)setEventType:(long long)arg1 ;
-(id)author;
-(long long)failureReason;
@end

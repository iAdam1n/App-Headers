/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSNumber;

@interface TGChatMessageListView : NSObject {

	BOOL _maybeHasMessagesOnTop;
	BOOL _isChannel;
	BOOL _isChannelGroup;
	NSArray* _messages;
	NSNumber* _earlierReferenceMessageId;
	NSNumber* _laterReferenceMessageId;
	unsigned long long _rangeCount;

}

@property (nonatomic,readonly) NSArray * messages;                                //@synthesize messages=_messages - In the implementation block
@property (nonatomic,readonly) NSNumber * earlierReferenceMessageId;              //@synthesize earlierReferenceMessageId=_earlierReferenceMessageId - In the implementation block
@property (nonatomic,readonly) NSNumber * laterReferenceMessageId;                //@synthesize laterReferenceMessageId=_laterReferenceMessageId - In the implementation block
@property (assign,nonatomic) unsigned long long rangeCount;                       //@synthesize rangeCount=_rangeCount - In the implementation block
@property (assign,nonatomic) BOOL maybeHasMessagesOnTop;                          //@synthesize maybeHasMessagesOnTop=_maybeHasMessagesOnTop - In the implementation block
@property (nonatomic,readonly) NSArray * clippedMessages; 
@property (assign,nonatomic) BOOL isChannel;                                      //@synthesize isChannel=_isChannel - In the implementation block
@property (assign,nonatomic) BOOL isChannelGroup;                                 //@synthesize isChannelGroup=_isChannelGroup - In the implementation block
-(BOOL)isChannel;
-(BOOL)isChannelGroup;
-(void)setIsChannel:(BOOL)arg1 ;
-(void)setIsChannelGroup:(BOOL)arg1 ;
-(NSNumber *)laterReferenceMessageId;
-(id)initWithMessages:(id)arg1 earlierReferenceMessageId:(id)arg2 laterReferenceMessageId:(id)arg3 ;
-(void)setRangeCount:(unsigned long long)arg1 ;
-(BOOL)maybeHasMessagesOnTop;
-(void)setMaybeHasMessagesOnTop:(BOOL)arg1 ;
-(NSArray *)clippedMessages;
-(NSNumber *)earlierReferenceMessageId;
-(unsigned long long)rangeCount;
-(NSArray *)messages;
@end

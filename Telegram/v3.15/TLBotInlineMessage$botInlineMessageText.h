/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TLBotInlineMessage.h>

@class NSString, NSArray, TLReplyMarkup;

@interface TLBotInlineMessage$botInlineMessageText : TLBotInlineMessage {

	BOOL _no_webpage;
	int _flags;
	NSString* _message;
	NSArray* _entities;
	TLReplyMarkup* _reply_markup;

}

@property (assign,nonatomic) int flags;                                 //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSString * message;                        //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL no_webpage;                           //@synthesize no_webpage=_no_webpage - In the implementation block
@property (nonatomic,retain) NSArray * entities;                        //@synthesize entities=_entities - In the implementation block
@property (nonatomic,retain) TLReplyMarkup * reply_markup;              //@synthesize reply_markup=_reply_markup - In the implementation block
-(id)TLdeserialize:(id)arg1 signature:(int)arg2 environment:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(void)TLserialize:(id)arg1 ;
-(BOOL)no_webpage;
-(void)setNo_webpage:(BOOL)arg1 ;
-(TLReplyMarkup *)reply_markup;
-(void)setReply_markup:(TLReplyMarkup *)arg1 ;
-(void)setEntities:(NSArray *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSArray *)entities;
-(BOOL)isMedia;
-(void)setFlags:(int)arg1 ;
-(int)flags;
@end

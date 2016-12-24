/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGPreparedMessage.h>

@class NSString, TGWebPageMediaAttachment, NSArray;

@interface TGPreparedTextMessage : TGPreparedMessage {

	BOOL _disableLinkPreviews;
	NSString* _text;
	TGWebPageMediaAttachment* _parsedWebpage;
	NSArray* _entities;

}

@property (nonatomic,retain) NSString * text;                                       //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL disableLinkPreviews;                              //@synthesize disableLinkPreviews=_disableLinkPreviews - In the implementation block
@property (nonatomic,retain) TGWebPageMediaAttachment * parsedWebpage;              //@synthesize parsedWebpage=_parsedWebpage - In the implementation block
@property (nonatomic,retain) NSArray * entities;                                    //@synthesize entities=_entities - In the implementation block
-(id)initWithText:(id)arg1 replyMessage:(id)arg2 disableLinkPreviews:(BOOL)arg3 parsedWebpage:(id)arg4 entities:(id)arg5 botContextResult:(id)arg6 replyMarkup:(id)arg7 ;
-(BOOL)disableLinkPreviews;
-(void)setDisableLinkPreviews:(BOOL)arg1 ;
-(TGWebPageMediaAttachment *)parsedWebpage;
-(void)setParsedWebpage:(TGWebPageMediaAttachment *)arg1 ;
-(void)setEntities:(NSArray *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)message;
-(NSArray *)entities;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TLBotInlineResult.h>

@class NSString, TLPhoto, TLDocument, TLBotInlineMessage;

@interface TLBotInlineResult$botInlineMediaResult : TLBotInlineResult {

	int _flags;
	NSString* _n_id;
	NSString* _type;
	TLPhoto* _photo;
	TLDocument* _document;
	NSString* _title;
	NSString* _n_description;
	TLBotInlineMessage* _send_message;

}

@property (assign,nonatomic) int flags;                                      //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSString * n_id;                                //@synthesize n_id=_n_id - In the implementation block
@property (nonatomic,retain) NSString * type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) TLPhoto * photo;                                //@synthesize photo=_photo - In the implementation block
@property (nonatomic,retain) TLDocument * document;                          //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * n_description;                       //@synthesize n_description=_n_description - In the implementation block
@property (nonatomic,retain) TLBotInlineMessage * send_message;              //@synthesize send_message=_send_message - In the implementation block
-(id)TLdeserialize:(id)arg1 signature:(int)arg2 environment:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(void)TLserialize:(id)arg1 ;
-(void)setN_id:(NSString *)arg1 ;
-(NSString *)n_id;
-(NSString *)n_description;
-(TLBotInlineMessage *)send_message;
-(void)setSend_message:(TLBotInlineMessage *)arg1 ;
-(void)setN_description:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(TLDocument *)document;
-(void)setDocument:(TLDocument *)arg1 ;
-(void)setPhoto:(TLPhoto *)arg1 ;
-(TLPhoto *)photo;
-(void)setFlags:(int)arg1 ;
-(int)flags;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TLBotInlineMessage.h>

@class TLGeoPoint, NSString, TLReplyMarkup;

@interface TLBotInlineMessage$botInlineMessageMediaVenue : TLBotInlineMessage {

	int _flags;
	TLGeoPoint* _geo_point;
	NSString* _title;
	NSString* _address;
	NSString* _provider;
	NSString* _venue_id;
	TLReplyMarkup* _reply_markup;

}

@property (assign,nonatomic) int flags;                                 //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) TLGeoPoint * geo_point;                    //@synthesize geo_point=_geo_point - In the implementation block
@property (nonatomic,retain) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * address;                        //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSString * provider;                       //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSString * venue_id;                       //@synthesize venue_id=_venue_id - In the implementation block
@property (nonatomic,retain) TLReplyMarkup * reply_markup;              //@synthesize reply_markup=_reply_markup - In the implementation block
-(id)TLdeserialize:(id)arg1 signature:(int)arg2 environment:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(void)TLserialize:(id)arg1 ;
-(void)setGeo_point:(TLGeoPoint *)arg1 ;
-(void)setVenue_id:(NSString *)arg1 ;
-(NSString *)venue_id;
-(TLReplyMarkup *)reply_markup;
-(void)setReply_markup:(TLReplyMarkup *)arg1 ;
-(TLGeoPoint *)geo_point;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)provider;
-(void)setAddress:(NSString *)arg1 ;
-(void)setProvider:(NSString *)arg1 ;
-(NSString *)address;
-(void)setFlags:(int)arg1 ;
-(int)flags;
@end

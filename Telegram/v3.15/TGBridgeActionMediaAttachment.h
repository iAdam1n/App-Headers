/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGBridgeMediaAttachment.h>

@class NSDictionary;

@interface TGBridgeActionMediaAttachment : TGBridgeMediaAttachment {

	int _actionType;
	NSDictionary* _actionData;

}

@property (assign,nonatomic) int actionType;                         //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,retain) NSDictionary * actionData;              //@synthesize actionData=_actionData - In the implementation block
+(id)attachmentWithTGActionMediaAttachment:(id)arg1 ;
+(long long)mediaType;
-(NSDictionary *)actionData;
-(void)setActionData:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setActionType:(int)arg1 ;
-(int)actionType;
@end

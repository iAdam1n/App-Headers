/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface SKPSwiftCardCollection : NSObject <NSCoding> {

	NSString* _messageType;
	NSArray* _cards;

}

@property (nonatomic,copy) NSString * messageType;              //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,retain) NSArray * cards;                   //@synthesize cards=_cards - In the implementation block
+(id)cardsWithJSON:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithJSONString:(id)arg1 ;
-(void)setCards:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setMessageType:(NSString *)arg1 ;
-(NSString *)messageType;
-(NSArray *)cards;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TGSpotlightIndexItem : NSObject <NSCopying> {

	unsigned long long _hash;
	long long _peerId;
	NSString* _title;
	NSString* _avatarUrl;

}

@property (nonatomic,readonly) long long peerId;                  //@synthesize peerId=_peerId - In the implementation block
@property (nonatomic,readonly) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * avatarUrl;              //@synthesize avatarUrl=_avatarUrl - In the implementation block
-(NSString *)avatarUrl;
-(id)initWithUser:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)peerId;
-(id)initWithConversation:(id)arg1 ;
@end

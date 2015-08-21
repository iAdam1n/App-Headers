/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:39 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray, FBMQTTEncodedMessage, NSNumber;

@interface FBMQTTWorkQueueItem : NSObject {

	int _type;
	NSArray* _patterns;
	FBMQTTEncodedMessage* _message;
	NSNumber* _messageID;

}

@property (assign,nonatomic) int type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * patterns;                            //@synthesize patterns=_patterns - In the implementation block
@property (nonatomic,retain) FBMQTTEncodedMessage * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSNumber * messageID;                          //@synthesize messageID=_messageID - In the implementation block
-(NSArray *)patterns;
-(void)setPatterns:(NSArray *)arg1 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(FBMQTTEncodedMessage *)message;
-(void)setMessage:(FBMQTTEncodedMessage *)arg1 ;
-(void)setMessageID:(NSNumber *)arg1 ;
-(NSNumber *)messageID;
@end


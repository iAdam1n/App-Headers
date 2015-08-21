/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHTweetbotObject.h>

@class NSArray, NSDate, NSString, PTHTweetbotUser, NSAttributedString;

@interface PTHTweetbotDirectMessage : PTHTweetbotObject {

	NSArray* _entities;
	NSDate* _createdAt;
	NSString* _text;
	long long _senderUserTID;
	long long _recipientUserTID;
	PTHTweetbotUser* _senderUser;
	PTHTweetbotUser* _recipientUser;

}

@property (nonatomic,copy) NSDate * createdAt;                                          //@synthesize createdAt=_createdAt - In the implementation block
@property (nonatomic,copy) NSString * text;                                             //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long senderUserTID;                                   //@synthesize senderUserTID=_senderUserTID - In the implementation block
@property (assign,nonatomic) long long recipientUserTID;                                //@synthesize recipientUserTID=_recipientUserTID - In the implementation block
@property (nonatomic,__weak,readonly) NSString * decodedText; 
@property (nonatomic,__weak,readonly) NSAttributedString * attributedText; 
@property (nonatomic,readonly) BOOL isReceivedMessage; 
@property (nonatomic,readonly) BOOL isSentMessage; 
@property (nonatomic,readonly) NSArray * entities; 
@property (nonatomic,readonly) BOOL hasMedia; 
@property (nonatomic,retain) PTHTweetbotUser * senderUser;                              //@synthesize senderUser=_senderUser - In the implementation block
@property (nonatomic,retain) PTHTweetbotUser * recipientUser;                           //@synthesize recipientUser=_recipientUser - In the implementation block
+(void)postDraft:(id)arg1 result:(/*^block*/id)arg2 ;
-(BOOL)isReceivedMessage;
-(void)destroy:(/*^block*/id)arg1 ;
-(PTHTweetbotUser *)senderUser;
-(NSString *)decodedText;
-(BOOL)hasString:(id)arg1 ;
-(id)emailHTML;
-(void)updateFromDictionary:(id)arg1 ;
-(BOOL)isSentMessage;
-(long long)recipientUserTID;
-(long long)senderUserTID;
-(void)setSenderUser:(PTHTweetbotUser *)arg1 ;
-(void)setSenderUserTID:(long long)arg1 ;
-(PTHTweetbotUser *)recipientUser;
-(void)setRecipientUser:(PTHTweetbotUser *)arg1 ;
-(void)setRecipientUserTID:(long long)arg1 ;
-(void)refresh:(/*^block*/id)arg1 ;
-(BOOL)hasMedia;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSAttributedString *)attributedText;
-(void)setAccount:(id)arg1 ;
-(void)setCreatedAt:(NSDate *)arg1 ;
-(NSArray *)entities;
-(NSDate *)createdAt;
@end


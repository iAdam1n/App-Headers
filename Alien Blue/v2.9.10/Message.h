/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/Comment.h>

@class NSString;

@interface Message : Comment {

	BOOL _wasComment;
	BOOL _isUnread;
	BOOL _i_isModMail;
	unsigned long long _firstMessageIdent;
	NSString* _firstMessageName;
	NSString* _destinationUser;
	NSString* _subject;
	NSString* _contextUrl;
	NSString* _linkTitle;
	Message* _i_parentMessage;

}

@property (assign) BOOL wasComment;                                   //@synthesize wasComment=_wasComment - In the implementation block
@property (assign) unsigned long long firstMessageIdent;              //@synthesize firstMessageIdent=_firstMessageIdent - In the implementation block
@property (copy) NSString * firstMessageName;                         //@synthesize firstMessageName=_firstMessageName - In the implementation block
@property (copy) NSString * destinationUser;                          //@synthesize destinationUser=_destinationUser - In the implementation block
@property (copy) NSString * subject;                                  //@synthesize subject=_subject - In the implementation block
@property (copy) NSString * contextUrl;                               //@synthesize contextUrl=_contextUrl - In the implementation block
@property (copy) NSString * linkTitle;                                //@synthesize linkTitle=_linkTitle - In the implementation block
@property (assign) BOOL isUnread;                                     //@synthesize isUnread=_isUnread - In the implementation block
@property (readonly) NSString * titleForPresentation; 
@property (readonly) NSString * metadataForPresentation; 
@property (assign) BOOL i_isModMail;                                  //@synthesize i_isModMail=_i_isModMail - In the implementation block
@property (__weak) Message * i_parentMessage;                         //@synthesize i_parentMessage=_i_parentMessage - In the implementation block
+(id)fetchLastSubmittedMessageCommentForUser:(id)arg1 onComplete:(/*^block*/id)arg2 ;
+(id)fetchMessagesForPath:(id)arg1 params:(id)arg2 onComplete:(/*^block*/id)arg3 ;
+(void)flattenMessagesDepthFirst:(id)arg1 newMessages:(id)arg2 parent:(id)arg3 ;
+(void)processModeratorMailUnreadStatusForMessages:(id)arg1 ;
+(void)didProcessModeratorMail;
-(NSString *)titleForPresentation;
-(BOOL)isUnread;
-(void)setIsUnread:(BOOL)arg1 ;
-(BOOL)i_isModMail;
-(BOOL)wasComment;
-(void)preprocessStyles;
-(void)setWasComment:(BOOL)arg1 ;
-(void)setLinkTitle:(NSString *)arg1 ;
-(void)setFirstMessageIdent:(unsigned long long)arg1 ;
-(void)setFirstMessageName:(NSString *)arg1 ;
-(void)setDestinationUser:(NSString *)arg1 ;
-(void)setContextUrl:(NSString *)arg1 ;
-(NSString *)linkTitle;
-(NSString *)metadataForPresentation;
-(unsigned long long)firstMessageIdent;
-(NSString *)firstMessageName;
-(NSString *)destinationUser;
-(NSString *)contextUrl;
-(void)setI_isModMail:(BOOL)arg1 ;
-(Message *)i_parentMessage;
-(void)setI_parentMessage:(Message *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)markAsRead;
@end

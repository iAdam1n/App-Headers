/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBNetworkerRequest.h>

@class NSString, FBMessagePreparedAttachment, NSArray;

@interface FBComposerMessagePublishRequest : FBNetworkerRequest {

	NSString* _attachmentFBID;
	unsigned long long _attemptNumber;
	FBMessagePreparedAttachment* _preparedAttachment;
	NSString* _message;
	NSArray* _recipients;
	NSArray* _loggingTags;
	NSArray* _trackingCodes;

}

@property (nonatomic,copy) NSString * message;                                            //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSArray * recipients;                                          //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy) NSArray * loggingTags;                                         //@synthesize loggingTags=_loggingTags - In the implementation block
@property (nonatomic,copy) NSArray * trackingCodes;                                       //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,retain) NSString * attachmentFBID;                                   //@synthesize attachmentFBID=_attachmentFBID - In the implementation block
@property (nonatomic,readonly) unsigned long long attemptNumber;                          //@synthesize attemptNumber=_attemptNumber - In the implementation block
@property (nonatomic,copy) FBMessagePreparedAttachment * preparedAttachment;              //@synthesize preparedAttachment=_preparedAttachment - In the implementation block
-(NSString *)attachmentFBID;
-(id)initWithMessage:(id)arg1 recipients:(id)arg2 loggingTags:(id)arg3 trackingCodes:(id)arg4 callbackPerformer:(id)arg5 ;
-(void)setPreparedAttachment:(FBMessagePreparedAttachment *)arg1 ;
-(id)networkRequest;
-(NSArray *)trackingCodes;
-(void)setTrackingCodes:(NSArray *)arg1 ;
-(void)setAttachmentFBID:(NSString *)arg1 ;
-(FBMessagePreparedAttachment *)preparedAttachment;
-(NSArray *)loggingTags;
-(void)setLoggingTags:(NSArray *)arg1 ;
-(unsigned long long)attemptNumber;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
@end

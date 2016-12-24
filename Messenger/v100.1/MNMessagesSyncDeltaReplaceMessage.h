/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:36 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNMessagesSyncDeltaNewMessage, NSString;

@interface MNMessagesSyncDeltaReplaceMessage : NSObject <TBase, NSCoding> {

	MNMessagesSyncDeltaNewMessage* __newMessage;
	NSString* __replacedMessageId;
	BOOL __newMessage_isset;
	BOOL __replacedMessageId_isset;

}

@property (setter=setNewMessage:,getter=newMessage,nonatomic,retain) MNMessagesSyncDeltaNewMessage * newMessage; 
@property (setter=setReplacedMessageId:,getter=replacedMessageId,nonatomic,retain) NSString * replacedMessageId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(NSString *)replacedMessageId;
-(void)setNewMessage:(MNMessagesSyncDeltaNewMessage *)arg1 ;
-(void)setReplacedMessageId:(NSString *)arg1 ;
-(id)initWithNewMessage:(id)arg1 replacedMessageId:(id)arg2 ;
-(BOOL)newMessageIsSet;
-(void)unsetNewMessage;
-(BOOL)replacedMessageIdIsSet;
-(void)unsetReplacedMessageId;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(MNMessagesSyncDeltaNewMessage *)newMessage;
-(void)write:(id)arg1 ;
@end

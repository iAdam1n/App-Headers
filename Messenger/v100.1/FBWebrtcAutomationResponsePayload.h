/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBWebrtcAutomationResponsePayload : NSObject <TBase, NSCoding> {

	int __status;
	int __requestType;
	int __requestId;
	NSString* __message;
	BOOL __status_isset;
	BOOL __requestType_isset;
	BOOL __requestId_isset;
	BOOL __message_isset;

}

@property (assign,setter=setStatus:,getter=status,nonatomic) int status; 
@property (assign,setter=setRequestType:,getter=requestType,nonatomic) int requestType; 
@property (assign,setter=setRequestId:,getter=requestId,nonatomic) int requestId; 
@property (setter=setMessage:,getter=message,nonatomic,retain) NSString * message; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)requestTypeIsSet;
-(void)unsetRequestType;
-(BOOL)requestIdIsSet;
-(void)unsetRequestId;
-(id)initWithStatus:(int)arg1 requestType:(int)arg2 requestId:(int)arg3 message:(id)arg4 ;
-(BOOL)statusIsSet;
-(void)unsetStatus;
-(BOOL)messageIsSet;
-(void)unsetMessage;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)validate;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setRequestType:(int)arg1 ;
-(int)requestId;
-(void)setRequestId:(int)arg1 ;
-(int)requestType;
-(void)write:(id)arg1 ;
@end

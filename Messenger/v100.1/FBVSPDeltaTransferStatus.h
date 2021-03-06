/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBVSPDeltaTransferStatus : NSObject <TBase, NSCoding> {

	long long __transferFbId;
	long long __timestampMs;
	int __newStatus;
	int __newSenderStatus;
	int __newReceiverStatus;
	BOOL __transferFbId_isset;
	BOOL __timestampMs_isset;
	BOOL __newStatus_isset;
	BOOL __newSenderStatus_isset;
	BOOL __newReceiverStatus_isset;

}

@property (assign,setter=setTransferFbId:,getter=transferFbId,nonatomic) long long transferFbId; 
@property (assign,setter=setTimestampMs:,getter=timestampMs,nonatomic) long long timestampMs; 
@property (assign,setter=setNewStatus:,getter=newStatus,nonatomic) int newStatus; 
@property (assign,setter=setNewSenderStatus:,getter=newSenderStatus,nonatomic) int newSenderStatus; 
@property (assign,setter=setNewReceiverStatus:,getter=newReceiverStatus,nonatomic) int newReceiverStatus; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setTimestampMs:(long long)arg1 ;
-(long long)timestampMs;
-(BOOL)timestampMsIsSet;
-(void)unsetTimestampMs;
-(void)setTransferFbId:(long long)arg1 ;
-(long long)transferFbId;
-(BOOL)transferFbIdIsSet;
-(void)unsetTransferFbId;
-(void)setNewStatus:(int)arg1 ;
-(int)newStatus;
-(BOOL)newStatusIsSet;
-(void)unsetNewStatus;
-(void)setNewSenderStatus:(int)arg1 ;
-(void)setNewReceiverStatus:(int)arg1 ;
-(id)initWithTransferFbId:(long long)arg1 timestampMs:(long long)arg2 newStatus:(int)arg3 newSenderStatus:(int)arg4 newReceiverStatus:(int)arg5 ;
-(int)newSenderStatus;
-(BOOL)newSenderStatusIsSet;
-(void)unsetNewSenderStatus;
-(int)newReceiverStatus;
-(BOOL)newReceiverStatusIsSet;
-(void)unsetNewReceiverStatus;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end


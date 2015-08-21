/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <Messenger/NSCoding.h>

@class NSMutableArray, MNMessagesSyncFailedSend, NSString;

@interface MNMessagesSyncClientPayload : NSObject <TBase, NSCoding> {

	NSMutableArray* __deltas;
	long long __firstDeltaSeqId;
	long long __lastIssuedSeqId;
	long long __queueEntityId;
	MNMessagesSyncFailedSend* __failedSend;
	NSString* __syncToken;
	NSString* __errorCode;
	BOOL __deltas_isset;
	BOOL __firstDeltaSeqId_isset;
	BOOL __lastIssuedSeqId_isset;
	BOOL __queueEntityId_isset;
	BOOL __failedSend_isset;
	BOOL __syncToken_isset;
	BOOL __errorCode_isset;

}

@property (setter=setDeltas:,getter=deltas,nonatomic,retain) NSMutableArray * deltas; 
@property (assign,setter=setFirstDeltaSeqId:,getter=firstDeltaSeqId,nonatomic) long long firstDeltaSeqId; 
@property (assign,setter=setLastIssuedSeqId:,getter=lastIssuedSeqId,nonatomic) long long lastIssuedSeqId; 
@property (assign,setter=setQueueEntityId:,getter=queueEntityId,nonatomic) long long queueEntityId; 
@property (setter=setFailedSend:,getter=failedSend,nonatomic,retain) MNMessagesSyncFailedSend * failedSend; 
@property (setter=setSyncToken:,getter=syncToken,nonatomic,retain) NSString * syncToken; 
@property (setter=setErrorCode:,getter=errorCode,nonatomic,retain) NSString * errorCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(BOOL)syncTokenIsSet;
-(void)unsetSyncToken;
-(BOOL)errorCodeIsSet;
-(void)unsetErrorCode;
-(void)setDeltas:(NSMutableArray *)arg1 ;
-(void)setFirstDeltaSeqId:(long long)arg1 ;
-(void)setLastIssuedSeqId:(long long)arg1 ;
-(void)setQueueEntityId:(long long)arg1 ;
-(void)setFailedSend:(MNMessagesSyncFailedSend *)arg1 ;
-(id)initWithDeltas:(id)arg1 firstDeltaSeqId:(long long)arg2 lastIssuedSeqId:(long long)arg3 queueEntityId:(long long)arg4 failedSend:(id)arg5 syncToken:(id)arg6 errorCode:(id)arg7 ;
-(NSMutableArray *)deltas;
-(BOOL)deltasIsSet;
-(void)unsetDeltas;
-(long long)firstDeltaSeqId;
-(BOOL)firstDeltaSeqIdIsSet;
-(void)unsetFirstDeltaSeqId;
-(long long)lastIssuedSeqId;
-(BOOL)lastIssuedSeqIdIsSet;
-(void)unsetLastIssuedSeqId;
-(long long)queueEntityId;
-(BOOL)queueEntityIdIsSet;
-(void)unsetQueueEntityId;
-(MNMessagesSyncFailedSend *)failedSend;
-(BOOL)failedSendIsSet;
-(void)unsetFailedSend;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
-(NSString *)syncToken;
-(void)setSyncToken:(NSString *)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(NSString *)errorCode;
@end


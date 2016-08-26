/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface WAPendingPrekeyTask : NSObject {

	NSMutableSet* _jidSet;
	NSMutableDictionary* _info;
	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL readyToSend; 
+(id)taskForMessageWithStanzaId:(id)arg1 chatJid:(id)arg2 participant:(id)arg3 waitingOnJids:(id)arg4 ;
+(id)taskForVoIPCallWithJid:(id)arg1 plaintextKeyData:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)initWithTaskType:(unsigned long long)arg1 waitingOnJids:(id)arg2 ;
-(void)retrieveMessageTaskStanzaId:(out id*)arg1 chatJid:(out id*)arg2 participant:(out id*)arg3 ;
-(void)retrieveVoIPTaskJid:(out id*)arg1 plaintextKeyData:(out id*)arg2 completionBlock:(out /*^block*/id*)arg3 ;
-(void)finishedWaitingForJid:(id)arg1 ;
-(unsigned long long)type;
-(BOOL)readyToSend;
@end

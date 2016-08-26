/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TLMetaRpc.h>

@class TLInputPeer, NSString, NSArray;

@interface TLRPCmessages_saveDraft : TLMetaRpc {

	BOOL _no_webpage;
	int _reply_to_msg_id;
	TLInputPeer* _peer;
	NSString* _message;
	NSArray* _entities;

}

@property (assign,nonatomic) BOOL no_webpage;                  //@synthesize no_webpage=_no_webpage - In the implementation block
@property (assign,nonatomic) int reply_to_msg_id;              //@synthesize reply_to_msg_id=_reply_to_msg_id - In the implementation block
@property (nonatomic,retain) TLInputPeer * peer;               //@synthesize peer=_peer - In the implementation block
@property (nonatomic,retain) NSString * message;               //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSArray * entities;               //@synthesize entities=_entities - In the implementation block
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLdeserialize:(id)arg1 signature:(int)arg2 environment:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
-(void)TLserialize:(id)arg1 ;
-(int)impliedResponseSignature;
-(int)layerVersion;
-(void)setReply_to_msg_id:(int)arg1 ;
-(int)reply_to_msg_id;
-(BOOL)no_webpage;
-(void)setNo_webpage:(BOOL)arg1 ;
-(void)setEntities:(NSArray *)arg1 ;
-(TLInputPeer *)peer;
-(void)setPeer:(TLInputPeer *)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(Class)responseClass;
-(NSArray *)entities;
@end

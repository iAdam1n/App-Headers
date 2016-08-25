/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WAChatSession, WAWebClientRecentMessages;

@interface XMPPRequestWebClientChatSessionState : NSObject {

	BOOL _archived;
	BOOL _needsClear;
	BOOL _readOnly;
	BOOL _active;
	BOOL _readAhead;
	BOOL _spam;
	NSString* _jid;
	WAChatSession* _chatSession;
	WAWebClientRecentMessages* _recentMessages;
	long long _muteTime;
	long long _unreadCount;

}

@property (nonatomic,copy) NSString * jid;                                            //@synthesize jid=_jid - In the implementation block
@property (nonatomic,retain) WAChatSession * chatSession;                             //@synthesize chatSession=_chatSession - In the implementation block
@property (assign,getter=isArchived,nonatomic) BOOL archived;                         //@synthesize archived=_archived - In the implementation block
@property (assign,nonatomic) BOOL needsClear;                                         //@synthesize needsClear=_needsClear - In the implementation block
@property (nonatomic,retain) WAWebClientRecentMessages * recentMessages;              //@synthesize recentMessages=_recentMessages - In the implementation block
@property (assign,nonatomic) long long muteTime;                                      //@synthesize muteTime=_muteTime - In the implementation block
@property (assign,getter=isReadOnly,nonatomic) BOOL readOnly;                         //@synthesize readOnly=_readOnly - In the implementation block
@property (assign,nonatomic) long long unreadCount;                                   //@synthesize unreadCount=_unreadCount - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                             //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL readAhead;                                          //@synthesize readAhead=_readAhead - In the implementation block
@property (assign,getter=isSpam,nonatomic) BOOL spam;                                 //@synthesize spam=_spam - In the implementation block
-(NSString *)jid;
-(void)setJid:(NSString *)arg1 ;
-(WAChatSession *)chatSession;
-(void)setArchived:(BOOL)arg1 ;
-(void)setChatSession:(WAChatSession *)arg1 ;
-(BOOL)needsClear;
-(void)setNeedsClear:(BOOL)arg1 ;
-(WAWebClientRecentMessages *)recentMessages;
-(void)setRecentMessages:(WAWebClientRecentMessages *)arg1 ;
-(long long)muteTime;
-(void)setMuteTime:(long long)arg1 ;
-(BOOL)readAhead;
-(void)setReadAhead:(BOOL)arg1 ;
-(BOOL)isSpam;
-(void)setSpam:(BOOL)arg1 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isReadOnly;
-(void)setUnreadCount:(long long)arg1 ;
-(long long)unreadCount;
-(BOOL)isArchived;
@end


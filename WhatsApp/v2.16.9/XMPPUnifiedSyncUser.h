/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, XMPPContact, XMPPStatus, XMPPContactCapability;

@interface XMPPUnifiedSyncUser : NSObject {

	NSString* _jid;
	XMPPContact* _xmppContact;
	XMPPStatus* _xmppStatus;
	XMPPContactCapability* _xmppCapability;

}

@property (nonatomic,readonly) NSString * jid;                                    //@synthesize jid=_jid - In the implementation block
@property (nonatomic,retain) XMPPContact * xmppContact;                           //@synthesize xmppContact=_xmppContact - In the implementation block
@property (nonatomic,retain) XMPPStatus * xmppStatus;                             //@synthesize xmppStatus=_xmppStatus - In the implementation block
@property (nonatomic,retain) XMPPContactCapability * xmppCapability;              //@synthesize xmppCapability=_xmppCapability - In the implementation block
-(NSString *)jid;
-(id)initWithJid:(id)arg1 ;
-(XMPPContact *)xmppContact;
-(void)setXmppContact:(XMPPContact *)arg1 ;
-(XMPPStatus *)xmppStatus;
-(void)setXmppStatus:(XMPPStatus *)arg1 ;
-(XMPPContactCapability *)xmppCapability;
-(void)setXmppCapability:(XMPPContactCapability *)arg1 ;
@end


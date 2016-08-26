/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TLObject.h>

@class TLChatParticipants, TLPhoto, TLPeerNotifySettings, TLExportedChatInvite, NSArray, NSString;

@interface TLChatFull : NSObject <TLObject> {

	int _n_id;
	TLChatParticipants* _participants;
	TLPhoto* _chat_photo;
	TLPeerNotifySettings* _notify_settings;
	TLExportedChatInvite* _exported_invite;
	NSArray* _bot_info;

}

@property (assign,nonatomic) int n_id;                                            //@synthesize n_id=_n_id - In the implementation block
@property (nonatomic,retain) TLChatParticipants * participants;                   //@synthesize participants=_participants - In the implementation block
@property (nonatomic,retain) TLPhoto * chat_photo;                                //@synthesize chat_photo=_chat_photo - In the implementation block
@property (nonatomic,retain) TLPeerNotifySettings * notify_settings;              //@synthesize notify_settings=_notify_settings - In the implementation block
@property (nonatomic,retain) TLExportedChatInvite * exported_invite;              //@synthesize exported_invite=_exported_invite - In the implementation block
@property (nonatomic,retain) NSArray * bot_info;                                  //@synthesize bot_info=_bot_info - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)TLconstructorSignature;
-(int)TLconstructorName;
-(id)TLbuildFromMetaObject:(shared_ptr<TLMetaObject>*)arg1 ;
-(void)TLfillFieldsWithValues:(map<int, TLConstructedValue, std::less<int>, std::allocator<std::pair<const int, TLConstructedValue> > >Ref)arg1 ;
-(void)setN_id:(int)arg1 ;
-(int)n_id;
-(TLPeerNotifySettings *)notify_settings;
-(void)setNotify_settings:(TLPeerNotifySettings *)arg1 ;
-(void)setBot_info:(NSArray *)arg1 ;
-(NSArray *)bot_info;
-(TLExportedChatInvite *)exported_invite;
-(TLPhoto *)chat_photo;
-(void)setChat_photo:(TLPhoto *)arg1 ;
-(void)setExported_invite:(TLExportedChatInvite *)arg1 ;
-(void)setParticipants:(TLChatParticipants *)arg1 ;
-(TLChatParticipants *)participants;
@end

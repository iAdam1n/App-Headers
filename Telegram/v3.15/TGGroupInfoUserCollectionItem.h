/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGCollectionItem.h>
#import <Telegram/TGGroupInfoUserCollectionItemViewDelegate.h>

@class ASHandle, TGUser, TGConversation, NSString;

@interface TGGroupInfoUserCollectionItem : TGCollectionItem <TGGroupInfoUserCollectionItemViewDelegate> {

	BOOL _canEdit;
	BOOL _disabled;
	BOOL _displaySwitch;
	BOOL _enableSwitch;
	BOOL _switchIsOn;
	ASHandle* _interfaceHandle;
	TGUser* _user;
	TGConversation* _conversation;
	NSString* _optionTitle;
	NSString* _customStatus;
	NSString* _customLabel;
	/*^block*/id _toggled;

}

@property (nonatomic,retain) ASHandle * interfaceHandle;                 //@synthesize interfaceHandle=_interfaceHandle - In the implementation block
@property (nonatomic,retain) TGUser * user;                              //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) TGConversation * conversation;              //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) NSString * optionTitle;                     //@synthesize optionTitle=_optionTitle - In the implementation block
@property (nonatomic,retain) NSString * customStatus;                    //@synthesize customStatus=_customStatus - In the implementation block
@property (nonatomic,retain) NSString * customLabel;                     //@synthesize customLabel=_customLabel - In the implementation block
@property (assign,nonatomic) BOOL displaySwitch;                         //@synthesize displaySwitch=_displaySwitch - In the implementation block
@property (assign,nonatomic) BOOL enableSwitch;                          //@synthesize enableSwitch=_enableSwitch - In the implementation block
@property (assign,nonatomic) BOOL switchIsOn;                            //@synthesize switchIsOn=_switchIsOn - In the implementation block
@property (nonatomic,copy) id toggled;                                   //@synthesize toggled=_toggled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)bindView:(id)arg1 ;
-(void)unbindView;
-(Class)itemViewClass;
-(CGSize)itemSizeForContainerSize:(CGSize)arg1 ;
-(void)setCustomStatus:(NSString *)arg1 ;
-(void)updateTimestamp;
-(ASHandle *)interfaceHandle;
-(void)setInterfaceHandle:(ASHandle *)arg1 ;
-(NSString *)customStatus;
-(void)itemSelected:(id)arg1 ;
-(id)_statusStringFromUserPresence:(SCD_Struct_TG121)arg1 active:(out BOOL*)arg2 ;
-(void)setDisplaySwitch:(BOOL)arg1 ;
-(void)setEnableSwitch:(BOOL)arg1 ;
-(void)setSwitchIsOn:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSwitchIsOn:(BOOL)arg1 ;
-(id)stringForMemberCount:(int)arg1 ;
-(void)setCanEdit:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setOptionTitle:(NSString *)arg1 ;
-(void)groupInfoUserItemViewRequestedDeleteAction:(id)arg1 ;
-(NSString *)optionTitle;
-(BOOL)displaySwitch;
-(BOOL)enableSwitch;
-(BOOL)switchIsOn;
-(id)init;
-(void)setDisabled:(BOOL)arg1 ;
-(NSString *)customLabel;
-(void)setCustomLabel:(NSString *)arg1 ;
-(id)toggled;
-(void)setToggled:(id)arg1 ;
-(TGConversation *)conversation;
-(void)setConversation:(TGConversation *)arg1 ;
-(void)setCanEdit:(BOOL)arg1 ;
-(TGUser *)user;
-(void)setUser:(TGUser *)arg1 ;
-(void)switchValueChanged:(BOOL)arg1 ;
@end

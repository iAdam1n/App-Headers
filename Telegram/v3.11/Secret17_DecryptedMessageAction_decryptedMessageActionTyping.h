/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Secret17_DecryptedMessageAction.h>

@class Secret17_SendMessageAction;

@interface Secret17_DecryptedMessageAction_decryptedMessageActionTyping : Secret17_DecryptedMessageAction {

	Secret17_SendMessageAction* _action;

}

@property (nonatomic,retain) Secret17_SendMessageAction * action;              //@synthesize action=_action - In the implementation block
-(id)init;
-(id)description;
-(Secret17_SendMessageAction *)action;
-(void)setAction:(Secret17_SendMessageAction *)arg1 ;
@end

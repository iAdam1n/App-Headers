/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGCollectionMenuController.h>

@class TGConversation, NSString, UIBarButtonItem, TGCheckCollectionItem, TGCommentCollectionItem, TGUsernameCollectionItem, TGCollectionMultilineInputItem, TGCollectionMenuSection, SMetaDisposable, TGSwitchCollectionItem;

@interface TGSetupChannelAfterCreationController : TGCollectionMenuController {

	TGConversation* _conversation;
	NSString* _exportedLink;
	UIBarButtonItem* _nextItem;
	BOOL _isPrivate;
	TGCheckCollectionItem* _publicItem;
	TGCheckCollectionItem* _privateItem;
	TGCommentCollectionItem* _typeHelpItem;
	TGUsernameCollectionItem* _usernameItem;
	TGCommentCollectionItem* _invalidUsernameItem;
	TGCollectionMultilineInputItem* _privateLinkItem;
	TGCollectionMenuSection* _linkPrivateSection;
	TGCollectionMenuSection* _linkPublicSection;
	SMetaDisposable* _checkUsernameDisposable;
	SMetaDisposable* _updateUsernameDisposable;
	TGSwitchCollectionItem* _commentsEnabledItem;
	int _usernameState;
	BOOL _modal;

}
-(void)_resetCollectionView;
-(void)usernameChanged:(id)arg1 ;
-(BOOL)usernameIsValid:(id)arg1 ;
-(void)setUsernameState:(int)arg1 username:(id)arg2 ;
-(id)initWithConversation:(id)arg1 exportedLink:(id)arg2 modal:(BOOL)arg3 ;
-(void)publicPressed;
-(void)privatePressed;
-(void)updateIsPrivate;
-(void)cancelPressed;
-(void)nextPressed;
@end


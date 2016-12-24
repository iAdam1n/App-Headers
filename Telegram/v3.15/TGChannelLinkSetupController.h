/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:32 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGCollectionMenuController.h>

@class TGConversation, TGCollectionMenuSection, TGUsernameCollectionItem, TGCommentCollectionItem, SMetaDisposable, SVariable, NSArray;

@interface TGChannelLinkSetupController : TGCollectionMenuController {

	TGConversation* _conversation;
	TGCollectionMenuSection* _editUsernameSection;
	TGUsernameCollectionItem* _usernameItem;
	TGCommentCollectionItem* _invalidUsernameItem;
	TGCommentCollectionItem* _hintItem;
	TGCollectionMenuSection* _removeExistingInfoSection;
	TGCollectionMenuSection* _removeExistingConversationsSection;
	SMetaDisposable* _checkUsernameDisposable;
	SMetaDisposable* _updateUsernameDisposable;
	SVariable* _conversationsToBeRemovedToAssignPublicUsernames;
	SMetaDisposable* _conversationsToBeRemovedToAssignPublicUsernamesDisposable;
	NSArray* _conversationsToDelete;
	/*^block*/id _block;

}
-(void)usernameChanged:(id)arg1 ;
-(void)updateLinkHint:(id)arg1 ;
-(void)setConversationsToDelete:(id)arg1 ;
-(void)updateCanCreateUsernames;
-(BOOL)usernameIsValid:(id)arg1 ;
-(void)setUsernameState:(int)arg1 username:(id)arg2 ;
-(void)revokeUsernameFromConversation:(id)arg1 ;
-(void)dealloc;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)commonInit;
-(void)donePressed;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)initWithConversation:(id)arg1 ;
-(void)cancelPressed;
@end

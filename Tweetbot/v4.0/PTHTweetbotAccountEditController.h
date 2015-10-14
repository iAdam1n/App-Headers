/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <PTHCommon/PTHViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class PTHTweetbotAccount, UIScrollView, PTHStaticSectionCell, NSString;

@interface PTHTweetbotAccountEditController : PTHViewController <UITextFieldDelegate> {

	PTHTweetbotAccount* _account;
	UIScrollView* _scrollView;
	PTHStaticSectionCell* _avatarCell;
	PTHStaticSectionCell* _headerCell;
	PTHStaticSectionCell* _nameCell;
	PTHStaticSectionCell* _locationCell;
	PTHStaticSectionCell* _urlCell;
	PTHStaticSectionCell* _userDescriptionCell;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateAvatar:(id)arg1 ;
-(void)updateHeader:(id)arg1 ;
-(void)_updateImage:(id)arg1 cropAspectRatio:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
-(void)_updateImage;
-(void)save;
-(void)loadView;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)keyboardChanged:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)updateUI;
-(id)initWithAccount:(id)arg1 ;
-(void)_hideKeyboard;
@end


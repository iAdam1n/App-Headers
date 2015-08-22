/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBTextView.h>
#import <Messenger/FBMMenuHostResponder.h>

@class UIResponder, NSString;

@interface FBMTextViewInternal : FBTextView <FBMMenuHostResponder> {

	BOOL _shouldHideCaret;
	UIResponder* _menuResponder;

}

@property (assign,nonatomic) BOOL shouldHideCaret;                                         //@synthesize shouldHideCaret=_shouldHideCaret - In the implementation block
@property (assign,nonatomic,__weak) id<FBMTextViewInternalDelegate> delegate; 
@property (assign,nonatomic,__weak) UIResponder * menuResponder;                           //@synthesize menuResponder=_menuResponder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 textInputContextIdentifier:(id)arg2 ;
-(void)setShouldHideCaret:(BOOL)arg1 ;
-(BOOL)shouldHideCaret;
-(void)handleMenuDidHide;
-(void)setMenuResponder:(UIResponder *)arg1 ;
-(BOOL)_isMenuVisible;
-(UIResponder *)menuResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(CGRect)caretRectForPosition:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)delete:(id)arg1 ;
@end

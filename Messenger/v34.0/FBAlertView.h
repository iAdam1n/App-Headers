/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:11 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <Messenger/FBAlertViewProtocol.h>

@protocol UIAlertViewDelegate, FBAlertViewProtocol;
@class NSString, FBAlertViewCoordinator;

@interface FBAlertView : NSObject <UIAlertViewDelegate, FBAlertViewProtocol> {

	FBAlertViewCoordinator* _coordinator;
	id<UIAlertViewDelegate> _mainDelegate;
	long long _firstOtherButtonIndex;
	id<FBAlertViewProtocol> _alertProxy;

}

@property (nonatomic,readonly) id<FBAlertViewProtocol> alertProxy;              //@synthesize alertProxy=_alertProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long tag; 
@property (assign,nonatomic) id delegate; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,readonly) long long numberOfButtons; 
@property (assign,nonatomic) long long cancelButtonIndex; 
@property (nonatomic,readonly) long long firstOtherButtonIndex;                 //@synthesize firstOtherButtonIndex=_firstOtherButtonIndex - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (assign,nonatomic) long long alertViewStyle; 
-(void)_enumerateDelegatesRespondingToSelector:(SEL)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithProxy:(id)arg1 firstOtherButtonIndex:(long long)arg2 delegate:(id)arg3 coordinator:(id)arg4 ;
-(id<FBAlertViewProtocol>)alertProxy;
-(void)show;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)delegate;
-(long long)cancelButtonIndex;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)addButtonWithTitle:(id)arg1 ;
-(void)setCancelButtonIndex:(long long)arg1 ;
-(NSString *)title;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(NSString *)message;
-(id)textFieldAtIndex:(long long)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(BOOL)isVisible;
-(long long)firstOtherButtonIndex;
-(void)willPresentAlertView:(id)arg1 ;
-(BOOL)alertViewShouldEnableFirstOtherButton:(id)arg1 ;
-(long long)numberOfButtons;
-(long long)alertViewStyle;
-(void)didPresentAlertView:(id)arg1 ;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)setAlertViewStyle:(long long)arg1 ;
-(id)buttonTitleAtIndex:(long long)arg1 ;
@end

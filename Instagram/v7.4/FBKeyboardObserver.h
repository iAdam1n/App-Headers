/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:12 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBKeyboardObserverDelegate;
@class UIView;

@interface FBKeyboardObserver : NSObject {

	BOOL _observingKeyboardNotifications;
	BOOL _delegateWillShow;
	BOOL _delegateDidShow;
	BOOL _delegateWillHide;
	BOOL _delegateDidHide;
	BOOL _delegateWillChangeFrame;
	BOOL _delegateDidChangeFrame;
	BOOL _keyboardAppearing;
	BOOL _keyboardDisappearing;
	BOOL _keyboardAnimating;
	BOOL _keyboardVisible;
	id<FBKeyboardObserverDelegate> _delegate;
	UIView* _owner;

}

@property (assign,nonatomic,__weak) id<FBKeyboardObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * owner;                                       //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) BOOL keyboardAppearing;                                    //@synthesize keyboardAppearing=_keyboardAppearing - In the implementation block
@property (nonatomic,readonly) BOOL keyboardDisappearing;                                 //@synthesize keyboardDisappearing=_keyboardDisappearing - In the implementation block
@property (nonatomic,readonly) BOOL keyboardAnimating;                                    //@synthesize keyboardAnimating=_keyboardAnimating - In the implementation block
@property (nonatomic,readonly) BOOL keyboardVisible;                                      //@synthesize keyboardVisible=_keyboardVisible - In the implementation block
-(void)stopObservingKeyboardNotifications;
-(void)_keyboardFrameWillChange:(id)arg1 ;
-(void)_keyboardFrameDidChange:(id)arg1 ;
-(void)_resetKeyboardState;
-(void)startObservingKeyboardNotifications;
-(BOOL)keyboardAppearing;
-(BOOL)keyboardDisappearing;
-(BOOL)keyboardAnimating;
-(void)dealloc;
-(void)setDelegate:(id<FBKeyboardObserverDelegate>)arg1 ;
-(id<FBKeyboardObserverDelegate>)delegate;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_keyboardDidShow:(id)arg1 ;
-(void)_keyboardDidHide:(id)arg1 ;
-(BOOL)keyboardVisible;
-(UIView *)owner;
-(void)setOwner:(UIView *)arg1 ;
@end


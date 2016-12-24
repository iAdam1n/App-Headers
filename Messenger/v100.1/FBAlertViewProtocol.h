/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBAlertViewProtocol <NSObject>
@property (assign,nonatomic) long long tag; 
@property (assign,nonatomic) id delegate; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,readonly) long long numberOfButtons; 
@property (assign,nonatomic) long long cancelButtonIndex; 
@property (nonatomic,readonly) long long firstOtherButtonIndex; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (assign,nonatomic) long long alertViewStyle; 
@required
-(void)show;
-(void)setDelegate:(id)arg1;
-(void)setTitle:(id)arg1;
-(id)delegate;
-(long long)cancelButtonIndex;
-(void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2;
-(NSString *)title;
-(long long)addButtonWithTitle:(id)arg1;
-(void)setCancelButtonIndex:(long long)arg1;
-(long long)tag;
-(void)setTag:(long long)arg1;
-(BOOL)isVisible;
-(void)setMessage:(id)arg1;
-(NSString *)message;
-(long long)firstOtherButtonIndex;
-(long long)numberOfButtons;
-(long long)alertViewStyle;
-(void)setAlertViewStyle:(long long)arg1;
-(id)buttonTitleAtIndex:(long long)arg1;
-(id)textFieldAtIndex:(long long)arg1;

@end

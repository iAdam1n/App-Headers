/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIViewController;


@protocol MNComposerExtensionModule <NSObject>
@property (nonatomic,copy,readonly) NSString * moduleTitle; 
@property (nonatomic,readonly) BOOL hasViewAllButton; 
@property (nonatomic,readonly) double moduleHeight; 
@property (nonatomic,readonly) BOOL shouldHide; 
@property (nonatomic,readonly) UIViewController * contentViewController; 
@property (assign,nonatomic,__weak) id<MNComposerExtensionModuleDelegate> delegate; 
@required
-(void)dismissMoreDrawerViewControllerWithCompletion:(/*^block*/id)arg1;
-(void)contentWillAppear;
-(void)contentDidDisappear;
-(void)updateWithSearchQuery:(id)arg1;
-(NSString *)moduleTitle;
-(BOOL)hasViewAllButton;
-(double)moduleHeight;
-(BOOL)shouldHide;
-(void)setDelegate:(id)arg1;
-(id<MNComposerExtensionModuleDelegate>)delegate;
-(UIViewController *)contentViewController;

@end

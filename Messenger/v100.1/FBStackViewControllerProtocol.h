/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:24 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, UIViewController;


@protocol FBStackViewControllerProtocol <NSObject,FBAnalyticsInfoSource>
@property (nonatomic,copy,readonly) NSArray * modalPresentationItems; 
@property (nonatomic,readonly) id<FBModallyPresentableItem> topModalItem; 
@property (nonatomic,readonly) id<FBModallyPresentableItem> bottomModalItem; 
@property (nonatomic,readonly) UIViewController * topModalViewController; 
@property (nonatomic,readonly) UIViewController * bottomModalViewController; 
@optional
-(void)modalItem:(id)arg1 didUpdateOcclusionState:(BOOL)arg2;

@required
-(UIViewController *)topModalViewController;
-(UIViewController *)bottomModalViewController;
-(NSArray *)modalPresentationItems;
-(void)addModalItem:(id)arg1;
-(void)removeModalItem:(id)arg1;
-(id<FBModallyPresentableItem>)topModalItem;
-(id<FBModallyPresentableItem>)bottomModalItem;

@end

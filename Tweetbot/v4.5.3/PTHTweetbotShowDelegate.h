/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 6:53:39 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/1B765338-CA71-42BD-BD25-B178C5389776/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIView, UIBarButtonItem, NSString, UIViewController;

@interface PTHTweetbotShowDelegate : NSObject <UIPopoverPresentationControllerDelegate, NSCopying> {

	long long _showType;
	unsigned long long _presentOptions;
	UIView* _sourceView;
	UIBarButtonItem* _barButtonItem;
	id _sourceObject;
	unsigned long long _permittedArrowDirections;
	NSString* _navigationColorGroupName;
	NSString* _popoverBackgroundColorName;
	/*^block*/id _configureControllerBlock;
	/*^block*/id _willShowBlock;
	/*^block*/id _didShowBlock;
	/*^block*/id _willHideBlock;
	/*^block*/id _didHideBlock;
	UIViewController* _sourceViewController;
	CGRect _sourceRect;

}

@property (assign,nonatomic,__weak) UIViewController * sourceViewController;              //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (assign,nonatomic) long long showType;                                          //@synthesize showType=_showType - In the implementation block
@property (assign,nonatomic) unsigned long long presentOptions;                           //@synthesize presentOptions=_presentOptions - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                         //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                           //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * barButtonItem;                             //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (nonatomic,retain) id sourceObject;                                             //@synthesize sourceObject=_sourceObject - In the implementation block
@property (assign,nonatomic) unsigned long long permittedArrowDirections;                 //@synthesize permittedArrowDirections=_permittedArrowDirections - In the implementation block
@property (nonatomic,copy) NSString * navigationColorGroupName;                           //@synthesize navigationColorGroupName=_navigationColorGroupName - In the implementation block
@property (nonatomic,copy) NSString * popoverBackgroundColorName;                         //@synthesize popoverBackgroundColorName=_popoverBackgroundColorName - In the implementation block
@property (nonatomic,copy) id configureControllerBlock;                                   //@synthesize configureControllerBlock=_configureControllerBlock - In the implementation block
@property (nonatomic,copy) id willShowBlock;                                              //@synthesize willShowBlock=_willShowBlock - In the implementation block
@property (nonatomic,copy) id didShowBlock;                                               //@synthesize didShowBlock=_didShowBlock - In the implementation block
@property (nonatomic,copy) id willHideBlock;                                              //@synthesize willHideBlock=_willHideBlock - In the implementation block
@property (nonatomic,copy) id didHideBlock;                                               //@synthesize didHideBlock=_didHideBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)delegateForControl:(id)arg1 ;
+(id)delegateForDelegate:(id)arg1 ;
-(void)setShowType:(long long)arg1 ;
-(void)setPresentOptions:(unsigned long long)arg1 ;
-(void)setWillHideBlock:(id)arg1 ;
-(void)setDidHideBlock:(id)arg1 ;
-(id)willShowBlock;
-(id)didShowBlock;
-(id)willHideBlock;
-(id)didHideBlock;
-(void)setDidShowBlock:(id)arg1 ;
-(void)setConfigureControllerBlock:(id)arg1 ;
-(void)setNavigationColorGroupName:(NSString *)arg1 ;
-(void)setWillShowBlock:(id)arg1 ;
-(void)setPopoverBackgroundColorName:(NSString *)arg1 ;
-(void)resetBlocks;
-(long long)showType;
-(unsigned long long)presentOptions;
-(NSString *)navigationColorGroupName;
-(NSString *)popoverBackgroundColorName;
-(id)configureControllerBlock;
-(void)setSourceObject:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)modalPresentationStyle;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(UIBarButtonItem *)barButtonItem;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIViewController *)sourceViewController;
-(void)setPermittedArrowDirections:(unsigned long long)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(unsigned long long)permittedArrowDirections;
-(id)sourceObject;
-(void)setSourceViewController:(UIViewController *)arg1 ;
@end

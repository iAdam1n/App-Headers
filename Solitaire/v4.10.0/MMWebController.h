/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/MMAdController.h>
#import <SolitaireFree/MMInterstitialAdapter.h>
#import <SolitaireFree/MMInlineAdapter.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIViewController, UIView, MMWebComponent, MMMRAIDViewController, UIButton, NSString;

@interface MMWebController : MMAdController <MMInterstitialAdapter, MMInlineAdapter, UIWebViewDelegate> {

	BOOL _transparent;
	BOOL _enhancedAdControlEnabled;
	UIView* _view;
	MMWebComponent* _webComponent;
	MMMRAIDViewController* _modalViewController;
	UIButton* _dismissView;
	NSString* _content;
	UIViewController* _modalController;

}

@property (nonatomic,retain) UIView * view;                                            //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) MMWebComponent * webComponent;                            //@synthesize webComponent=_webComponent - In the implementation block
@property (nonatomic,retain) MMMRAIDViewController * modalViewController;              //@synthesize modalViewController=_modalViewController - In the implementation block
@property (nonatomic,retain) UIButton * dismissView;                                   //@synthesize dismissView=_dismissView - In the implementation block
@property (nonatomic,retain) NSString * content;                                       //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) UIViewController * modalController;                       //@synthesize modalController=_modalController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isDisplayingOverlay; 
+(BOOL)canHandleContent:(id)arg1 ;
+(void)load;
-(void)setWebComponent:(MMWebComponent *)arg1 ;
-(MMWebComponent *)webComponent;
-(BOOL)contentReady;
-(BOOL)contentExpired;
-(void)presentFromController:(id)arg1 animated:(BOOL)arg2 transitionStyle:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(UIViewController *)modalController;
-(void)setEnhancedAdControlEnabled:(BOOL)arg1 ;
-(id)initWithContent:(id)arg1 eventForwarder:(id)arg2 ;
-(BOOL)isDisplayingOverlay;
-(void)setModalViewController:(MMMRAIDViewController *)arg1 ;
-(void)setModalController:(UIViewController *)arg1 ;
-(void)resizeForFlexibleSize:(CGSize)arg1 ;
-(void)unloadAndRemoveViews;
-(void)closeOverlays;
-(long long)contentIsValid:(double)arg1 ;
-(void)prepareContent;
-(BOOL)enhancedAdControlEnabled;
-(void)dealloc;
-(UIView *)view;
-(NSString *)content;
-(void)setView:(UIView *)arg1 ;
-(MMMRAIDViewController *)modalViewController;
-(void)dismiss;
-(void)setContent:(NSString *)arg1 ;
-(void)setTransparent:(BOOL)arg1 ;
-(BOOL)transparent;
-(UIButton *)dismissView;
-(void)setDismissView:(UIButton *)arg1 ;
-(void)dismiss:(/*^block*/id)arg1 ;
@end

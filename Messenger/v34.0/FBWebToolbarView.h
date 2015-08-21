/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:40 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIToolbar.h>

@protocol FBWebToolbarViewDelegate;
@class UIBarButtonItem, UIView;

@interface FBWebToolbarView : UIToolbar {

	UIBarButtonItem* _flexibleSpace;
	UIBarButtonItem* _fixedSpace;
	UIBarButtonItem* _metricsFenceLeft;
	UIBarButtonItem* _metricsFenceRight;
	BOOL _padded;
	BOOL _backgroundVisible;
	id<FBWebToolbarViewDelegate> _toolbarDelegate;
	UIBarButtonItem* _backItem;
	UIBarButtonItem* _forwardItem;
	UIBarButtonItem* _refreshItem;
	UIBarButtonItem* _actionItem;
	UIBarButtonItem* _appLinkOpenItem;
	UIBarButtonItem* _appLinkInstallItem;
	UIView* _opacityControlBackgroundView;
	unsigned long long _style;
	UIBarButtonItem* _shareItem;

}

@property (assign,nonatomic) BOOL padded;                                                      //@synthesize padded=_padded - In the implementation block
@property (assign,nonatomic) BOOL backgroundVisible;                                           //@synthesize backgroundVisible=_backgroundVisible - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebToolbarViewDelegate> toolbarDelegate;              //@synthesize toolbarDelegate=_toolbarDelegate - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * backItem;                                     //@synthesize backItem=_backItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * forwardItem;                                  //@synthesize forwardItem=_forwardItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * refreshItem;                                  //@synthesize refreshItem=_refreshItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * actionItem;                                   //@synthesize actionItem=_actionItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * appLinkOpenItem;                              //@synthesize appLinkOpenItem=_appLinkOpenItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * appLinkInstallItem;                           //@synthesize appLinkInstallItem=_appLinkInstallItem - In the implementation block
@property (nonatomic,retain) UIView * opacityControlBackgroundView;                            //@synthesize opacityControlBackgroundView=_opacityControlBackgroundView - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                         //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * shareItem;                                      //@synthesize shareItem=_shareItem - In the implementation block
+(double)defaultWidthForStyle:(unsigned long long)arg1 ;
+(double)defaultHeight;
-(void)_back:(id)arg1 ;
-(void)_forward:(id)arg1 ;
-(void)_action:(id)arg1 ;
-(void)_appLinkOpen:(id)arg1 ;
-(void)_appLinkInstall:(id)arg1 ;
-(void)setPadded:(BOOL)arg1 ;
-(void)setBackgroundVisible:(BOOL)arg1 ;
-(Class)_fb_toolbarBackgroundClass;
-(id)_fb_toolbarBackgroundView;
-(void)_insertOpacityControlView;
-(void)_reorderViewHierarchy;
-(CGPoint)centerPointForActionItem;
-(void)setCustomItemsTintColor:(id)arg1 ;
-(void)setCustomBarTintColor:(id)arg1 ;
-(void)updateForNavigationStateBack:(BOOL)arg1 forward:(BOOL)arg2 ;
-(void)updateAppLinkOpen:(BOOL)arg1 ;
-(void)updateAppLinkInstall:(BOOL)arg1 ;
-(BOOL)padded;
-(BOOL)backgroundVisible;
-(id<FBWebToolbarViewDelegate>)toolbarDelegate;
-(void)setToolbarDelegate:(id<FBWebToolbarViewDelegate>)arg1 ;
-(UIBarButtonItem *)refreshItem;
-(UIBarButtonItem *)actionItem;
-(UIBarButtonItem *)appLinkOpenItem;
-(UIBarButtonItem *)appLinkInstallItem;
-(UIView *)opacityControlBackgroundView;
-(void)setOpacityControlBackgroundView:(UIView *)arg1 ;
-(UIBarButtonItem *)shareItem;
-(void)setShareItem:(UIBarButtonItem *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)layoutSubviews;
-(void)insertSubview:(id)arg1 atIndex:(long long)arg2 ;
-(void)insertSubview:(id)arg1 belowSubview:(id)arg2 ;
-(unsigned long long)style;
-(void)insertSubview:(id)arg1 aboveSubview:(id)arg2 ;
-(UIBarButtonItem *)backItem;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 ;
-(void)_updateItems;
-(UIBarButtonItem *)forwardItem;
-(void)_refresh:(id)arg1 ;
@end


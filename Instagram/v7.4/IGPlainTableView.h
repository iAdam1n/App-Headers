/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:15 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTableView.h>
#import <Instagram/IGReusableCellTableView.h>

@class UIView, NSString;

@interface IGPlainTableView : IGTableView <IGReusableCellTableView> {

	BOOL _pinsHeaderView;
	BOOL _wantsStatusBarBackground;
	id _headerViewKVOHandler;
	id _footerViewKVOHandler;
	UIView* _statusBarBlurringView;

}

@property (assign,nonatomic) BOOL pinsHeaderView;                         //@synthesize pinsHeaderView=_pinsHeaderView - In the implementation block
@property (assign,nonatomic) BOOL wantsStatusBarBackground;               //@synthesize wantsStatusBarBackground=_wantsStatusBarBackground - In the implementation block
@property (nonatomic,retain) id headerViewKVOHandler;                     //@synthesize headerViewKVOHandler=_headerViewKVOHandler - In the implementation block
@property (nonatomic,retain) id footerViewKVOHandler;                     //@synthesize footerViewKVOHandler=_footerViewKVOHandler - In the implementation block
@property (nonatomic,retain) UIView * statusBarBlurringView;              //@synthesize statusBarBlurringView=_statusBarBlurringView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)cellClass;
-(Class)defaultCellClass;
-(id)headerViewKVOHandler;
-(id)footerViewKVOHandler;
-(void)setHeaderViewKVOHandler:(id)arg1 ;
-(void)setFooterViewKVOHandler:(id)arg1 ;
-(UIView *)statusBarBlurringView;
-(BOOL)pinsHeaderView;
-(BOOL)wantsStatusBarBackground;
-(void)setPinsHeaderView:(BOOL)arg1 ;
-(void)setWantsStatusBarBackground:(BOOL)arg1 ;
-(void)setStatusBarBlurringView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setTableHeaderView:(id)arg1 ;
@end

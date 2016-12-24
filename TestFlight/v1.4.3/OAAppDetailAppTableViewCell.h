/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:48:08 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/C8BBB3B7-A738-4D43-8A19-90B2CFB12AE1/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <TestFlight/OAAppDetailBaseTableViewCell.h>
#import <TestFlight/OABuyButtonDelegate.h>

@protocol OAAppDetailHeaderViewDelegate, OABuyButtonDelegate;
@class OASAppContext, OAAppDetailHeaderView, NSString;

@interface OAAppDetailAppTableViewCell : OAAppDetailBaseTableViewCell <OABuyButtonDelegate> {

	BOOL _showWatchHeader;
	OASAppContext* _appContext;
	id<OAAppDetailHeaderViewDelegate> _appViewDelegate;
	id<OABuyButtonDelegate> _buyButtonDelegate;
	OAAppDetailHeaderView* _appView;

}

@property (nonatomic,retain) OASAppContext * appContext;                                     //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,retain) id<OAAppDetailHeaderViewDelegate> appViewDelegate;              //@synthesize appViewDelegate=_appViewDelegate - In the implementation block
@property (nonatomic,retain) id<OABuyButtonDelegate> buyButtonDelegate;                      //@synthesize buyButtonDelegate=_buyButtonDelegate - In the implementation block
@property (assign,nonatomic) BOOL showWatchHeader;                                           //@synthesize showWatchHeader=_showWatchHeader - In the implementation block
@property (nonatomic,retain) OAAppDetailHeaderView * appView;                                //@synthesize appView=_appView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAppView:(OAAppDetailHeaderView *)arg1 ;
-(OAAppDetailHeaderView *)appView;
-(void)setBuyButtonDelegate:(id<OABuyButtonDelegate>)arg1 ;
-(void)setAppViewDelegate:(id<OAAppDetailHeaderViewDelegate>)arg1 ;
-(void)setShowWatchHeader:(BOOL)arg1 ;
-(id<OAAppDetailHeaderViewDelegate>)appViewDelegate;
-(id<OABuyButtonDelegate>)buyButtonDelegate;
-(BOOL)showWatchHeader;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(OASAppContext *)appContext;
-(void)setAppContext:(OASAppContext *)arg1 ;
@end

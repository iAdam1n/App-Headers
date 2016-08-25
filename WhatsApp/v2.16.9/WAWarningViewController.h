/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAVisibilityTrackingViewController.h>

@class UITableView, UIColor, WAWarningView, NSString;

@interface WAWarningViewController : WAVisibilityTrackingViewController {

	UITableView* _tableView;
	UIColor* _warningTextColor;
	UIColor* _warningBackgroundColor;
	WAWarningView* _warningView;

}

@property (nonatomic,retain) WAWarningView * warningView;                           //@synthesize warningView=_warningView - In the implementation block
@property (nonatomic,readonly) double topLayoutGuideLengthIfAvailable; 
@property (nonatomic,retain) UITableView * tableView;                               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) NSString * warningText; 
@property (nonatomic,retain) UIColor * warningTextColor;                            //@synthesize warningTextColor=_warningTextColor - In the implementation block
@property (nonatomic,retain) UIColor * warningBackgroundColor;                      //@synthesize warningBackgroundColor=_warningBackgroundColor - In the implementation block
-(WAWarningView *)warningView;
-(void)addWarningView;
-(CGRect)frameForWarningView:(id)arg1 visible:(BOOL)arg2 ;
-(void)showWarningViewAnimated:(BOOL)arg1 ;
-(void)removeWarningView;
-(UIColor *)warningBackgroundColor;
-(void)configureWarningView:(id)arg1 ;
-(void)setWarningView:(WAWarningView *)arg1 ;
-(void)hideWarningView;
-(BOOL)prepareTableViewForFrame:(CGRect)arg1 ;
-(void)animate:(BOOL)arg1 actions:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(double)topLayoutGuideLengthIfAvailable;
-(void)refreshWarningViewLayout;
-(void)setWarningText:(id)arg1 withAction:(/*^block*/id)arg2 ;
-(NSString *)warningText;
-(void)setWarningBackgroundColor:(UIColor *)arg1 ;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(UIColor *)warningTextColor;
-(void)setWarningTextColor:(UIColor *)arg1 ;
@end


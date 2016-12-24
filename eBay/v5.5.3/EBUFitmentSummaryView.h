/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUAccessorizedExpandableView.h>

@class UILabel, NSMutableArray, UIButton, EBUActionButton, EBUDividerView;

@interface EBUFitmentSummaryView : EBUAccessorizedExpandableView {

	UILabel* _statusLabel;
	UILabel* _vehicleLabel;
	NSMutableArray* _summaryConstraints;
	UIButton* _vehicleEditButton;
	EBUActionButton* _actionButton;
	EBUDividerView* _divider;

}

@property (nonatomic,retain) NSMutableArray * summaryConstraints;              //@synthesize summaryConstraints=_summaryConstraints - In the implementation block
@property (nonatomic,retain) UIButton * vehicleEditButton;                     //@synthesize vehicleEditButton=_vehicleEditButton - In the implementation block
@property (nonatomic,retain) EBUActionButton * actionButton;                   //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) EBUDividerView * divider;                         //@synthesize divider=_divider - In the implementation block
@property (nonatomic,retain) UILabel * statusLabel;                            //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) UILabel * vehicleLabel;                           //@synthesize vehicleLabel=_vehicleLabel - In the implementation block
-(void)clearActionButton;
-(void)setupActionButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 automationIdentifier:(id)arg4 ;
-(void)setupVehicleEditButtonWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)clearVehicleEditButton;
-(UILabel *)vehicleLabel;
-(void)setVehicleLabel:(UILabel *)arg1 ;
-(void)setVehicleEditButton:(UIButton *)arg1 ;
-(UIButton *)vehicleEditButton;
-(NSMutableArray *)summaryConstraints;
-(void)setSummaryConstraints:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(id)metrics;
-(EBUDividerView *)divider;
-(void)setDivider:(EBUDividerView *)arg1 ;
-(void)setButtonsEnabled:(BOOL)arg1 ;
-(void)setActionButton:(EBUActionButton *)arg1 ;
-(EBUActionButton *)actionButton;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
@end

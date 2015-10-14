/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:41:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/3A543D9E-77DF-4DA3-955A-044E51462F63/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>

@class NSMutableArray, UIImageView, UILabel, PTHTweetbotSetupPickerView, PTHInvertingButton, NSString, NSArray, PTHTweetbotSetupController;

@interface PTHTweetbotSetupChildController : PTHViewController {

	NSMutableArray* _horizontalPaddingConstraints;
	NSMutableArray* _verticalPaddingConstraints;
	UIImageView* _headerImageView;
	UILabel* _headerLabel;
	PTHTweetbotSetupPickerView* _pickerView;
	PTHInvertingButton* _actionButton;
	NSString* _colorGroupName;
	NSArray* _pickerTitles;
	PTHTweetbotSetupController* _setupController;

}

@property (nonatomic,readonly) UIImageView * headerImageView;                                  //@synthesize headerImageView=_headerImageView - In the implementation block
@property (nonatomic,readonly) UILabel * headerLabel;                                          //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,readonly) PTHTweetbotSetupPickerView * pickerView;                        //@synthesize pickerView=_pickerView - In the implementation block
@property (nonatomic,readonly) PTHInvertingButton * actionButton;                              //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,__weak,readonly) NSString * colorGroupName;                               //@synthesize colorGroupName=_colorGroupName - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * pickerTitles;                                  //@synthesize pickerTitles=_pickerTitles - In the implementation block
@property (assign,nonatomic,__weak) PTHTweetbotSetupController * setupController;              //@synthesize setupController=_setupController - In the implementation block
-(NSArray *)pickerTitles;
-(void)finishedStep;
-(UIImageView *)headerImageView;
-(id)colorNamed:(id)arg1 ;
-(NSString *)colorGroupName;
-(PTHInvertingButton *)actionButton;
-(PTHTweetbotSetupPickerView *)pickerView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)setSetupController:(PTHTweetbotSetupController *)arg1 ;
-(UILabel *)headerLabel;
-(PTHTweetbotSetupController *)setupController;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>

@class WAAutoBackupSettings, UIView, UILabel, NSIndexPath, NSString;

@interface WAAutobackupSettingsViewController : WATableViewController {

	WAAutoBackupSettings* _autoBackupSettings;
	UIView* _viewFooter;
	double _cachedWidthFooter;
	UILabel* _labelFooter;
	NSIndexPath* _selectedIndexPath;
	double _sideTextMargin;

}

@property (nonatomic,retain) WAAutoBackupSettings * autoBackupSettings;              //@synthesize autoBackupSettings=_autoBackupSettings - In the implementation block
@property (nonatomic,retain) UIView * viewFooter;                                    //@synthesize viewFooter=_viewFooter - In the implementation block
@property (assign,nonatomic) double cachedWidthFooter;                               //@synthesize cachedWidthFooter=_cachedWidthFooter - In the implementation block
@property (nonatomic,retain) UILabel * labelFooter;                                  //@synthesize labelFooter=_labelFooter - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                        //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (nonatomic,readonly) double sideTextMargin;                                //@synthesize sideTextMargin=_sideTextMargin - In the implementation block
@property (nonatomic,readonly) NSString * bottomText; 
+(id)stringForSequence:(id)arg1 ;
+(id)indexForAutoBackupFrequency:(unsigned long long)arg1 ;
+(id)disableCellularDataSequence;
+(unsigned long long)autoBackupFrequencyForIndexPath:(id)arg1 ;
-(WAAutoBackupSettings *)autoBackupSettings;
-(void)wa_fontSizeDidChange;
-(id)initWithAutoBackupSettings:(id)arg1 ;
-(UILabel *)labelFooter;
-(void)layoutFooterView;
-(double)sideTextMargin;
-(void)setCachedWidthFooter:(double)arg1 ;
-(double)cachedWidthFooter;
-(UIView *)viewFooter;
-(void)setAutoBackupSettings:(WAAutoBackupSettings *)arg1 ;
-(void)setViewFooter:(UIView *)arg1 ;
-(void)setLabelFooter:(UILabel *)arg1 ;
-(id)init;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(NSString *)bottomText;
@end


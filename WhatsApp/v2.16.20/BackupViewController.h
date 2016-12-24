/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAWarningViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <WhatsApp/WABackupViewControllerDataProviderDelegate.h>

@class WAUploadedBackup, WABackupInfoTableCell, UIActivityIndicatorView, UIView, UILabel, UISwitch, NSNumber, WABackupViewControllerDataProvider, NSArray, NSString;

@interface BackupViewController : WAWarningViewController <UITableViewDataSource, UITableViewDelegate, WABackupViewControllerDataProviderDelegate> {

	BOOL _needsTableViewReload;
	double _sectionHeight;
	BOOL _loadingVideoEstimate;
	BOOL _animatingCloud;
	WAUploadedBackup* _uploadedInformation;
	WABackupInfoTableCell* _cellBackupInfo;
	UIActivityIndicatorView* _activityIndicator;
	UIView* _viewTableFooter;
	UILabel* _labelStatusMessage;
	UISwitch* _switchIncludeVideos;
	NSNumber* _videoEstimate;
	WABackupViewControllerDataProvider* _dataProvider;
	NSArray* _buttons;

}

@property (nonatomic,retain) WAUploadedBackup * uploadedInformation;                         //@synthesize uploadedInformation=_uploadedInformation - In the implementation block
@property (nonatomic,retain) WABackupInfoTableCell * cellBackupInfo;                         //@synthesize cellBackupInfo=_cellBackupInfo - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                    //@synthesize activityIndicator=_activityIndicator - In the implementation block
@property (nonatomic,retain) UIView * viewTableFooter;                                       //@synthesize viewTableFooter=_viewTableFooter - In the implementation block
@property (nonatomic,retain) UILabel * labelStatusMessage;                                   //@synthesize labelStatusMessage=_labelStatusMessage - In the implementation block
@property (nonatomic,retain) UISwitch * switchIncludeVideos;                                 //@synthesize switchIncludeVideos=_switchIncludeVideos - In the implementation block
@property (nonatomic,readonly) BOOL needsVideoEstimate; 
@property (assign,nonatomic) BOOL loadingVideoEstimate;                                      //@synthesize loadingVideoEstimate=_loadingVideoEstimate - In the implementation block
@property (nonatomic,retain) NSNumber * videoEstimate;                                       //@synthesize videoEstimate=_videoEstimate - In the implementation block
@property (nonatomic,retain) WABackupViewControllerDataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (assign,getter=isAnimatingCloud,nonatomic) BOOL animatingCloud;                    //@synthesize animatingCloud=_animatingCloud - In the implementation block
@property (nonatomic,copy) NSString * statusMessage; 
@property (nonatomic,copy) NSArray * buttons;                                                //@synthesize buttons=_buttons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)showIfPossibleFromTabBarController:(id)arg1 ;
-(void)wa_fontSizeDidChange;
-(void)wa_tintColorDidChange;
-(void)mediaRestoreStatusUpdated:(id)arg1 ;
-(UIView *)viewTableFooter;
-(void)setViewTableFooter:(UIView *)arg1 ;
-(void)configureWarningView:(id)arg1 ;
-(void)dataProviderWillStartSendingUpdates:(id)arg1 ;
-(void)dataProvider:(id)arg1 didUpdateError:(id)arg2 withAction:(/*^block*/id)arg3 ;
-(void)dataProviderDidFinishSendingUpdates:(id)arg1 ;
-(void)dataProvider:(id)arg1 didUpdateStatusMessage:(id)arg2 ;
-(void)dataProvider:(id)arg1 didUpdateAnimation:(BOOL)arg2 ;
-(void)dataProvider:(id)arg1 didUpdateButtons:(id)arg2 ;
-(WABackupInfoTableCell *)cellBackupInfo;
-(void)updateBackupDetails;
-(void)stopAnimatingGears;
-(void)startAnimatingGears;
-(void)setCellBackupInfo:(WABackupInfoTableCell *)arg1 ;
-(void)backupInformationUpdated:(id)arg1 ;
-(void)updateDataProvider;
-(void)reloadTableViewIfNeeded;
-(void)setAnimatingCloud:(BOOL)arg1 ;
-(UILabel *)labelStatusMessage;
-(void)layoutFooterViewAnimated:(BOOL)arg1 ;
-(BOOL)tryToUpdateVideoEstimate;
-(WAUploadedBackup *)uploadedInformation;
-(NSNumber *)videoEstimate;
-(BOOL)loadingVideoEstimate;
-(void)changedIncludeVideos:(id)arg1 ;
-(BOOL)needsVideoEstimate;
-(void)calculateVideoEstimate;
-(void)setVideoEstimate:(NSNumber *)arg1 ;
-(void)setLoadingVideoEstimate:(BOOL)arg1 ;
-(void)dismissModal:(id)arg1 ;
-(void)loadInitialDataProvider;
-(unsigned long long)unmappedIndexForSection:(unsigned long long)arg1 ;
-(BOOL)hasExtraSection;
-(unsigned long long)mappedSectionForIndex:(unsigned long long)arg1 ;
-(UISwitch *)switchIncludeVideos;
-(BOOL)isAnimatingCloud;
-(void)showAutobackupSettings;
-(void)setUploadedInformation:(WAUploadedBackup *)arg1 ;
-(void)setLabelStatusMessage:(UILabel *)arg1 ;
-(void)setSwitchIncludeVideos:(UISwitch *)arg1 ;
-(id)init;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(NSArray *)buttons;
-(void)setDataProvider:(WABackupViewControllerDataProvider *)arg1 ;
-(WABackupViewControllerDataProvider *)dataProvider;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)setStatusMessage:(NSString *)arg1 ;
-(NSString *)statusMessage;
-(void)setButtons:(NSArray *)arg1 ;
@end

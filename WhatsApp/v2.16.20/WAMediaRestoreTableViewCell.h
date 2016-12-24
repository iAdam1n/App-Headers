/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class WAWeakTimer, UILabel, UIProgressView, WABackupIcon, WAMediaRestore;

@interface WAMediaRestoreTableViewCell : UITableViewCell {

	WAWeakTimer* _timer;
	BOOL _showProgressView;
	UILabel* _labelTitle;
	UIProgressView* _progressView;
	UILabel* _labelError;
	WABackupIcon* _backupIcon;
	WAMediaRestore* _currentMediaRestore;

}

@property (nonatomic,retain) UILabel * labelTitle;                              //@synthesize labelTitle=_labelTitle - In the implementation block
@property (nonatomic,retain) UIProgressView * progressView;                     //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UILabel * labelError;                              //@synthesize labelError=_labelError - In the implementation block
@property (nonatomic,retain) WABackupIcon * backupIcon;                         //@synthesize backupIcon=_backupIcon - In the implementation block
@property (nonatomic,retain) WAMediaRestore * currentMediaRestore;              //@synthesize currentMediaRestore=_currentMediaRestore - In the implementation block
@property (assign,nonatomic) BOOL showProgressView;                             //@synthesize showProgressView=_showProgressView - In the implementation block
+(id)loadFromNib;
+(id)statusTextForOperation:(id)arg1 shouldAbbreviate:(BOOL)arg2 ;
+(id)titleTextForStatus:(unsigned long long)arg1 ;
+(id)textForPreparing;
+(unsigned long long)backupIconStateForStatus:(unsigned long long)arg1 ;
+(float)progressForOperation:(id)arg1 ;
+(id)statusTextForStatus:(unsigned long long)arg1 ;
-(UILabel *)labelTitle;
-(void)setLabelTitle:(UILabel *)arg1 ;
-(WABackupIcon *)backupIcon;
-(void)recentMediaStatusUpdated:(id)arg1 ;
-(UILabel *)labelError;
-(void)setCurrentMediaRestore:(WAMediaRestore *)arg1 ;
-(void)mediaRestoreOperationDidUpdate:(id)arg1 ;
-(void)setShowProgressView:(BOOL)arg1 ;
-(WAMediaRestore *)currentMediaRestore;
-(void)timerDidFire;
-(void)setLabelError:(UILabel *)arg1 ;
-(void)setBackupIcon:(WABackupIcon *)arg1 ;
-(BOOL)showProgressView;
-(void)stopTimer;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)awakeFromNib;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)startTimer;
-(UIProgressView *)progressView;
-(void)setProgressView:(UIProgressView *)arg1 ;
-(void)updateAnimation;
-(void)updateFonts;
-(void)updateColors;
@end

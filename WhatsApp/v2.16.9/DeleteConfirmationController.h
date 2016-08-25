/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>

@protocol DeleteConfirmationControllerDelegate;
@class UIView, UIActivityIndicatorView, NSString, UITableView, UILabel, UIButton, UITableViewCell, UIImageView;

@interface DeleteConfirmationController : WAViewController {

	UIView* _spinnerBackgroundView;
	UIActivityIndicatorView* _spinner;
	NSString* _feedbackText;
	id<DeleteConfirmationControllerDelegate> _delegate;
	UITableView* _tableView;
	UIView* _viewThankYou;
	UILabel* _labelThankYou;
	UIView* _viewDeleteButton;
	UIButton* _buttonDelete;
	UITableViewCell* _cellConfirmation;
	UILabel* _labelTitle;
	UILabel* _labelHelperText;
	UIImageView* _imageSadPhone;

}

@property (nonatomic,retain) UITableView * tableView;                                               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * viewThankYou;                                                 //@synthesize viewThankYou=_viewThankYou - In the implementation block
@property (nonatomic,retain) UILabel * labelThankYou;                                               //@synthesize labelThankYou=_labelThankYou - In the implementation block
@property (nonatomic,retain) UIView * viewDeleteButton;                                             //@synthesize viewDeleteButton=_viewDeleteButton - In the implementation block
@property (nonatomic,retain) UIButton * buttonDelete;                                               //@synthesize buttonDelete=_buttonDelete - In the implementation block
@property (nonatomic,retain) UITableViewCell * cellConfirmation;                                    //@synthesize cellConfirmation=_cellConfirmation - In the implementation block
@property (nonatomic,retain) UILabel * labelTitle;                                                  //@synthesize labelTitle=_labelTitle - In the implementation block
@property (nonatomic,retain) UILabel * labelHelperText;                                             //@synthesize labelHelperText=_labelHelperText - In the implementation block
@property (nonatomic,retain) UIImageView * imageSadPhone;                                           //@synthesize imageSadPhone=_imageSadPhone - In the implementation block
@property (nonatomic,copy) NSString * feedbackText;                                                 //@synthesize feedbackText=_feedbackText - In the implementation block
@property (assign,nonatomic,__weak) id<DeleteConfirmationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UILabel *)labelTitle;
-(void)setLabelTitle:(UILabel *)arg1 ;
-(UIButton *)buttonDelete;
-(void)setButtonDelete:(UIButton *)arg1 ;
-(void)setFeedbackText:(NSString *)arg1 ;
-(UILabel *)labelHelperText;
-(void)setLabelHelperText:(UILabel *)arg1 ;
-(void)presentDeleteAccountNetworkRequiredAlert;
-(NSString *)feedbackText;
-(void)presentDeleteAccountUnableToDeleteAlert;
-(void)hideSpinnerWithCompletionHandler:(/*^block*/id)arg1 ;
-(UILabel *)labelThankYou;
-(UIView *)viewDeleteButton;
-(void)setViewDeleteButton:(UIView *)arg1 ;
-(UIView *)viewThankYou;
-(UIImageView *)imageSadPhone;
-(UITableViewCell *)cellConfirmation;
-(void)setViewThankYou:(UIView *)arg1 ;
-(void)setLabelThankYou:(UILabel *)arg1 ;
-(void)setCellConfirmation:(UITableViewCell *)arg1 ;
-(void)setImageSadPhone:(UIImageView *)arg1 ;
-(void)setDelegate:(id<DeleteConfirmationControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<DeleteConfirmationControllerDelegate>)delegate;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)viewDidLoad;
-(void)deleteAction;
-(void)showSpinner;
-(void)cancelAction:(id)arg1 ;
@end


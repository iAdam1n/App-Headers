/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBBugReportReportAProblemViewDelegate;
@class UIView, UITableView, UIButton;

@interface FBBugReportReportAProblemView : UIView {

	UIView* _longDividerBottom;
	double _horizontalMargin;
	double _cancelButtonHeight;
	double _dividerHeight;
	double _dialogMaxWidth;
	UITableView* _tinesTableView;
	UIButton* _cancelButton;
	id<FBBugReportReportAProblemViewDelegate> _delegate;

}

@property (nonatomic,retain) UITableView * tinesTableView;                                           //@synthesize tinesTableView=_tinesTableView - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                                //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic,__weak) id<FBBugReportReportAProblemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)initializeLayoutParameters;
-(UITableView *)tinesTableView;
-(void)setTinesTableView:(UITableView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBBugReportReportAProblemViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBBugReportReportAProblemViewDelegate>)delegate;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
@end

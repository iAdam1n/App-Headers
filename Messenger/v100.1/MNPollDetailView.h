/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNPollDetailTopBarViewDelegate.h>

@protocol MNPollDetailViewDelegate;
@class MNPollDetailTopBarView, UIView, MNLoadingView, MNButton, UITableView, NSString;

@interface MNPollDetailView : UIView <MNPollDetailTopBarViewDelegate> {

	MNPollDetailTopBarView* _topBarView;
	UIView* _topSeparatorView;
	MNLoadingView* _loadingView;
	UIView* _errorView;
	UIView* _bottomSeparatorView;
	MNButton* _submitButtonView;
	UITableView* _contentTableView;
	long long _viewState;
	/*^block*/id _dismissBlock;
	id<MNPollDetailViewDelegate> _delegate;

}

@property (nonatomic,readonly) UITableView * contentTableView;                          //@synthesize contentTableView=_contentTableView - In the implementation block
@property (assign,nonatomic) long long viewState;                                       //@synthesize viewState=_viewState - In the implementation block
@property (nonatomic,copy) id dismissBlock;                                             //@synthesize dismissBlock=_dismissBlock - In the implementation block
@property (assign,nonatomic,__weak) id<MNPollDetailViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dismissBlock;
-(void)setDismissBlock:(id)arg1 ;
-(void)pollDetailTopBarViewDidTapCloseIcon:(id)arg1 ;
-(void)_didTapSubmitButton;
-(void)_hideAllSubviews;
-(void)startLoadingSubmitButton;
-(void)stopLoadingSubmitButton;
-(UITableView *)contentTableView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNPollDetailViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNPollDetailViewDelegate>)delegate;
-(long long)viewState;
-(void)setViewState:(long long)arg1 ;
@end

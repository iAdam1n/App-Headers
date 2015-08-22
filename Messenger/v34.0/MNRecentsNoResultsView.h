/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol MNRecentsNoResultsViewDelegate;
@class UILabel, UIButton;

@interface MNRecentsNoResultsView : UIView {

	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UIButton* _actionButton;
	id<MNRecentsNoResultsViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNRecentsNoResultsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_actionPressed:(id)arg1 ;
-(id)initWithGetAppsEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<MNRecentsNoResultsViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MNRecentsNoResultsViewDelegate>)delegate;
@end

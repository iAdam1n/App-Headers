/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, FBButton;

@interface FBFullscreenBlueButtonEmptyView : UIView {

	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	FBButton* _actionButton;
	/*^block*/id _actionBlock;

}

@property (nonatomic,copy) id actionBlock;              //@synthesize actionBlock=_actionBlock - In the implementation block
-(void)_actionTouchUpInside;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNAttachmentView.h>

@class UIButton, MNAttachmentActionButtonViewModel, NSString;

@interface MNAttachmentActionButton : UIView <MNAttachmentView> {

	UIButton* _button;
	MNAttachmentActionButtonViewModel* _viewModel;

}

@property (nonatomic,copy) MNAttachmentActionButtonViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)tintColorDidChange;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(MNAttachmentActionButtonViewModel *)viewModel;
-(void)setViewModel:(MNAttachmentActionButtonViewModel *)arg1 ;
@end

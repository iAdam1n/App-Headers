/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:51 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(void)setViewModel:(MNAttachmentActionButtonViewModel *)arg1 ;
-(MNAttachmentActionButtonViewModel *)viewModel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
@end


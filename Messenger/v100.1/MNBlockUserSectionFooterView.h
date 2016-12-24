/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNBlockUserSectionFooterViewDelegate;
@class FBRichTextView;

@interface MNBlockUserSectionFooterView : UIView {

	FBRichTextView* _richTextView;
	UIEdgeInsets _edgeInsets;
	id<MNBlockUserSectionFooterViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNBlockUserSectionFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapLearnMore;
-(id)initWithFrame:(CGRect)arg1 attributedString:(id)arg2 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNBlockUserSectionFooterViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNBlockUserSectionFooterViewDelegate>)delegate;
@end

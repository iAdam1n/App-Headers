/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNEphemeralMessagingLifetimePickerViewDelegate;
@class UIPickerView, UIButton, UILabel, NSArray;

@interface MNEphemeralMessagingLifetimePickerView : UIView {

	UIPickerView* _timePickerView;
	UIButton* _cancelButton;
	UIButton* _doneButton;
	UILabel* _titleLabel;
	NSArray* _accessibilityElements;
	id<MNEphemeralMessagingLifetimePickerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNEphemeralMessagingLifetimePickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithTimePickerView:(id)arg1 ;
-(void)setDelegate:(id<MNEphemeralMessagingLifetimePickerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNEphemeralMessagingLifetimePickerViewDelegate>)delegate;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(void)_cancelButtonTapped;
-(void)_doneButtonTapped;
@end
